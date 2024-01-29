[MeterSlotBtnHi6]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi6Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot6
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnHi6Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp5Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnHi6Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnHi6Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnHi6Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnHi6Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#hi6_icon#
X=-8r
Y=3r
W=48
H=48