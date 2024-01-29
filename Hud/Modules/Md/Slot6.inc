[MeterSlotBtnMd6]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + 25 + #OffsetX#)
Y=(46 + #OffsetY#)

[MeterSlotBtnMd6Damage]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnMd6Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnMd6Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnMd6Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnMd6Overload]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnMd6Icon]
Meter=Image
Group=Modules | SlotButtons | MdSlot6
ImageName=#md6_icon#
X=-8r
Y=3r
W=48
H=48