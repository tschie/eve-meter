[MeterSlotBtnHi8]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#@#/shipui/slotmaincombined.png
X=(519 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi8Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot8
ImageName=#@#/shipui/slotdamage_[#hi8HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi8Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureHi8Overload]
Measure=Calc
Formula=#hi8OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi8Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi8Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi8Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi8Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot8
ImageName=#hi8_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi8StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot8
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi8StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot8
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi8StackCount#
X=5r
Y=0r

[MeasureHi8Stack]
Measure=Calc
Formula=#hi8StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi8StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi8StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi8StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi8StackCount FontColor "white"]