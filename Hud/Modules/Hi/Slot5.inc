[MeterSlotBtnHi5]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#@#/shipui/slotmaincombined.png
X=(369 + #OffsetX#)
Y=(2 + #OffsetY#)

[MeterSlotBtnHi5Damage]
Meter=Image
Group=Modules | HiSlots | HiSlot5
ImageName=#@#/shipui/slotdamage_[#hi5HeatMeasure#].png
X=0r
Y=0r
DynamicVariables=1

[MeterSlotBtnHi5Overload]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#@#/shipui/slotoverloadoff.png
X=16r
Y=5r

[MeasureHi5Overload]
Measure=Calc
Formula=#hi5OverloadMeasure#
IfBelowValue=0
IfBelowAction=[!SetOption MeterSlotBtnHi5Overload ImageName "#@#/shipui/slotoverloaddisabled.png"]
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi5Overload ImageName "#@#/shipui/slotoverloadoff.png"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi5Overload ImageName "#@#/shipui/slotoverloadon.png"]

[MeterSlotBtnHi5Icon]
Meter=Image
Group=Modules | SlotButtons | HiSlot5
ImageName=#hi5_icon#
X=-8r
Y=3r
W=48
H=48

[MeterSlotBtnHi5StackUnderlay]
Meter=Image
Group=Modules | HiSlots | HiSlot5
ImageName=#@#/shipui/slotstackunderlay.png
ImageTint=150,15,16,200
X=7r
Y=25r

[MeterSlotBtnHi5StackCount]
Meter=String
Group=Modules | HiSlots | HiSlot5
FontColor=white
FontSize=7
FontFamily=Eve Sans Neue
Text=#hi5StackCount#
X=5r
Y=0r

[MeasureHi5Stack]
Measure=Calc
Formula=#hi5StackCount#
IfEqualValue=0
IfEqualAction=[!SetOption MeterSlotBtnHi5StackUnderlay ImageTint "0,0,0,0"][!SetOption MeterSlotBtnHi5StackCount FontColor "0,0,0,0"]
IfAboveValue=0
IfAboveAction=[!SetOption MeterSlotBtnHi5StackUnderlay ImageTint "150,15,16,200"][!SetOption MeterSlotBtnHi5StackCount FontColor "white"]