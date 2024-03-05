#ifndef FIREBASE_BUILD_OPTIONS_H
#define FIREBASE_BUILD_OPTIONS_H

/* <MS>*/
#if defined(FIREBASE_DEFAULT_DEBUG_PORT)
#define FB_DEFAULT_DEBUG_PORT FIREBASE_DEFAULT_DEBUG_PORT
#else
#define FB_DEFAULT_DEBUG_PORT Serial
#endif


#if defined(FIREBASE_DISABLE_ALL_OPTIONS)
#undef FIREBASE_ENABLE_RTDB
#undef ENABLE_RTDB
#undef FIREBASE_ENABLE_ERROR_QUEUE
#undef ENABLE_ERROR_QUEUE
#undef FIREBASE_ENABLE_FIRESTORE
#undef ENABLE_FIRESTORE
#undef FIREBASE_ENABLE_FCM
#undef ENABLE_FCM
#undef FIREBASE_ENABLE_FB_STORAGE
#undef ENABLE_FB_STORAGE
#undef FIREBASE_ENABLE_GC_STORAGE
#undef ENABLE_GC_STORAGE
#undef FIREBASE_ENABLE_FB_FUNCTIONS
#undef ENABLE_FB_FUNCTIONS
#undef FIREBASE_USE_PSRAM
#undef ENABLE_NTP_TIME
#undef ENABLE_ERROR_STRING
#undef ENABLE_OTA_FIRMWARE_UPDATE
#undef USE_CONNECTION_KEEP_ALIVE_MODE

#undef FB_DEFAULT_DEBUG_PORT
#undef FIREBASE_DEFAULT_DEBUG_PORT

#undef DEFAULT_SD_FS
#undef CARD_TYPE_SD_MMC
#undef CARD_TYPE_SD

#undef DEFAULT_FLASH_FS
#undef FORMAT_FLASH_IF_MOUNT_FAILED

#endif


#if defined(FIREBASE_ESP32_CLIENT) || defined(FIREBASE_ESP8266_CLIENT)

#if !defined(DISABLE_FIRESTORE)
#define DISABLE_FIRESTORE
#endif

#if !defined(DISABLE_FB_STORAGE)
#define DISABLE_FB_STORAGE
#endif

#if !defined(DISABLE_GC_STORAGE)
#define DISABLE_GC_STORAGE
#endif

#if !defined(DISABLE_FB_FUNCTIONS)
#define DISABLE_FB_FUNCTIONS
#endif

#endif


#if defined(DISABLE_RTDB)
#undef FIREBASE_ENABLE_RTDB
#undef ENABLE_RTDB
#endif

#if defined(DISABLE_ERROR_QUEUE)
#undef FIREBASE_ENABLE_ERROR_QUEUE
#undef ENABLE_ERROR_QUEUE
#endif

#if defined(DISABLE_FIRESTORE)
#undef FIREBASE_ENABLE_FIRESTORE
#undef ENABLE_FIRESTORE
#endif

#if defined(DISABLE_FCM)
#undef FIREBASE_ENABLE_FCM
#undef ENABLE_FCM
#endif

#if defined(DISABLE_FB_STORAGE)
#undef FIREBASE_ENABLE_FB_STORAGE
#undef ENABLE_FB_STORAGE
#endif

#if defined(DISABLE_GC_STORAGE)
#undef FIREBASE_ENABLE_GC_STORAGE
#undef ENABLE_GC_STORAGE
#endif

#if defined(DISABLE_FB_FUNCTIONS)
#undef FIREBASE_ENABLE_FB_FUNCTIONS
#undef ENABLE_FB_FUNCTIONS
#endif

#if defined(DISABLE_PSRAM)
#undef FIREBASE_USE_PSRAM
#endif

#if defined(DISABLE_NPT_TIME)
#undef ENABLE_NTP_TIME
#endif

#if defined(DISABLE_ERROR_STRING)
#undef ENABLE_ERROR_STRING
#endif

#if defined(DISABLE_OTA)
#undef ENABLE_OTA_FIRMWARE_UPDATE
#endif

#if defined(DISABLE_KEEP_ALIVE)
#undef USE_CONNECTION_KEEP_ALIVE_MODE
#endif


#if defined(DISABLE_SD)
#undef DEFAULT_SD_FS
#undef CARD_TYPE_SD_MMC
#undef CARD_TYPE_SD
#endif

#if defined(DISABLE_FLASH)
#undef DEFAULT_FLASH_FS
#undef FORMAT_FLASH_IF_MOUNT_FAILED
#endif

#if defined(DISABLE_DEBUG)
#undef FB_DEFAULT_DEBUG_PORT
#undef FIREBASE_DEFAULT_DEBUG_PORT
#endif

#if defined(FIREBASE_ESP32_CLIENT) || defined(FIREBASE_ESP8266_CLIENT)
#define FIREBASE_STREAM_CLASS StreamData
#define FIREBASE_MP_STREAM_CLASS MultiPathStreamData
#if defined(ESP32)
#define FIREBASE_CLASS FirebaseESP32
#elif defined(ES8266) || defined(MB_ARDUINO_PICO)
#define FIREBASE_CLASS FirebaseESP8266
#endif

#elif defined(FIREBASE_ESP_CLIENT)

#define FIREBASE_STREAM_CLASS FirebaseStream
#define FIREBASE_MP_STREAM_CLASS MultiPathStream

#define FIREBASE_CLASS Firebase_ESP_Client
#endif

#if defined(FIREBASE_ENABLE_FB_FUNCTIONS) || defined(ENABLE_FB_FUNCTIONS)
class FunctionsConfig;
#endif
class FirebaseData;

#endif