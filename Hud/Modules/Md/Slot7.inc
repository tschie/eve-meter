[MeterSlotBtnMd7]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd7Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnMd7Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnMd7Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnMd7Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnMd7Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnMd7Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot7
ImageName=#md7_icon#
X=-8r
Y=3r
W=48
H=48