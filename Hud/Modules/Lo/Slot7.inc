[MeterSlotBtnLo7]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo7Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnLo7Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnLo7Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnLo7Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnLo7Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnLo7Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot7
ImageName=#lo7_icon#
X=-8r
Y=3r
W=48
H=48