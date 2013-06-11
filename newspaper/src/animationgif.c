/**
 * Bibliothèque de fonctions d'animations
 *
 * @file    animationgif.c
 * @author  Cyrille Meichel <cmeichel@digitaleo.com>
 * @author  Manuel Hervo <mhervo@digitaleo.com>
 * @version 0.1
 */

#include <stdio.h>
#include <gif_lib.h>
#include <string.h>
#include <malloc.h>
#include "animationgif.h"
#include "ledmatrix.h"


int extractRectangle(GifFileType* gif, unsigned int frameNum, unsigned int top, unsigned int left, unsigned int height, unsigned int width, unsigned char* data);
int rectangle2Matrix(unsigned char* matrixData, unsigned char* data, unsigned int height, unsigned int width);
void printRectangle(unsigned char* data, unsigned int height, unsigned int width);


/**
 * Animation that play an animated gif
 *
 * @param  matrix      La matrice
 * @param  frameNumber Le numéro de la frame courante
 * @param  userData    Données spécifiques
 *
 * @return Animation's status
 */
int gifAnimation(LEDMATRIX* matrix, int frameNumber, void* userData)
{
	GifFileType* gif = (GifFileType*)userData;
	unsigned char* data;
	
	data = (unsigned char*) malloc(matrix->viewportWidth * matrix->viewportHeight*8);
	
	extractRectangle(gif, frameNumber, 0, 0, matrix->viewportHeight*8, matrix->viewportWidth, data);
	rectangle2Matrix(matrix->viewport, data, matrix->viewportHeight*8, matrix->viewportWidth);
	
	/* Send the data to the matrix */
	matrixSendViewport(matrix);
	
	free(data);
	return ANIMATION_SUCCESS;
}

int extractRectangle(GifFileType* gif, unsigned int frameNum, unsigned int top, unsigned int left, unsigned int height, unsigned int width, unsigned char* data)
{
	unsigned int realWidth = width;
	unsigned int realHeight = height;
	unsigned int x;
	unsigned int y;
	
	if (frameNum>=gif->ImageCount) return GIF_ERROR;
	memset(data, 0xFF, width*height);
	
	if (width+left > gif->SavedImages[frameNum].ImageDesc.Width) realWidth = gif->SavedImages[frameNum].ImageDesc.Width-left;
	if (height+top > gif->SavedImages[frameNum].ImageDesc.Height) realHeight = gif->SavedImages[frameNum].ImageDesc.Height-top;
	
	for(y=top; y<realHeight+top; y++) {
		for(x=left; x<realWidth+left; x++) {
			data[(y-top) * width + x-left] = gif->SavedImages[frameNum].RasterBits[y*gif->SavedImages[frameNum].ImageDesc.Width+x];
		}
	}
	return GIF_OK;
}

int rectangle2Matrix(unsigned char* matrixData, unsigned char* data, unsigned int height, unsigned int width)
{
	unsigned int x;
	unsigned int y;
	unsigned int byteOffset;
	unsigned char byte;
	
	memset(matrixData, 0, (height/8)*width);
	
	for(x=0; x<width; x++) {
		for(y=0; y<height; y++) {
			byteOffset = (height-y-1)/8;
			byte = (data[y*width + x]>0 ? 0 : 1) << y % 8;
			matrixData[(height/8)*x+byteOffset] |= byte;
		}
	}
	return GIF_OK;
}

void printRectangle(unsigned char* data, unsigned int height, unsigned int width)
{
	unsigned int x;
	unsigned int y;
	for(y=0; y<height; y++) {
		for(x=0; x<width; x++) {
			printf("%02X", data[y*width+x]);
		}
		printf("\n");
	}
}

GifFileType* openGifFile(char* filename)
{
	GifFileType* gif;
	if ((gif = DGifOpenFileName("foo2.gif")) == 0) {
		printf("An error occured while opening\n");
		return 0;
	}
	
	if (DGifSlurp(gif) != GIF_OK) {
		printf("An error occured while reading\n");
		return 0;
	}
	return gif;
}

void closeGifFile(GifFileType* gif)
{
	DGifCloseFile(gif);
}


/* vim: set expandtab ai ts=4 sw=4 nu:
*/
