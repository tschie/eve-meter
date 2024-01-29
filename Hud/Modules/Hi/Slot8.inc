[MeterSlotBtnHi8]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi8Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot8
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnHi8Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp7Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnHi8Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnHi8Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnHi8Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnHi8Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#hi8_icon#
X=-8r
Y=3r
W=48
H=48