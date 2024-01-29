[MeterSlotBtnLo6]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo6Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotdamage_base.png
X=0r
Y=0r

[MeasureSlotBtnLo6Heat]
Measure=Calc
IfCondition=([MeasureCoreTemp4Heat] >= 1)
IfTrueAction=[!SetOption MeterSlotBtnLo6Damage ImageName "#@#/shipui/slotdamage_[MeasureCoreTemp4Heat].png"]
IfFalseAction=[!SetOption MeterSlotBtnLo6Damage ImageName "#@#/shipui/slotdamage_base.png"]
DynamicVariables=1

[MeterSlotBtnLo6Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeterSlotBtnLo6Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot6
ImageName=#lo5_icon#
X=-8r
Y=3r
W=48
H=48