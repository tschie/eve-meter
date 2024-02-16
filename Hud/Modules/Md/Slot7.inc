[MeterSlotBtnMd7]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd7Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotdamage_[#md7HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd7Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureMd7Overload]
Measure=Calc
Formula=#md7OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd7Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd7Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd7Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd7Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#md7_icon#
X=-8r
Y=3r
W=48
H=48