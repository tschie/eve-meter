[MeterUnderlay]
Meter=Image
ImageName=#@#/shipui/mainunderlay.png
X=(#OffsetX#)
Y=(#OffsetY#)

[MeterDot]
Meter=Image
ImageName=#@#/shipui/maindot.png
ImageTint=10,10,10,220
X=(#OffsetX#)
Y=(#OffsetY#)

[MeterSpeedUnderlay]
Meter=Image
ImageName=#@#/shipui/speedounderlay.png
X=(28 + #OffsetX#)
Y=(106 + #OffsetY#)

[MeterSpeedContainer]
Meter=Roundline
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(135))
RotationAngle=(Rad(-90))
LineStart=45
LineLength=65
LineColor=255,0,0,255
Solid=1
AntiAlias=1

[MeterSpeedOverlay]
Meter=Rotator
MeasureName=#speedPercentMeasure#
Container=MeterSpeedContainer
ImageName=#@#/shipui/speedooverlay.png
StartAngle=(Rad(315))
RotationAngle=(Rad(-90))
OffsetX=79
OffsetY=79
W=(79*2)
H=(79*2)

[MeasureSpeedAngle]
Measure=Calc
Formula=Max(0.0, #speedPercentMeasure# * 90.0) - 45.0
DynamicVariables=1

[MeterSpeedNeedle]
Meter=Image
ImageName=#@#/shipui/heatgaugeneedle.png
ImageRotate=-90
TransformationMatrix=(Cos(Rad([MeasureSpeedAngle])));(-Sin(Rad([MeasureSpeedAngle])));(Sin(Rad([MeasureSpeedAngle])));(Cos(Rad([MeasureSpeedAngle])));(#CenterSpeedX#+[MeterSpeedNeedle:X]-(#CenterSpeedX#+[MeterSpeedNeedle:X])*Cos(Rad([MeasureSpeedAngle]))-(#CenterSpeedY#+[MeterSpeedNeedle:Y])*Sin(Rad([MeasureSpeedAngle])));(#CenterSpeedY#+[MeterSpeedNeedle:Y]+(#CenterSpeedX#+[MeterSpeedNeedle:X])*Sin(Rad([MeasureSpeedAngle]))-(#CenterSpeedY#+[MeterSpeedNeedle:Y])*Cos(Rad([MeasureSpeedAngle])))
X=(75 + #OffsetX#)
Y=(122 + #OffsetY#)
W=12
H=25
DynamicVariables=1

[MeterSpeedString]
Meter=String
MeasureName=#speedStringMeasure#
Text=%1B/s
NumOfDecimals=1
AutoScale=1
StringAlign=Center
FontFace=Eve Sans Neue Exp
FontSize=8
X=(79 + #OffsetX#)
Y=(129 + #OffsetY#)
DynamicVariables=1
InlineSetting=CharacterSpacing | (1/3) | 0

[MeterSpeedMinus]
Meter=Image
ImageName=#@#/shipui/minus.png
X=(26 + #OffsetX#)
Y=(107 + #OffsetY#)
LeftMouseUpAction=#speedMinusClickAction#
LeftMouseDoubleClickAction=#speedMinusDoubleClickAction#

[MeterSpeedPlus]
Meter=Image
ImageName=#@#/shipui/plus.png
X=(119 + #OffsetX#)
Y=(107 + #OffsetY#)
LeftMouseUpAction=#speedPlusClickAction#
LeftMouseDoubleClickAction=#speedPlusDoubleClickAction#

; GAUGES

[MeterShieldGauge]
Meter=Image
ImageName=#@#/shipui/gauge1.png
ImageTint=240,240,240,255
X=(6 + #OffsetX#)
Y=(6 + #OffsetY#)

[MeterShieldGaugeOverlayContainer]
Meter=Roundline
MeasureName=#shieldGaugeMeasure#
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(0))
RotationAngle=(Rad(-180))
LineLength=72
LineColor=0,255,0,255
Solid=1
AntiAlias=1

[MeterShieldGaugeOverlay]
Meter=Image
ImageName=#@#/shipui/gauge1.png
ImageTint=255,0,0,250
Container=MeterShieldGaugeOverlayContainer
X=6
Y=6

[MeterArmorGauge]
Meter=Image
ImageName=#@#/shipui/gauge2.png
ImageTint=240,230,240,255
X=(6 + #OffsetX#)
Y=(6 + #OffsetY#)

[MeterArmorGaugeOverlayContainer]
Meter=Roundline
MeasureName=#armorGaugeMeasure#
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(0))
RotationAngle=(Rad(-180))
LineLength=72
LineColor=237,27,27,255
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterArmorGaugeOverlay]
Meter=Image
ImageName=#@#/shipui/gauge2.png
ImageTint=255,0,0,255
Container=MeterArmorGaugeOverlayContainer
X=6
Y=6

[MeterStructureGauge]
Meter=Image
ImageName=#@#/shipui/gauge3.png
ImageTint=240,240,240,255
X=(6 + #OffsetX#)
Y=(6 + #OffsetY#)

[MeterStructureGaugeOverlayContainer]
Meter=Roundline
MeasureName=#structureGaugeMeasure#
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(0))
RotationAngle=(Rad(-180))
LineLength=54
LineColor=255,0,0,255
Solid=1
AntiAlias=1

[MeterStructureGaugeOverlay]
Meter=Image
ImageName=#@#/shipui/gauge3.png
ImageTint=255,0,0,250
Container=MeterStructureGaugeOverlayContainer
X=6
Y=6

; HEAT

[MeterHiHeat]
Meter=Image
ImageName=#@#/shipui/hiheat_0.png
X=(94 + #OffsetX#)
Y=(43 + #OffsetY#)

[MeasureHiHeat]
Measure=Calc
IfCondition=#heatHiMeasure# < #hiHeat_1#
IfTrueAction=[!SetOption MeterHiHeat ImageName "#@#/shipui/hiheat_0.png"]
IfCondition2=#heatHiMeasure# >= #hiHeat_1#
IfTrueAction2=[!SetOption MeterHiHeat ImageName "#@#/shipui/hiheat_1.png"]
IfCondition3=#heatHiMeasure# >= #hiHeat_2#
IfTrueAction3=[!SetOption MeterHiHeat ImageName "#@#/shipui/hiheat_2.png"]
IfCondition4=#heatHiMeasure# >= #hiHeat_3#
IfTrueAction4=[!SetOption MeterHiHeat ImageName "#@#/shipui/hiheat_3.png"]
IfCondition5=#heatHiMeasure# >= #hiHeat_4#
IfTrueAction5=[!SetOption MeterHiHeat ImageName "#@#/shipui/hiheat_4.png"]
IfConditionMode=1

[MeterMedHeat]
Meter=Image
ImageName=#@#/shipui/medheat_0.png
X=(58 + #OffsetX#)
Y=(37 + #OffsetY#)

[MeasureMedHeat]
Measure=Calc
IfCondition=#heatMdMeasure# < #mdHeat_1#
IfTrueAction=[!SetOption MeterMedHeat ImageName "#@#/shipui/medheat_0.png"]
IfCondition2=#heatMdMeasure# >= #mdHeat_1#
IfTrueAction2=[!SetOption MeterMedHeat ImageName "#@#/shipui/medheat_1.png"]
IfCondition3=#heatMdMeasure# >= #mdHeat_2#
IfTrueAction3=[!SetOption MeterMedHeat ImageName "#@#/shipui/medheat_2.png"]
IfCondition4=#heatMdMeasure# >= #mdHeat_3#
IfTrueAction4=[!SetOption MeterMedHeat ImageName "#@#/shipui/medheat_3.png"]
IfCondition5=#heatMdMeasure# >= #mdHeat_4#
IfTrueAction5=[!SetOption MeterMedHeat ImageName "#@#/shipui/medheat_4.png"]
IfConditionMode=1

[MeterLowHeat]
Meter=Image
ImageName=#@#/shipui/lowheat_0.png
X=(38 + #OffsetX#)
Y=(43 + #OffsetY#)

[MeasureLowHeat]
Measure=Calc
IfCondition=#heatLoMeasure# < #loHeat_1#
IfTrueAction=[!SetOption MeterLowHeat ImageName "#@#/shipui/lowheat_0.png"]
IfCondition2=#heatLoMeasure# >= #loHeat_1#
IfTrueAction2=[!SetOption MeterLowHeat ImageName "#@#/shipui/lowheat_1.png"]
IfCondition3=#heatLoMeasure# >= #loHeat_2#
IfTrueAction3=[!SetOption MeterLowHeat ImageName "#@#/shipui/lowheat_2.png"]
IfCondition4=#heatLoMeasure# >= #loHeat_3#
IfTrueAction4=[!SetOption MeterLowHeat ImageName "#@#/shipui/lowheat_3.png"]
IfCondition5=#heatLoMeasure# >= #loHeat_4#
IfTrueAction5=[!SetOption MeterLowHeat ImageName "#@#/shipui/lowheat_4.png"]
IfConditionMode=1

[MeterHeatDivider]
Meter=Image
ImageName=#@#/shipui/heatdivider.png
X=(57 + #OffsetX#)
Y=(44 + #OffsetY#)

; CAPACITOR

[MeasureCapPercent]
; measures the percentage of fragments used
Measure=Calc
Formula=1.0 * Floor(#capacitorUsedMeasure# / (1.0/18.0)) * (1.0/18.0)

[MeasureFragRemainder]
; measures the percentage of leftover fragment
Measure=Calc
Formula=1.0 - (#capacitorUsedMeasure# % (1.0/18.0)) / (1.0/18.0)

[MeasureCellRemainder]
Measure=Calc
Formula=1.0 - (#capacitorUsedMeasure# % (1.0/72.0)) / (1.0/72.0)
DynamicVariables=1

[MeterCapacitor]
Meter=Image
ImageName=#@#/shipui/capacitor.png
W=56
H=56
X=(52 + #OffsetX#)
Y=(52 + #OffsetY#)

[MeterCapCover]
Meter=Roundline
MeasureName=MeasureCapPercent
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(-100))
RotationAngle=(Rad(360))
LineStart=0
LineLength=28
LineColor=0,0,0,200
Solid=1
AntiAlias=1

[MeasureCellBlinkLoop]
Measure=Loop
StartValue=0
EndValue=1
Increment=1

[MeasureShouldBlink]
Measure=Calc
Formula=Ceil(1.0 * Frac([MeasureCellRemainder]))
DynamicVariables=1

[MeterCellBlink]
Meter=Roundline
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(-100 + [MeasureCapPercent] * 360))
RotationAngle=(Rad(22))
LineStart=(3 + (5 - [MeasureShouldBlink]) + Floor([MeasureFragRemainder] / 0.25) * 5 + 5 * [MeasureCellBlinkLoop] * [MeasureShouldBlink])
LineLength=28
LineColor=255,0,0,255
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterCapacitorBlink]
Meter=Image
ImageName=#@#/shipui/capacitor_blurred.png
Container=MeterCellBlink
W=56
H=56
X=52
Y=52

[MeterFragCover]
Meter=Roundline
X=(0 + #OffsetX#)
Y=(0 + #OffsetY#)
W=160
H=160
StartAngle=(Rad(-100 + [MeasureCapPercent] * 360))
RotationAngle=(Rad(20))
LineStart=(8 + Ceil([MeasureFragRemainder] / 0.25) * 5)
LineLength=28
LineColor=0,0,0,200
Solid=1
AntiAlias=1
DynamicVariables=1

; NEEDLES

[MeasureLowHeatAngle]
Measure=Calc
Formula=Max(-54.0, Max(0.0, [#heatLoMeasure#] - #loHeat_1#) / (#loHeat_5# - #loHeat_1#) * -54.0)
DynamicVariables=1

[MeterLowHeatNeedle]
Meter=Image
ImageName=#@#/shipui/heatgaugeneedle.png
TransformationMatrix=(Cos(Rad([MeasureLowHeatAngle])));(-Sin(Rad([MeasureLowHeatAngle])));(Sin(Rad([MeasureLowHeatAngle])));(Cos(Rad([MeasureLowHeatAngle])));(#CenterX#+[MeterLowHeatNeedle:X]-(#CenterX#+[MeterLowHeatNeedle:X])*Cos(Rad([MeasureLowHeatAngle]))-(#CenterY#+[MeterLowHeatNeedle:Y])*Sin(Rad([MeasureLowHeatAngle])));(#CenterY#+[MeterLowHeatNeedle:Y]+(#CenterX#+[MeterLowHeatNeedle:X])*Sin(Rad([MeasureLowHeatAngle]))-(#CenterY#+[MeterLowHeatNeedle:Y])*Cos(Rad([MeasureLowHeatAngle])))
X=(38 + #OffsetX#)
Y=(73 + #OffsetY#)
DynamicVariables=1

[MeasureMedHeatAngle]
Measure=Calc
Formula=Max(-56.0, Max(0.0, [#heatMdMeasure#] - #mdHeat_1#) / (#mdHeat_5# - #mdHeat_1#) * -56.0) - 60.0
DynamicVariables=1

[MeterMedHeatNeedle]
Meter=Image
ImageName=#@#/shipui/heatgaugeneedle.png
TransformationMatrix=(Cos(Rad([MeasureMedHeatAngle])));(-Sin(Rad([MeasureMedHeatAngle])));(Sin(Rad([MeasureMedHeatAngle])));(Cos(Rad([MeasureMedHeatAngle])));(#CenterX#+[MeterMedHeatNeedle:X]-(#CenterX#+[MeterMedHeatNeedle:X])*Cos(Rad([MeasureMedHeatAngle]))-(#CenterY#+[MeterMedHeatNeedle:Y])*Sin(Rad([MeasureMedHeatAngle])));(#CenterY#+[MeterMedHeatNeedle:Y]+(#CenterX#+[MeterMedHeatNeedle:X])*Sin(Rad([MeasureMedHeatAngle]))-(#CenterY#+[MeterMedHeatNeedle:Y])*Cos(Rad([MeasureMedHeatAngle])))
X=(38 + #OffsetX#)
Y=(73 + #OffsetY#)
DynamicVariables=1

[MeasureHiHeatAngle]
Measure=Calc
Formula=Max(-54.0, Max(0.0, [#heatHiMeasure#] - #hiHeat_1#) / (#hiHeat_5# - #hiHeat_1#) * -54.0) - 124.0
DynamicVariables=1

[MeterHiHeatNeedle]
Meter=Image
ImageName=#@#/shipui/heatgaugeneedle.png
TransformationMatrix=(Cos(Rad([MeasureHiHeatAngle])));(-Sin(Rad([MeasureHiHeatAngle])));(Sin(Rad([MeasureHiHeatAngle])));(Cos(Rad([MeasureHiHeatAngle])));(#CenterX#+[MeterHiHeatNeedle:X]-(#CenterX#+[MeterHiHeatNeedle:X])*Cos(Rad([MeasureHiHeatAngle]))-(#CenterY#+[MeterHiHeatNeedle:Y])*Sin(Rad([MeasureHiHeatAngle])));(#CenterY#+[MeterHiHeatNeedle:Y]+(#CenterX#+[MeterHiHeatNeedle:X])*Sin(Rad([MeasureHiHeatAngle]))-(#CenterY#+[MeterHiHeatNeedle:Y])*Cos(Rad([MeasureHiHeatAngle])))
X=(38 + #OffsetX#)
Y=(73 + #OffsetY#)
DynamicVariables=1

; EXPAND BUTTONS

[MeasureUtilitiesExpandedOpposite]
Measure=Calc
Formula=1 - #utilitiesExpanded#
DynamicVariables=1

[MeterExpandLeft]
Meter=Image
ImageName=#@#/shipui/expandbtnright.png
LeftMouseUpAction=[!ToggleMeterGroup "UtilButtons"][!SetVariable utilitiesExpanded [MeasureUtilitiesExpandedOpposite]][!Update]
X=(7 + #OffsetX#)
Y=(74 + #OffsetY#)

[MeasureUtilitiesExpanded]
Measure=Calc
Formula=#utilitiesExpanded#
IfEqualValue=0
IfEqualAction=[!SetOption MeterExpandLeft ImageName "#@#/shipui/expandbtnleft.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterExpandLeft ImageName "#@#/shipui/expandbtnright.png"]
DynamicVariables=1

[MeasureModulesExpandedOpposite]
Measure=Calc
Formula=1 - #modulesExpanded#
DynamicVariables=1

[MeterExpandRight]
Meter=Image
ImageName=#@#/shipui/expandbtnleft.png
X=(123 + #OffsetX#)
Y=(74 + #OffsetY#)
LeftMouseUpAction=[!ToggleMeterGroup "Modules"][!SetVariable modulesExpanded [MeasureModulesExpandedOpposite]][!Update]
DynamicVariables=1

[MeasureModulesExpanded]
Measure=Calc
Formula=#modulesExpanded#
IfEqualValue=0
IfEqualAction=[!SetOption MeterExpandRight ImageName "#@#/shipui/expandbtnright.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterExpandRight ImageName "#@#/shipui/expandbtnleft.png"]
DynamicVariables=1