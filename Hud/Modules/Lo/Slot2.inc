[MeterSlotBtnLo2]
Meter=Image
Group=Modules | SlotButtons | LoSlot2
ImageName=#@#/shipui/slotmaincombined.png
X=(219 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo2Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot2
ImageName=#@#/shipui/slotdamage_[#lo2HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo2Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot2
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo2Overload]
Measure=Calc
Formula=#lo2OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo2Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo2Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo2Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo2Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot2
ImageName=#lo2_icon#
X=-8r
Y=3r
W=48
H=48