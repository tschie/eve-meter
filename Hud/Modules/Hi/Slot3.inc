[MeterSlotBtnHi3]
Meter=Image
Group=Modules | HiSlots | HiSlot3
ImageName=#@#/shipui/slotmaincombined.png
X=(269 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi3Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot3
ImageName=#@#/shipui/slotdamage_[#hi3HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi3Overload]
Meter=Image
Group=Modules | HiSlots | HiSlot3
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi3Overload]
Measure=Calc
Formula=#hi3OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi3Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi3Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi3Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi3Icon]
Meter=Image
Group=Modules | HiSlots | HiSlot3
ImageName=#hi3_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi3StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot3
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi3StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot3
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi3StackCount#
X=5r
Y=0r

[MeasureHi3Stack]
Measure=Calc
Formula=#hi3StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi3StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi3StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi3StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi3StackCount FontColor "white"]