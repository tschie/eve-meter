[MeterSlotBtnLo1]
Meter=Image
Group=Modules | SlotButtons | LoSlot1
ImageName=#@#/shipui/slotmaincombined.png
X=(169 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo1Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot1
ImageName=#@#/shipui/slotdamage_[#lo1HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo1Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot1
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo1Overload]
Measure=Calc
Formula=#lo1OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo1Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo1Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo1Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo1Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot1
ImageName=#lo1_icon#
X=-8r
Y=3r
W=48
H=48