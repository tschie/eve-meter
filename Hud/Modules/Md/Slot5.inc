[MeterSlotBtnMd5]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd5Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnMd5Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnMd5Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnMd5Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnMd5Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnMd5Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot5
ImageName=#md5_icon#
X=-8r
Y=3r
W=48
H=48