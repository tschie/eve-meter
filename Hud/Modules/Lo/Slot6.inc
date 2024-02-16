[MeterSlotBtnLo6]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo6Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotdamage_[#lo6HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo6Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo6Overload]
Measure=Calc
Formula=#lo6OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo6Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo6Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo6Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo6Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#lo5_icon#
X=-8r
Y=3r
W=48
H=48