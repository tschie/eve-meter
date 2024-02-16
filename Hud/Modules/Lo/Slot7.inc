[MeterSlotBtnLo7]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo7Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotdamage_[#lo7HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo7Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureLo7Overload]
Measure=Calc
Formula=#lo7OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo7Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo7Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo7Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo7Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#lo7_icon#
X=-8r
Y=3r
W=48
H=48