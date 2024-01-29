[MeterSlotBtnHi5]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi5Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot5
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnHi5Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnHi5Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnHi5Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnHi5Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnHi5Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#hi5_icon#
X=-8r
Y=3r
W=48
H=48