[MeterSlotBtnMd5]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd5Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotdamage_[#md5HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnMd5Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureMd5Overload]
Measure=Calc
Formula=#md5OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnMd5Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnMd5Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnMd5Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnMd5Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#md5_icon#
X=-8r
Y=3r
W=48
H=48