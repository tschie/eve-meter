[MeterSlotBtnMd6]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd6Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotdamage_[#md6HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd6Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd6Overload]
Measure=Calc
Formula=#md6OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd6Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd6Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd6Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd6Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#md5_icon#
X=-8r
Y=3r
W=48
H=48