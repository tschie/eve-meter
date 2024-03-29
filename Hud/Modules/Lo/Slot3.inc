[MeterSlotBtnLo3]
Meter=Image
Group=Modules | SlotButtons | LoSlot3
ImageName=#@#/shipui/slotmaincombined.png
X=(269 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo3Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot3
ImageName=#@#/shipui/slotdamage_[#lo3HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo3Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot3
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo3Overload]
Measure=Calc
Formula=#lo3OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo3Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo3Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo3Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo3Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot3
ImageName=#lo3_icon#
X=-8r
Y=3r
W=48
H=48