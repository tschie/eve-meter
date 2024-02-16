[MeasureZero]
Measure=Calc
Formula=0

[MeasureNegOne]
Measure=Calc
Formula=-1

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

[MeasureTimeHoursPercent]
; percent around the clock for the current hour
Measure=Calc
Formula=(MeasureTime % 43200.0) / 43200.0

[MeasureBatteryPercent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

[MeasureBattery]
Measure=Calc
Formula=[MeasureBatteryPercent] / 100
DynamicVariables=1

[MeasureBatteryUsed]
Measure=Calc
Formula=1 - MeasureBattery