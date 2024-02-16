[MeterSlotBtnMd8]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd8Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotdamage_[#md8HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd8Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureMd8Overload]
Measure=Calc
Formula=#md8OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd8Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd8Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd8Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd8Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#md8_icon#
X=-8r
Y=3r
W=48
H=48