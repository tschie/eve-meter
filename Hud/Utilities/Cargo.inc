[MeasureCargoGlowHeight]
Measure=Calc
Formula=(1 - #cargoMeasure#) * 30
DynamicVariables=1

[MeterCargoGlowMask]
Meter=Image
W=30
H=([MeasureCargoGlowHeight])
SolidColor=0,0,0
X=(-44 + #OffsetX#)
Y=(49 + 30 - [MeasureCargoGlowHeight] + #OffsetY#)
DynamicVariables=1

[MeterCargoUtilBtnGlow]
Meter=Image
Group=UtilButtons
ImageName=#@#/shipui/utilbtnglow.png
ImageTint=59,110,137,255
X=-3
Y=(-3 + -30 + [MeasureCargoGlowHeight])
Container=MeterCargoGlowMask
DynamicVariables=1

[MeterCargoUtilBtn]
Meter=Image
Group=UtilButtons
ImageName=#@#/shipui/utilbtnbaseandshadow.png
X=(-47 + #OffsetX#)
Y=(45 + #OffsetY#)
LeftMouseUpAction=#cargoLeftMouseUpAction#

[MeterCargoUtilBtnIcon]
Meter=Image
Group=UtilButtons
ImageName=#@#/icons/44_32_10.png
X=(-45 + #OffsetX#)
Y=(47 + #OffsetY#)