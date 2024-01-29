[MeterSlotBtnLo8]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo8Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnLo8Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnLo8Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnLo8Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnLo8Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnLo8Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot8
ImageName=#lo8_icon#
X=-8r
Y=3r
W=48
H=48