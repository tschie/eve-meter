[MeterSlotBtnMd1]
Meter=Image
Group=Modules | SlotButtons | MdSlot1
ImageName=#@#/shipui/slotmaincombined.png
X=(168 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd1Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot1
ImageName=#@#/shipui/slotdamage_[#md1HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd1Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot1
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd1Overload]
Measure=Calc
Formula=#md1OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd1Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd1Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd1Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd1Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot1
ImageName=#md1_icon#
X=-8r
Y=3r
W=48
H=48