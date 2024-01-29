[MeterSlotBtnMd8]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd8Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnMd8Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnMd8Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnMd8Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnMd8Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnMd8Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot8
ImageName=#md8_icon#
X=-8r
Y=3r
W=48
H=48