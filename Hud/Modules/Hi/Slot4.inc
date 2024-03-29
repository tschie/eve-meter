[MeterSlotBtnHi4]
Meter=Image
Group=Modules | SlotButtons | HiSlot4
ImageName=#@#/shipui/slotmaincombined.png
X=(319 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi4Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot4
ImageName=#@#/shipui/slotdamage_[#hi4HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi4Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot4
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi4Overload]
Measure=Calc
Formula=#hi4OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi4Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi4Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi4Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi4Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot4
ImageName=#hi4_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi4StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot4
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi4StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot4
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi4StackCount#
X=5r
Y=0r

[MeasureHi4Stack]
Measure=Calc
Formula=#hi4StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi4StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi4StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi4StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi4StackCount FontColor "white"]