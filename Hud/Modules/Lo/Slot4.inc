[MeterSlotBtnLo4]
Meter=Image
Group=Modules | SlotButtons | LoSlot4
ImageName=#@#/shipui/slotmaincombined.png
X=(319 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo4Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot4
ImageName=#@#/shipui/slotdamage_[#lo4HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo4Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot4
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo4Overload]
Measure=Calc
Formula=#lo4OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo4Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo4Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo4Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo4Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot4
ImageName=#lo4_icon#
X=-8r
Y=3r
W=48
H=48