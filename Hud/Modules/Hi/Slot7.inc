[MeterSlotBtnHi7]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#@#/shipui/slotmaincombined.png
X=(469 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi7Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot7
ImageName=#@#/shipui/slotdamage_[#hi7HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi7Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=6r

[MeasureHi7Overload]
Measure=Calc
Formula=#hi7OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi7Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi7Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi7Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi7Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot7
ImageName=#hi7_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi7StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot7
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi7StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot7
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi7StackCount#
X=5r
Y=0r

[MeasureHi7Stack]
Measure=Calc
Formula=#hi7StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi7StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi7StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi7StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi7StackCount FontColor "white"]