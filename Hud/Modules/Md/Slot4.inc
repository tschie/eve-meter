[MeterSlotBtnMd4]
Meter=Image
Group=Modules | SlotButtons | MdSlot4
ImageName=#@#/shipui/slotmaincombined.png
X=(319 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd4Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot4
ImageName=#@#/shipui/slotdamage_[#md4HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd4Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot4
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd4Overload]
Measure=Calc
Formula=#md4OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd4Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd4Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd4Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd4Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot4
ImageName=#md4_icon#
X=-8r
Y=3r
W=48
H=48