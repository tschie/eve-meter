[MeterSlotBtnLo8]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo8Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotdamage_[#lo8HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo8Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureLo8Overload]
Measure=Calc
Formula=#lo8OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo8Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo8Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo8Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo8Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#lo8_icon#
X=-8r
Y=3r
W=48
H=48