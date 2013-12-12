v 20110115 2
C 40000 40000 0 0 0 title-B.sym
C 52200 49000 1 90 0 connector26-2.sym
{
T 41200 49800 5 10 1 1 90 6 1
refdes=CONN1
T 41250 49400 5 10 0 0 90 0 1
device=CONNECTOR_26
T 41050 49400 5 10 0 0 90 0 1
footprint=DIN41651_26S
}
C 47500 42100 1 0 0 74138-2.sym
{
T 47800 45840 5 10 0 0 0 0 1
device=74138
T 47800 45640 5 10 0 0 0 0 1
footprint=DIP16
T 49200 45500 5 10 1 1 0 6 1
refdes=U1
}
C 55500 42500 1 0 0 connector16-2.sym
{
T 56200 49400 5 10 1 1 0 6 1
refdes=CONN3
T 55800 49350 5 10 0 0 0 0 1
device=CONNECTOR_16
T 55800 49550 5 10 0 0 0 0 1
footprint=DIN41651_16S
}
N 50100 48600 50100 49100 4
C 46000 43400 1 270 0 gnd-1.sym
N 47500 43500 47000 43500 4
N 47000 43100 47000 43500 4
N 47000 43300 46300 43300 4
N 47000 43100 47500 43100 4
N 47300 48600 47300 49100 4
N 47700 48600 47700 49100 4
N 48500 48600 48500 49100 4
C 42500 47400 1 0 0 vcc-1.sym
N 42100 49100 42100 47100 4
N 42100 47100 42700 47100 4
N 42700 47100 42700 47400 4
N 55400 48900 55500 48900 4
N 55400 48500 55500 48500 4
N 55400 47700 55500 47700 4
C 50400 48600 1 270 0 io-1.sym
{
T 50600 47700 5 10 1 0 270 0 1
net=SCLK:1
T 51000 48400 5 10 0 0 270 0 1
device=none
T 50500 47700 5 10 1 1 270 1 1
value=IO
}
C 48800 48600 1 270 0 io-1.sym
{
T 49000 47700 5 10 1 0 270 0 1
net=MOSI:1
T 49400 48400 5 10 0 0 270 0 1
device=none
T 48900 47700 5 10 1 1 270 1 1
value=IO
}
N 48900 49100 48900 48600 4
N 50500 49100 50500 48600 4
C 47200 48600 1 270 0 io-1.sym
{
T 47400 47700 5 10 1 0 270 0 1
net=CS0:1
T 47800 48400 5 10 0 0 270 0 1
device=none
T 47300 47700 5 10 1 1 270 1 1
value=IO
}
C 47600 48600 1 270 0 io-1.sym
{
T 47800 47700 5 10 1 0 270 0 1
net=CS1:1
T 48200 48400 5 10 0 0 270 0 1
device=none
T 47700 47700 5 10 1 1 270 1 1
value=IO
}
C 48400 48600 1 270 0 io-1.sym
{
T 48600 47700 5 10 1 0 270 0 1
net=CS2:1
T 49000 48400 5 10 0 0 270 0 1
device=none
T 48500 47700 5 10 1 1 270 1 1
value=IO
}
C 47100 45200 1 180 0 io-1.sym
{
T 46200 45000 5 10 1 0 180 0 1
net=CS0:1
T 46900 44600 5 10 0 0 180 0 1
device=none
T 46200 45100 5 10 1 1 180 1 1
value=IO
}
C 47100 44800 1 180 0 io-1.sym
{
T 46200 44600 5 10 1 0 180 0 1
net=CS1:1
T 46900 44200 5 10 0 0 180 0 1
device=none
T 46200 44700 5 10 1 1 180 1 1
value=IO
}
C 47100 44400 1 180 0 io-1.sym
{
T 46200 44200 5 10 1 0 180 0 1
net=CS2:1
T 46900 43800 5 10 0 0 180 0 1
device=none
T 46200 44300 5 10 1 1 180 1 1
value=IO
}
N 47100 45100 47500 45100 4
N 47100 44700 47500 44700 4
N 47100 44300 47500 44300 4
C 50000 48600 1 270 0 io-1.sym
{
T 50200 47700 5 10 1 0 270 0 1
net=EN:1
T 50600 48400 5 10 0 0 270 0 1
device=none
T 50100 47700 5 10 1 1 270 1 1
value=IO
}
C 47100 42800 1 180 0 io-1.sym
{
T 46200 42600 5 10 1 0 180 0 1
net=EN:1
T 46900 42200 5 10 0 0 180 0 1
device=none
T 46200 42700 5 10 1 1 180 1 1
value=IO
}
N 47100 42700 47500 42700 4
C 55400 46600 1 180 0 io-1.sym
{
T 54500 46400 5 10 1 0 180 0 1
net=MOSI:1
T 55200 46000 5 10 0 0 180 0 1
device=none
T 54500 46500 5 10 1 1 180 1 1
value=IO
}
C 55400 47400 1 180 0 io-1.sym
{
T 54500 47200 5 10 1 0 180 0 1
net=SCLK:1
T 55200 46800 5 10 0 0 180 0 1
device=none
T 54500 47300 5 10 1 1 180 1 1
value=IO
}
C 55400 48200 1 180 0 io-1.sym
{
T 54500 48000 5 10 1 0 180 0 1
net=MCS0:1
T 55200 47600 5 10 0 0 180 0 1
device=none
T 54500 48100 5 10 1 1 180 1 1
value=IO
}
C 55400 49000 1 180 0 io-1.sym
{
T 54500 48800 5 10 1 0 180 0 1
net=MCS1:1
T 55200 48400 5 10 0 0 180 0 1
device=none
T 54500 48900 5 10 1 1 180 1 1
value=IO
}
C 55400 48600 1 180 0 io-1.sym
{
T 54500 48400 5 10 1 0 180 0 1
net=MCS2:1
T 55200 48000 5 10 0 0 180 0 1
device=none
T 54500 48500 5 10 1 1 180 1 1
value=IO
}
C 55400 47800 1 180 0 io-1.sym
{
T 54500 47600 5 10 1 0 180 0 1
net=MCS3:1
T 55200 47200 5 10 0 0 180 0 1
device=none
T 54500 47700 5 10 1 1 180 1 1
value=IO
}
C 49700 45000 1 0 0 io-1.sym
{
T 50600 45200 5 10 1 0 0 0 1
net=MCS0:1
T 49900 45600 5 10 0 0 0 0 1
device=none
T 50600 45100 5 10 1 1 0 1 1
value=IO
}
C 49700 44600 1 0 0 io-1.sym
{
T 50600 44800 5 10 1 0 0 0 1
net=MCS1:1
T 49900 45200 5 10 0 0 0 0 1
device=none
T 50600 44700 5 10 1 1 0 1 1
value=IO
}
C 49700 44200 1 0 0 io-1.sym
{
T 50600 44400 5 10 1 0 0 0 1
net=MCS2:1
T 49900 44800 5 10 0 0 0 0 1
device=none
T 50600 44300 5 10 1 1 0 1 1
value=IO
}
C 49700 43800 1 0 0 io-1.sym
{
T 50600 44000 5 10 1 0 0 0 1
net=MCS3:1
T 49900 44400 5 10 0 0 0 0 1
device=none
T 50600 43900 5 10 1 1 0 1 1
value=IO
}
N 55400 48100 55500 48100 4
N 55400 47300 55500 47300 4
N 55400 46500 55500 46500 4
N 49700 45100 49500 45100 4
N 49700 44700 49500 44700 4
N 49700 44300 49500 44300 4
N 49700 43900 49500 43900 4
C 51200 48300 1 0 0 gnd-1.sym
C 54900 46200 1 270 0 gnd-1.sym
N 55200 46100 55500 46100 4
N 51300 48600 51300 49100 4
T 50100 40700 9 10 1 0 0 0 1
Chip select
T 54000 40100 9 10 1 0 0 0 1
M. Hervo & C. Meichel
T 53900 40400 9 10 1 0 0 0 1
2013-06-23
T 49900 40400 9 10 1 0 0 0 1
chipselect.sch
T 50000 40100 9 10 1 0 0 0 1
1
T 51500 40100 9 10 1 0 0 0 1
1
C 42300 44800 1 0 0 capacitor-2.sym
{
T 42500 45500 5 10 0 0 0 0 1
device=POLARIZED_CAPACITOR
T 42500 45300 5 10 1 1 0 0 1
refdes=C1
T 42500 45700 5 10 0 0 0 0 1
symversion=0.1
T 42300 44800 5 10 0 0 0 0 1
footprint=RADIAL_CAN 300
T 42300 44800 5 10 1 1 0 0 1
value=1uF
}
C 41800 45300 1 0 0 vcc-1.sym
C 43100 44400 1 0 0 gnd-1.sym
N 42000 45300 42000 45000 4
N 42000 45000 42300 45000 4
N 43200 45000 43200 44700 4