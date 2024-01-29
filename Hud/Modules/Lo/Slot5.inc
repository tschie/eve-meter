[MeterSlotBtnLo5]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo5Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnLo5Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnLo5Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnLo5Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnLo5Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnLo5Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#lo5_icon#
X=-8r
Y=3r
W=48
H=48