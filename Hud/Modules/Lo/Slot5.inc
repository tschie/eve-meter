[MeterSlotBtnLo5]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + #OffsetX#)
Y=(93 + #OffsetY#)

[MeterSlotBtnLo5Damage]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotdamage_[#lo5HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnLo5Overload]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureLo5Overload]
Measure=Calc
Formula=#lo5OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnLo5Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnLo5Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnLo5Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnLo5Icon]
Meter=Image
Group=Modules | SlotButtons | LoSlot5
ImageName=#lo5_icon#
X=-8r
Y=3r
W=48
H=48