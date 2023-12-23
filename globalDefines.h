// #define DEBUG 1

#define CONFIG_SOC_IEEE802154_SUPPORTED y

#define ACTION_NONE 0
#define ACTION_BACK 1
#define ACTION_SELECT 2
#define ACTION_GENERATE_HOME_WINDOW 3
#define ACTION_GENERATE_SETTINGS_WINDOW 4
#define ACTION_GENERATE_PING_WINDOW 5
#define ACTION_GENERATE_STATUSES_WINDOW 6
#define ACTION_GENERATE_MENU_WINDOW 7
#define ACTION_GENERATE_COMPASS_WINDOW 8
#define ACTION_GENERATE_GPS_WINDOW 9
#define ACTION_GENERATE_LORA_TEST_WINDOW 10
#define ACTION_TRACK_MESSAGE 11
#define ACTION_BROADCAST_MESSAGE 12
#define ACTION_SEND_PING 13
#define ACTION_FLASH_DEFAULT_SETTINGS 14
#define ACTION_REBOOT_DEVICE 15
#define ACTION_TOGGLE_FLASHLIGHT 16
#define ACTION_TOGGLE_SILENT_MODE 17
#define ACTION_SHUTDOWN_DEVICE 18
#define ACTION_GENERATE_QUICK_ACTION_MENU 19
#define ACTION_SOS 20

#define ACTION_DEFER_CALLBACK_TO_WINDOW 0xFFFFFFFF

#define BUZZER_PIN 4
#define DEFAULT_TONE 1000

#define BATT_SENSE_PIN 39

#define ENC_A 23
#define ENC_B 2

#define BUTTON_1 1
#define BUTTON_2 2
#define BUTTON_3 3
#define BUTTON_4 4

#define BUTTON_1_PIN 36
#define BUTTON_2_PIN 26
#define BUTTON_3_PIN 19
#define BUTTON_4_PIN 34
#define BUTTON_SOS_PIN 25

#define COMPASS_DRDY_PIN 35

#define KEEP_ALIVE_PIN 5

#define OLED_HEIGHT 32
#define OLED_WIDTH 128

#define OLED_RESET -1

#define DEFAULT_MAX_CALLBACKS 64

#define BUTTON_TEXT_MAX 12
#define NODE_TEXT_MAX 32

#define SIZE_SETTINGS_OBJECT 4096
#define SIZE_STATUSES_OBJECT 4096
#define EEPROM_SETTINGS_ADDR 0
#define EEPROM_STATUSES_ADDR SIZE_SETTINGS_OBJECT
#define EEPROM_SETTINGS_SIZE SIZE_SETTINGS_OBJECT + SIZE_STATUSES_OBJECT
#define ARDUINOJSON_USE_INT64 1
#define ARDUINOJSON_USE_LONG_LONG 1
#define USERID_SIZE_BYTES 8

#define NUM_LEDS 30
#define LED_PIN 27
#define LED_TYPE WS2812B
#define LED_ORDER GRB

// #define UPLOAD_SETTINGS 1
// #define GENERATE_NEW_USERID 1

#define WRITE_STATUSES_TO_EEPROM 1

#ifndef USE_FAKE_GPS_COORDS
#define USE_FAKE_GPS_COORDS 0
#endif

#if USE_FAKE_GPS_COORDS == 1
#define FAKE_GPS_LAT 33.753746
#define FAKE_GPS_LON -84.386330
#elif USE_FAKE_GPS_COORDS == 2
#define FAKE_GPS_LAT 40.730610
#define FAKE_GPS_LON -73.935242
#elif USE_FAKE_GPS_COORDS == 3
#define FAKE_GPS_LAT 37.773972
#define FAKE_GPS_LON -122.431297
#elif USE_FAKE_GPS_COORDS != 0
#define FAKE_GPS_LAT 51.509865
#define FAKE_GPS_LON -0.118092
#endif

// test comment