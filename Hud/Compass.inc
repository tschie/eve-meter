[MeterCompassUnderlay]
Meter=Image
ImageName=#@#/sensorsuite/compass_underlay.png
X=(-20 + #OffsetX#)
Y=(-20 + #OffsetY#)

[MeterCompassCenterline]
Meter=Image
ImageName=#@#/sensorsuite/compass_centerline.png
ImageAlpha=100
X=(-20 + #OffsetX#)
Y=(-20 + #OffsetY#)

[MeterCompassDots]
Meter=Rotator
MeasureName=#compassDotsMeasure#
ImageName=#@#/sensorsuite/compass_dots.png
ImageAlpha=100
StartAngle=(Rad(45))
RotationAngle=(Rad(360))
X=(-61 + #OffsetX#)
Y=(-61 + #OffsetY#)
OffsetX=100
OffsetY=100
W=(Sqrt(200 ** 2 + 200 ** 2))
H=(Sqrt(200 ** 2 + 200 ** 2))