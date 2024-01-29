[Variables]
fontName=Eve Sans Neue
textSize=8
maxDownload=25000000
maxUpload=1000000
CenterX=42.0
CenterY=6.5
CenterSpeedX=6
CenterSpeedY=-46.0
OffsetX=100
OffsetY=50

; Status
speedPercentMeasure=MeasureVolumePercent
speedStringMeasure=MeasureNetIn
shieldGaugeMeasure=MeasureRAM
armorGaugeMeasure=MeasureGPU
structureGaugeMeasure=MeasureCPUPercent
capacitorUsedMeasure=MeasureCapacitor
heatHiMeasure=MeasureGPUTemp
heatMdMeasure=MeasureCPUTemp
heatLoMeasure=MeasureHDTemp
hiHeat_0=30
hiHeat_1=40
hiHeat_2=60
hiHeat_3=60
hiHeat_4=70
hiHeat_5=80
mdHeat_0=30
mdHeat_1=40
mdHeat_2=50
mdHeat_3=60
mdHeat_4=70
mdHeat_5=80
loHeat_0=30
loHeat_1=35
loHeat_2=40
loHeat_3=45
loHeat_4=50
loHeat_5=55
modulesExpanded=1
utilitiesExpanded=1
speedPlusClickAction=[!CommandMeasure "MeasureVolume" "ChangeVolume 10"]
speedPlusDoubleClickAction=[!CommandMeasure "MeasureVolume" "SetVolume 100"]
speedMinusClickAction=[!CommandMeasure "MeasureVolume" "ChangeVolume -10"]
speedMinusDoubleClickAction=[!CommandMeasure "MeasureVolume" "SetVolume 0"]

; Compass
compassDotsMeasure=MeasureCompassDots

; Utility Buttons
autopilotMeasure=MeasureAirplaneMode
cargoMeasure=MeasureUnusedDiskPercent
cargoLeftMouseUpAction=[Shell:::{20D04FE0-3AEA-1069-A2D8-08002B30309D}]
firstPersonMeasure=MeasureNotificationsOn
orbitCameraMeasure=MeasureAutoRotateEnabled
scanMeasure=MeasureWifi
tacticalCameraMeasure=MeasureLocationEnabled
tacticalOverlayMeasure=MeasureBluetooth

; Modules
coreTemp_1=40
coreTemp_2=45
coreTemp_3=50
coreTemp_4=55
coreTemp_5=60
coreTemp_6=65
coreTemp_7=70
coreTemp_8=75
hi1_icon=#@#/icons/8_64_1.png
hi2_icon=#@#/icons/8_64_1.png
hi3_icon=#@#/icons/8_64_1.png
hi4_icon=#@#/icons/8_64_1.png
hi5_icon=#@#/icons/8_64_1.png
hi6_icon=#@#/icons/8_64_1.png
hi7_icon=#@#/icons/8_64_1.png
hi8_icon=#@#/icons/8_64_1.png
md1_icon=#@#/icons/108_64_22.png
md2_icon=#@#/icons/108_64_22.png
md3_icon=#@#/icons/108_64_22.png
md4_icon=#@#/icons/108_64_22.png
md5_icon=#@#/icons/108_64_22.png
md6_icon=#@#/icons/108_64_22.png
md7_icon=#@#/icons/108_64_22.png
md8_icon=#@#/icons/108_64_22.png
lo1_icon=#@#/icons/5_64_12.png
lo2_icon=#@#/icons/5_64_12.png
lo3_icon=#@#/icons/5_64_12.png
lo4_icon=#@#/icons/5_64_12.png
lo5_icon=#@#/icons/5_64_12.png
lo6_icon=#@#/icons/5_64_12.png
lo7_icon=#@#/icons/5_64_12.png
lo8_icon=#@#/icons/5_64_12.png

[MeasureMediaKey]
Measure=MediaKey

[MeasureVolume]
Measure=Plugin
Plugin=Win7AudioPlugin

[MeasureVolumePercent]
Measure=Calc
Formula=MeasureVolume / 100

[MeasureNetIn]
Measure=NetIn

[MeasureNetOut]
Measure=NetOut

[MeasureNetInPercent]
Measure=Calc
Formula=Min(MeasureNetIn / #maxDownload#, 1.0)

[MeasureNetOutPercent]
Measure=Calc
Formula=Min(MeasureNetIn / #maxDownload#, 1.0)

[MeasureGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU

[MeasureRAM]
Measure=PhysicalMemory
UpdateDivider=20

[MeasureCPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw1

[MeasureCPUPercent]
Measure=Calc
Formula=MeasureCPU / 100

[MeasureUnusedDiskC]
Measure=FreeDiskSpace
Drive=C:

[MeasureTotalDiskC]
Measure=FreeDiskSpace
Drive=C:
Total=1

[MeasureUnusedDiskD]
Measure=FreeDiskSpace
Drive=D:

[MeasureTotalDiskD]
Measure=FreeDiskSpace
Drive=D:
Total=1

[MeasureUnusedDiskE]
Measure=FreeDiskSpace
Drive=E:
IgnoreRemovable=0

[MeasureTotalDiskE]
Measure=FreeDiskSpace
Drive=E:
IgnoreRemovable=0
Total=1

[MeasureUnusedDiskPercent]
Measure=Calc
Formula=(MeasureUnusedDiskC + MeasureUnusedDiskD + MeasureUnusedDiskE) / Max(1.0, MeasureTotalDiskC + MeasureTotalDiskD + MeasureTotalDiskE)

[MeasureGPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw13

[MeasureCPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw10

[MeasureHDTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw14

[MeasureCoreTemp0]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw2

[MeasureCoreTemp0Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp0] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw3

[MeasureCoreTemp1Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp1] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw4

[MeasureCoreTemp2Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp2] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp3]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw5

[MeasureCoreTemp3Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp3] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp4]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw6

[MeasureCoreTemp4Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp4] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp5]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw7

[MeasureCoreTemp5Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp5] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp6]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw8

[MeasureCoreTemp6Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp6] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureCoreTemp7]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw9

[MeasureCoreTemp7Heat]
Measure=Calc
Formula=Clamp(Floor(([MeasureCoreTemp7] - #coreTemp_1#) / 5), 1, 8)
DynamicVariables=1

[MeasureAirplaneMode]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\RadioManagement\SystemRadioState

[MeasureNotificationsOn]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\Microsoft\Windows\CurrentVersion\PushNotifications
RegValue=ToastEnabled

[MeasureAutoRotateEnabled]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\AutoRotation
RegValue=Enable

[MeasureWifi]
Measure=WiFiStatus
WiFiInfoType=Quality

[MeasureNearbyShare]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\Microsoft\Windows\CurrentVersion\CDP
RegValue=NearShareChannelUserAuthzPolicy

[MeasureLocationEnabled]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\CapabilityAccessManager\ConsentStore\location
RegValue=Value
RegExpSubstitute=1
Substitute="Allow":"1","Deny":"0"

[MeasureBluetooth]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Services\bthserv\Parameters\BluetoothControlPanelTasks
RegValue=State

[MeasureWebcam]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\CapabilityAccessManager\ConsentStore\webcam
RegValue=LastUsedTimestamp

[MeasureTime]
Measure=Time

[MeasureCompassDots]
Measure=Calc
Formula=(MeasureTime % 43200.0) / 43200.0

[MeasureBatteryPercent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

[MeasureBattery]
Measure=Calc
Formula=MeasureBatteryPercent / 100

[MeasureCapacitor]
Measure=Calc
Formula=1 - MeasureBattery