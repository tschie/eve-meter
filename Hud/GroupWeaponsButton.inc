[MeasureGroupWeaponsNumber]
Measure=Calc
Formula=#groupWeapons# + 1
DynamicVariables=1

[MeasureGroupWeaponsInverse]
Measure=Calc
Formula=1 - #groupWeapons#
DynamicVariables=1

[MeterGroupWeaponsBtn]
Meter=Image
Group=Modules | GroupWeaponsBtn
ImageName=#@#/icons/groupWeapons_#groupWeapons#.png
X=(157 + #OffsetX#)
Y=(12 + #OffsetY#)
DynamicVariables=1
LeftMouseUpAction=[!SetVariable groupWeapons [MeasureGroupWeaponsInverse]][!Update]

[MeasureWeaponsGroupBtnVisible]
Measure=Calc
Formula=#groupWeapons#
IfBelowValue=0
IfBelowAction=[!SetOption MeterGroupWeaponsBtn ImageTint "0,0,0,0"]
