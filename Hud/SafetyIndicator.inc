[MeterSafetyIndicatorBtnGlow]
Meter=Image
ImageName=#@#/shipui/utilbtnglow.png
ImageTint=0,0,0,200
W=24
H=24
X=(-9 + #OffsetX#)
Y=(-20 + #OffsetY#)

[MeterSafetyIndicatorBtn]
Meter=Image
ImageName=#@#/shipui/utilbtnbaseandshadow.png
W=24
H=24
X=0r
Y=0r

[MeterSafetyIndicatorGlow]
Meter=Image
ImageName=#@#/shipui/utilbtnglow2.png
W=9
H=9
X=7r
Y=8r

[MeasureSafetyIndicatorGlowColor]
Measure=Calc
Formula=MeasureWebcam
IfEqualValue=0
IfEqualAction=[!SetOption MeterSafetyIndicatorGlow ImageTint "78,198,65,255"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSafetyIndicatorGlow ImageTint "201,18,18,255"]