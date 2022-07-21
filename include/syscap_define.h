/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SYSCAP_DEFINE_H
#define _SYSCAP_DEFINE_H

#include <stdint.h>

#define SINGLE_SYSCAP_LEN (256 + 17)

typedef struct SystemCapabilityWithNum {
    char str[SINGLE_SYSCAP_LEN];
    uint16_t num;
} SyscapWithNum;

/* New syscap index must be added last */
typedef enum SystemCapabilityNum {
    ACCOUNT_APPACCOUNT,
    ACCOUNT_OSACCOUNT,
    ACE_ACEENGINELITE,
    ACE_UIAPPEARANCE,
    AI_AIENGINE,
    APPLICATIONS_CONTACTSDATA,
    BARRIERFREE_ACCESSIBILITY_CORE,
    BUNDLEMANAGER_BUNDLEFRAMEWORK,
    BUNDLEMANAGER_BUNDLETOOL,
    BUNDLEMANAGER_DISTRIBUTEDBUNDLEFRAMEWORK,
    BUNDLEMANAGER_ZLIB,
    COMMUNICATION_BLUETOOTH_CORE,
    COMMUNICATION_CONNECTEDTAG,
    COMMUNICATION_NETMANAGER_CORE,
    COMMUNICATION_NETMANAGER_EXTENSION,
    COMMUNICATION_NETSTACK,
    COMMUNICATION_NFC_CORE,
    COMMUNICATION_SOFTBUS_CORE,
    COMMUNICATION_WIFI_AP,
    COMMUNICATION_WIFI_CORE,
    COMMUNICATION_WIFI_HOTSPOTEXT,
    COMMUNICATION_WIFI_P2P,
    COMMUNICATION_WIFI_STA,
    CUSTOMIZATION_CONFIGPOLICY,
    CUSTOMIZATION_ENTERPRISEDEVICEMANAGER,
    DISTRIBUTEDDATAMANAGER_DATAOBJECT_DISTRIBUTEDOBJECT,
    DISTRIBUTEDDATAMANAGER_DATASHARE_CONSUMER,
    DISTRIBUTEDDATAMANAGER_DATASHARE_CORE,
    DISTRIBUTEDDATAMANAGER_DATASHARE_PROVIDER,
    DISTRIBUTEDDATAMANAGER_KVSTORE_CORE,
    DISTRIBUTEDDATAMANAGER_KVSTORE_DISTRIBUTEDKVSTORE,
    DISTRIBUTEDDATAMANAGER_KVSTORE_LITE,
    DISTRIBUTEDDATAMANAGER_PREFERENCES_CORE,
    DISTRIBUTEDDATAMANAGER_RELATIONALSTORE_CORE,
    DISTRIBUTEDHARDWARE_DEVICEMANAGER,
    DISTRIBUTEDHARDWARE_DISTRIBUTEDCAMERA,
    DISTRIBUTEDHARDWARE_DISTRIBUTEDAUDIO,
    DISTRIBUTEDHARDWARE_DISTRIBUTEDHARDWAREFWK,
    DISTRIBUTEDHARDWARE_DISTRIBUTEDSCREEN,
    DISTRIBUTEDHARDWARE_DISTRIBUTEDINPUT,
    FILEMANAGEMENT_FILEMANAGERSERVICE,
    FILEMANAGEMENT_REMOTEFILESHARE,
    FILEMANAGEMENT_STORAGESERVICE_BACKUP,
    GLOBAL_RESOURCEMANAGER,
    GRAPHIC_GRAPHIC2D_EGL,
    GRAPHIC_GRAPHIC2D_GLES3,
    GRAPHIC_GRAPHIC2D_NATIVEDRAWING,
    GRAPHIC_GRAPHIC2D_NATIVEWINDOW,
    GRAPHIC_GRAPHIC2D_WEBGL,
    GRAPHIC_GRAPHIC2D_WEBGL2,
    GRAPHIC_SURFACE,
    GRAPHIC_UI,
    GRAPHIC_UTILS,
    GRAPHIC_WMS,
    HIVIEWDFX_HIAPPEVENT,
    HIVIEWDFX_HICHECKER,
    HIVIEWDFX_HIDUMPER,
    HIEVENTKLITE,
    HIVIEWDFX_HILOG,
    HIVIEWDFX_HILOGLITE,
    HIVIEWDFX_HIPROFILER_HIDEBUG,
    HIVIEWDFX_HISYSEVENT,
    HIVIEWDFX_HITRACE,
    HIVIEWDFX_HIVIEW,
    HIVIEWDFX_HIVIEW_FAULTLOGGER,
    HIVIEWDFX_HIVIEWLITE,
    GLOBAL_I18N,
    KERNEL_LINUX,
    KERNEL_LITEOS_A,
    KERNEL_LITEOS_M,
    LOCATION_LOCATION,
    MISCSERVICES_DOWNLOAD,
    MISCSERVICES_INPUTMETHOD,
    MISCSERVICES_PASTEBOARD,
    MISCSERVICES_SCREENLOCK,
    MISCSERVICES_TIME,
    MISCSERVICES_UPLOAD,
    MISCSERVICES_WALLPAPER,
    MSDP_DEVICESTATUS,
    MSDP_GEOFENCE,
    MSDP_MOTION,
    MSDP_MOVEMENT,
    MSDP_SPATIALAWARENESS,
    MSDP_TIMELINE,
    MULTIMEDIA_MEDIALIBRARY,
    MULTIMEDIA_MEDIA_AUDIOPLAYER,
    MULTIMEDIA_MEDIA_AUDIORECORDER,
    MULTIMEDIA_MEDIA_CODEC,
    MULTIMEDIA_MEDIA_CORE,
    MULTIMEDIA_MEDIA_MUXER,
    MULTIMEDIA_IMAGE,
    MULTIMEDIA_IMAGE_CORE,
    MULTIMEDIA_IMAGE_IMAGESOURCE,
    MULTIMEDIA_IMAGE_IMAGEPACKER,
    MULTIMEDIA_IMAGE_IMAGERECEIVER,
    MULTIMEDIA_IMAGE_IMAGECREATOR,
    MULTIMEDIA_MEDIA_SPLITER,
    MULTIMEDIA_MEDIA_VIDEOPLAYER,
    MULTIMEDIA_MEDIA_VIDEORECORDER,
    MULTIMEDIA_AV_SESSION,
    MULTIMODALINPUT_INPUT,
    NOTIFICATION_COMMONEVENT,
    NOTIFICATION_EMITTER,
    NOTIFICATION_NOTIFICATION,
    NOTIFICATION_REMINDERAGENT,
    POWERMANAGER_BATTERYMANAGER_CORE,
    POWERMANAGER_BATTERYMANAGER_EXTENSION,
    POWERMANAGER_BATTERYMANAGER_LITE,
    POWERMANAGER_BATTERYSTATISTICS,
    POWERMANAGER_DISPLAYPOWERMANAGER,
    POWERMANAGER_POWERMANAGER_CORE,
    POWERMANAGER_POWERMANAGER_EXTENSION,
    POWERMANAGER_POWERMANAGER_LITE,
    POWERMANAGER_THERMALMANAGER,
    RESOURCESCHEDULE_BACKGROUNDTASKMANAGER_CONTINUOUSTASK,
    RESOURCESCHEDULE_BACKGROUNDTASKMANAGER_TRANSIENTTASK,
    RESOURCESCHEDULE_USAGESTATISTICS_APP,
    RESOURCESCHEDULE_USAGESTATISTICS_APPGROUP,
    RESOURCESCHEDULE_WORKSCHEDULER,
    SECURITY_ACCESSTOKEN,
    SECURITY_DLPPERMISSIONSERVICE,
    SECURITY_APPVERIFY,
    SECURITY_DATATRANSITMANAGER,
    SECURITY_DEVICEAUTH,
    SECURITY_DEVICESECURITYLEVEL,
    SECURITY_HUKS,
    SENSORS_MEDICAL_SENSOR,
    SENSORS_MISCDEVICE,
    SENSORS_SENSOR,
    SENSORS_SENSOR_LITE,
    TELEPHONY_CALLMANAGER,
    TELEPHONY_CELLULARCALL,
    TELEPHONY_CELLULARDATA,
    TELEPHONY_CORESERVICE,
    TELEPHONY_DATASTORAGE,
    TELEPHONY_DCALL,
    TELEPHONY_SMSMMS,
    TELEPHONY_STATEREGISTRY,
    TEST_UITEST,
    TEST_WUKONG,
    UPDATE_DUPDATE_ENGINE,
    UPDATER_RAW,
    UPDATE_UPDATESERVICE,
    USB_USBMANAGER,
    USERIAM_AUTHEXECUTORMANAGER,
    USERIAM_USERAUTH_CORE,
    USERIAM_USERAUTH_FACEAUTH,
    USERIAM_USERAUTH_FINGERPRINTAUTH,
    USERIAM_USERAUTH_PINAUTH,
    USERIAM_USERIDM,
    ARKUI_UIAPPEARANCE,
    // Add here
    SYSCAP_NUM_MAX = 960
} SyscapNum;

