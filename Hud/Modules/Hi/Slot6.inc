[MeterSlotBtnHi6]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#@#/shipui/slotmaincombined.png
X=(419 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi6Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot6
ImageName=#@#/shipui/slotdamage_[#hi6HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi6Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi6Overload]
Measure=Calc
Formula=#hi6OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi6Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi6Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi6Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi6Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot6
ImageName=#hi6_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi6StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot6
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi6StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot6
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi6StackCount#
X=5r
Y=0r

[MeasureHi6Stack]
Measure=Calc
Formula=#hi6StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi6StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi6StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi6StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi6StackCount FontColor "white"]