[MeterSlotBtnHi1]
Meter=Image
Group=Modules | HiSlots | HiSlot1
ImageName=#@#/shipui/slotmaincombined.png
X=(169 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi1Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot1
ImageName=#@#/shipui/slotdamage_[#hi1HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi1Overload]
Meter=Image
Group=Modules | HiSlots | HiSlot1
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi1Overload]
Measure=Calc
Formula=#hi1OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi1Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi1Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi1Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi1Icon]
Meter=Image
Group=Modules | HiSlots | HiSlot1
ImageName=#hi1_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi1StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot1
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi1StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot1
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi1StackCount#
X=5r
Y=0r

[MeasureHi1Stack]
Measure=Calc
Formula=#hi1StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi1StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi1StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi1StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi1StackCount FontColor "white"]