/* sort by enum */
const static SyscapWithNum g_arraySyscap[] = {
    {"SystemCapability.Account.AppAccount", ACCOUNT_APPACCOUNT},
    {"SystemCapability.Account.OsAccount", ACCOUNT_OSACCOUNT},
    {"SystemCapability.Ace.UiAppearance", ACE_UIAPPEARANCE},
    {"SystemCapability.ArkUI.UiAppearance", ARKUI_UIAPPEARANCE},
    {"SystemCapability.Ace.AceEngineLite", ACE_ACEENGINELITE},
    {"SystemCapability.Ai.AiEngine", AI_AIENGINE},
    {"SystemCapability.Applications.ContactsData", APPLICATIONS_CONTACTSDATA},
    {"SystemCapability.Barrierfree.Accessibility.Core", BARRIERFREE_ACCESSIBILITY_CORE},
    {"SystemCapability.BundleManager.BundleFramework", BUNDLEMANAGER_BUNDLEFRAMEWORK},
    {"SystemCapability.BundleManager.BundleTool", BUNDLEMANAGER_BUNDLETOOL},
    {"SystemCapability.BundleManager.DistributedBundleFramework", BUNDLEMANAGER_DISTRIBUTEDBUNDLEFRAMEWORK},
    {"SystemCapability.BundleManager.Zlib", BUNDLEMANAGER_ZLIB},
    {"SystemCapability.Communication.Bluetooth.Core", COMMUNICATION_BLUETOOTH_CORE},
    {"SystemCapability.Communication.ConnectedTag", COMMUNICATION_CONNECTEDTAG},
    {"SystemCapability.Communication.NetManager.Core", COMMUNICATION_NETMANAGER_CORE},
    {"SystemCapability.Communication.NetManager.Extension", COMMUNICATION_NETMANAGER_EXTENSION},
    {"SystemCapability.Communication.NetStack", COMMUNICATION_NETSTACK},
    {"SystemCapability.Communication.NFC.Core", COMMUNICATION_NFC_CORE},
    {"SystemCapability.Communication.SoftBus.Core", COMMUNICATION_SOFTBUS_CORE},
    {"SystemCapability.Communication.WiFi.AP", COMMUNICATION_WIFI_AP},
    {"SystemCapability.Communication.WiFi.Core", COMMUNICATION_WIFI_CORE},
    {"SystemCapability.Communication.WiFi.HotspotExt", COMMUNICATION_WIFI_HOTSPOTEXT},
    {"SystemCapability.Communication.WiFi.P2P", COMMUNICATION_WIFI_P2P},
    {"SystemCapability.Communication.WiFi.STA", COMMUNICATION_WIFI_STA},
    {"SystemCapability.Customization.ConfigPolicy", CUSTOMIZATION_CONFIGPOLICY},
    {"SystemCapability.Customization.EnterpriseDeviceManager", CUSTOMIZATION_ENTERPRISEDEVICEMANAGER},
    {"SystemCapability.DistributedDataManager.DataObject.DistributedObject", DISTRIBUTEDDATAMANAGER_DATAOBJECT_DISTRIBUTEDOBJECT},
    {"SystemCapability.DistributedDataManager.DataShare.Consumer", DISTRIBUTEDDATAMANAGER_DATASHARE_CONSUMER},
    {"SystemCapability.DistributedDataManager.DataShare.Core", DISTRIBUTEDDATAMANAGER_DATASHARE_CORE},
    {"SystemCapability.DistributedDataManager.DataShare.Provider", DISTRIBUTEDDATAMANAGER_DATASHARE_PROVIDER},
    {"SystemCapability.DistributedDataManager.KVStore.Core", DISTRIBUTEDDATAMANAGER_KVSTORE_CORE},
    {"SystemCapability.DistributedDataManager.KVStore.DistributedKVStore", DISTRIBUTEDDATAMANAGER_KVSTORE_DISTRIBUTEDKVSTORE},
    {"SystemCapability.DistributedDataManager.KVStore.Lite", DISTRIBUTEDDATAMANAGER_KVSTORE_LITE},
    {"SystemCapability.DistributedDataManager.Preferences.Core", DISTRIBUTEDDATAMANAGER_PREFERENCES_CORE},
    {"SystemCapability.DistributedDataManager.RelationalStore.Core", DISTRIBUTEDDATAMANAGER_RELATIONALSTORE_CORE},
    {"SystemCapability.DistributedHardware.DeviceManager", DISTRIBUTEDHARDWARE_DEVICEMANAGER},
    {"SystemCapability.DistributedHardware.DistributedCamera", DISTRIBUTEDHARDWARE_DISTRIBUTEDCAMERA},
    {"SystemCapability.DistributedHardware.DistributedAudio", DISTRIBUTEDHARDWARE_DISTRIBUTEDAUDIO},
    {"SystemCapability.DistributedHardware.DistributedHardwareFWK", DISTRIBUTEDHARDWARE_DISTRIBUTEDHARDWAREFWK},
    {"SystemCapability.DistributedHardware.DistributedScreen", DISTRIBUTEDHARDWARE_DISTRIBUTEDSCREEN},
    {"SystemCapability.DistributedHardware.DistributedInput", DISTRIBUTEDHARDWARE_DISTRIBUTEDINPUT},
    {"SystemCapability.FileManagement.FileManagerService", FILEMANAGEMENT_FILEMANAGERSERVICE},
    {"SystemCapability.FileManagement.RemoteFileShare", FILEMANAGEMENT_REMOTEFILESHARE},
    {"SystemCapability.FileManagement.StorageService.Backup", FILEMANAGEMENT_STORAGESERVICE_BACKUP},
    {"SystemCapability.Global.ResourceManager", GLOBAL_RESOURCEMANAGER},
    {"SystemCapability.Graphic.Graphic2D.EGL", GRAPHIC_GRAPHIC2D_EGL},
    {"SystemCapability.Graphic.Graphic2D.GLES3", GRAPHIC_GRAPHIC2D_GLES3},
    {"SystemCapability.Graphic.Graphic2D.NativeDrawing", GRAPHIC_GRAPHIC2D_NATIVEDRAWING},
    {"SystemCapability.Graphic.Graphic2D.NativeWindow", GRAPHIC_GRAPHIC2D_NATIVEWINDOW},
    {"SystemCapability.Graphic.Graphic2D.WebGL", GRAPHIC_GRAPHIC2D_WEBGL},
    {"SystemCapability.Graphic.Graphic2D.WebGL2", GRAPHIC_GRAPHIC2D_WEBGL2},
    {"SystemCapability.Graphic.Surface", GRAPHIC_SURFACE},
    {"SystemCapability.Graphic.UI", GRAPHIC_UI},
    {"SystemCapability.Graphic.Utils", GRAPHIC_UTILS},
    {"SystemCapability.Graphic.Wms", GRAPHIC_WMS},
    {"SystemCapability.HiviewDFX.HiAppEvent", HIVIEWDFX_HIAPPEVENT},
    {"SystemCapability.HiviewDFX.HiChecker", HIVIEWDFX_HICHECKER},
    {"SystemCapability.HiviewDFX.HiDumper", HIVIEWDFX_HIDUMPER},
    {"SystemCapability.HiviewDFX.HiEventLite", HIEVENTKLITE},
    {"SystemCapability.HiviewDFX.HiLog", HIVIEWDFX_HILOG},
    {"SystemCapability.HiviewDFX.HiLogLite", HIVIEWDFX_HILOGLITE},
    {"SystemCapability.HiviewDFX.HiProfiler.HiDebug", HIVIEWDFX_HIPROFILER_HIDEBUG},
    {"SystemCapability.HiviewDFX.HiSysEvent", HIVIEWDFX_HISYSEVENT},
    {"SystemCapability.HiviewDFX.HiTrace", HIVIEWDFX_HITRACE},
    {"SystemCapability.HiviewDFX.Hiview", HIVIEWDFX_HIVIEW},
    {"SystemCapability.HiviewDFX.Hiview.FaultLogger", HIVIEWDFX_HIVIEW_FAULTLOGGER},
    {"SystemCapability.HiviewDFX.HiviewLite", HIVIEWDFX_HIVIEWLITE},
    {"SystemCapability.Global.I18n", GLOBAL_I18N},
    {"SystemCapability.Kernel.Linux", KERNEL_LINUX},
    {"SystemCapability.Kernel.liteos-a", KERNEL_LITEOS_A},
    {"SystemCapability.Kernel.liteos-m", KERNEL_LITEOS_M},
    {"SystemCapability.Location.Location", LOCATION_LOCATION},
    {"SystemCapability.MiscServices.Download", MISCSERVICES_DOWNLOAD},
    {"SystemCapability.MiscServices.InputMethod", MISCSERVICES_INPUTMETHOD},
    {"SystemCapability.MiscServices.Pasteboard", MISCSERVICES_PASTEBOARD},
    {"SystemCapability.MiscServices.ScreenLock", MISCSERVICES_SCREENLOCK},
    {"SystemCapability.MiscServices.Time", MISCSERVICES_TIME},
    {"SystemCapability.MiscServices.Upload", MISCSERVICES_UPLOAD},
    {"SystemCapability.MiscServices.Wallpaper", MISCSERVICES_WALLPAPER},
    {"SystemCapability.Msdp.DeviceStatus", MSDP_DEVICESTATUS},
    {"SystemCapability.Msdp.Geofence", MSDP_GEOFENCE},
    {"SystemCapability.Msdp.Motion", MSDP_MOTION},
    {"SystemCapability.Msdp.Movement", MSDP_MOVEMENT},
    {"SystemCapability.Msdp.SpatialAwareness", MSDP_SPATIALAWARENESS},
    {"SystemCapability.Msdp.Timeline", MSDP_TIMELINE},
    {"SystemCapability.Multimedia.MediaLibrary", MULTIMEDIA_MEDIALIBRARY},
    {"SystemCapability.Multimedia.Media.AudioPlayer", MULTIMEDIA_MEDIA_AUDIOPLAYER},
    {"SystemCapability.Multimedia.Media.AudioRecorder", MULTIMEDIA_MEDIA_AUDIORECORDER},
    {"SystemCapability.Multimedia.Media.Codec", MULTIMEDIA_MEDIA_CODEC},
    {"SystemCapability.Multimedia.Media.Core", MULTIMEDIA_MEDIA_CORE},
    {"SystemCapability.Multimedia.Media.Muxer", MULTIMEDIA_MEDIA_MUXER},
    {"SystemCapability.Multimedia.Image", MULTIMEDIA_IMAGE},
    {"SystemCapability.Multimedia.Image.Core", MULTIMEDIA_IMAGE_CORE},
    {"SystemCapability.Multimedia.Image.ImageSource", MULTIMEDIA_IMAGE_IMAGESOURCE},
    {"SystemCapability.Multimedia.Image.ImagePacker", MULTIMEDIA_IMAGE_IMAGEPACKER},
    {"SystemCapability.Multimedia.Image.ImageReceiver", MULTIMEDIA_IMAGE_IMAGERECEIVER},
    {"SystemCapability.Multimedia.Image.ImageCreator", MULTIMEDIA_IMAGE_IMAGECREATOR},
    {"SystemCapability.Multimedia.Media.Spliter", MULTIMEDIA_MEDIA_SPLITER},
    {"SystemCapability.Multimedia.Media.VideoPlayer", MULTIMEDIA_MEDIA_VIDEOPLAYER},
    {"SystemCapability.Multimedia.Media.VideoRecorder", MULTIMEDIA_MEDIA_VIDEORECORDER},
    {"SystemCapability.Multimedia.AVSession", MULTIMEDIA_AV_SESSION},
    {"SystemCapability.multimodalinput.input", MULTIMODALINPUT_INPUT},
    {"SystemCapability.Notification.CommonEvent", NOTIFICATION_COMMONEVENT},
    {"SystemCapability.Notification.Emitter", NOTIFICATION_EMITTER},
    {"SystemCapability.Notification.Notification", NOTIFICATION_NOTIFICATION},
    {"SystemCapability.Notification.ReminderAgent", NOTIFICATION_REMINDERAGENT},
    {"SystemCapability.PowerManager.BatteryManager.Core", POWERMANAGER_BATTERYMANAGER_CORE},
    {"SystemCapability.PowerManager.BatteryManager.Extension", POWERMANAGER_BATTERYMANAGER_EXTENSION},
    {"SystemCapability.PowerManager.BatteryManager.Lite", POWERMANAGER_BATTERYMANAGER_LITE},
    {"SystemCapability.PowerManager.BatteryStatistics", POWERMANAGER_BATTERYSTATISTICS},
    {"SystemCapability.PowerManager.DisplayPowerManager", POWERMANAGER_DISPLAYPOWERMANAGER},
    {"SystemCapability.PowerManager.PowerManager.Core", POWERMANAGER_POWERMANAGER_CORE},
    {"SystemCapability.PowerManager.PowerManager.Extension", POWERMANAGER_POWERMANAGER_EXTENSION},
    {"SystemCapability.PowerManager.PowerManager.Lite", POWERMANAGER_POWERMANAGER_LITE},
    {"SystemCapability.PowerManager.ThermalManager", POWERMANAGER_THERMALMANAGER},
    {"SystemCapability.ResourceSchedule.BackgroundTaskManager.ContinuousTask", RESOURCESCHEDULE_BACKGROUNDTASKMANAGER_CONTINUOUSTASK},
    {"SystemCapability.ResourceSchedule.BackgroundTaskManager.TransientTask", RESOURCESCHEDULE_BACKGROUNDTASKMANAGER_TRANSIENTTASK},
    {"SystemCapability.ResourceSchedule.UsageStatistics.App", RESOURCESCHEDULE_USAGESTATISTICS_APP},
    {"SystemCapability.ResourceSchedule.UsageStatistics.AppGroup", RESOURCESCHEDULE_USAGESTATISTICS_APPGROUP},
    {"SystemCapability.ResourceSchedule.WorkScheduler", RESOURCESCHEDULE_WORKSCHEDULER},
    {"SystemCapability.Security.AccessToken", SECURITY_ACCESSTOKEN},
    {"SystemCapability.Security.DlpPermissionService", SECURITY_DLPPERMISSIONSERVICE},
    {"SystemCapability.Security.AppVerify", SECURITY_APPVERIFY},
    {"SystemCapability.Security.DataTransitManager", SECURITY_DATATRANSITMANAGER},
    {"SystemCapability.Security.DeviceAuth", SECURITY_DEVICEAUTH},
    {"SystemCapability.Security.DeviceSecurityLevel", SECURITY_DEVICESECURITYLEVEL},
    {"SystemCapability.Security.Huks", SECURITY_HUKS},
    {"SystemCapability.Sensors.Medical.Sensor", SENSORS_MEDICAL_SENSOR},
    {"SystemCapability.Sensors.MiscDevice", SENSORS_MISCDEVICE},
    {"SystemCapability.Sensors.Sensor", SENSORS_SENSOR},
    {"SystemCapability.Sensors.Sensor.Lite", SENSORS_SENSOR_LITE},
    {"SystemCapability.Telephony.CallManager", TELEPHONY_CALLMANAGER},
    {"SystemCapability.Telephony.CellularCall", TELEPHONY_CELLULARCALL},
    {"SystemCapability.Telephony.CellularData", TELEPHONY_CELLULARDATA},
    {"SystemCapability.Telephony.CoreService", TELEPHONY_CORESERVICE},
    {"SystemCapability.Telephony.DataStorage", TELEPHONY_DATASTORAGE},
    {"SystemCapability.Telephony.DCall", TELEPHONY_DCALL},
    {"SystemCapability.Telephony.SmsMms", TELEPHONY_SMSMMS},
    {"SystemCapability.Telephony.StateRegistry", TELEPHONY_STATEREGISTRY},
    {"SystemCapability.Test.UiTest", TEST_UITEST},
    {"SystemCapability.Test.WuKong", TEST_WUKONG},
    {"SystemCapability.Update.Dupdate_engine", UPDATE_DUPDATE_ENGINE},
    {"SystemCapability.Updater.Raw", UPDATER_RAW},
    {"SystemCapability.Update.UpdateService", UPDATE_UPDATESERVICE},
    {"SystemCapability.USB.USBManager", USB_USBMANAGER},
    {"SystemCapability.UserIAM.AuthExecutorManager", USERIAM_AUTHEXECUTORMANAGER},
    {"SystemCapability.UserIAM.UserAuth.Core", USERIAM_USERAUTH_CORE},
    {"SystemCapability.UserIAM.UserAuth.FaceAuth", USERIAM_USERAUTH_FACEAUTH},
    {"SystemCapability.UserIAM.UserAuth.FingerprintAuth", USERIAM_USERAUTH_FINGERPRINTAUTH},
    {"SystemCapability.UserIAM.UserAuth.PinAuth", USERIAM_USERAUTH_PINAUTH},
    {"SystemCapability.UserIAM.UserIdm", USERIAM_USERIDM}
};

#endif  // _SYSCAP_DEFINE_H
