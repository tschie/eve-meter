[MeterSlotBtnMd2]
Meter=Image
Group=Modules | SlotButtons | MdSlot2
ImageName=#@#/shipui/slotmaincombined.png
X=(219 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd2Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot2
ImageName=#@#/shipui/slotdamage_[#md2HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd2Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot2
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd2Overload]
Measure=Calc
Formula=#md2OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd2Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd2Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd2Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd2Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot2
ImageName=#md2_icon#
X=-8r
Y=3r
W=48
H=48