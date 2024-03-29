[MeterSlotBtnHi2]
Meter=Image
Group=Modules | HiSlots | HiSlot2
ImageName=#@#/shipui/slotmaincombined.png
X=(219 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi2Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot2
ImageName=#@#/shipui/slotdamage_[#hi2HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi2Overload]
Meter=Image
Group=Modules | HiSlots | HiSlot2
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi2Overload]
Measure=Calc
Formula=#hi2OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi2Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi2Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi2Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi2Icon]
Meter=Image
Group=Modules | HiSlots | HiSlot2
ImageName=#hi2_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi2StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot2
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi2StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot2
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi2StackCount#
X=5r
Y=0r

[MeasureHi2Stack]
Measure=Calc
Formula=#hi2StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi2StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi2StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi2StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi2StackCount FontColor "white"]