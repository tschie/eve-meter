[MeterSlotBtnMd3]
Meter=Image
Group=Modules | SlotButtons | MdSlot3
ImageName=#@#/shipui/slotmaincombined.png
X=(269 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd3Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot3
ImageName=#@#/shipui/slotdamage_[#md3HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd3Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot3
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd3Overload]
Measure=Calc
Formula=#md3OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd3Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd3Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd3Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd3Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot3
ImageName=#md3_icon#
X=-8r
Y=3r
W=48
H=48