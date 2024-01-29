[MeterSlotBtnHi7]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi7Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot7
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnHi7Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp6Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnHi7Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnHi7Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnHi7Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeterSlotBtnHi7Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#hi7_icon#
X=-8r
Y=3r
W=48
H=48