//! @file
//! @date Oct 10, 2019
//! @author Marek Bel

#include "messages.h"
#include "version.h"
#include <avr/pgmspace.h>


#define FW_VERSION  "2.1.4"

static const char pgmstr_back[] PROGMEM = "Back";
static const char pgmstr_fan1_curing[] PROGMEM = "FAN1 curing";
static const char pgmstr_fan1_drying[] PROGMEM = "FAN1 drying";
static const char pgmstr_fan2_curing[] PROGMEM = "FAN2 curing";
static const char pgmstr_fan2_drying[] PROGMEM = "FAN2 drying";
static const char pgmstr_curing[] PROGMEM = "Curing";
static const char pgmstr_drying[] PROGMEM = "Drying";
static const char pgmstr_washing[] PROGMEM = "Washing";
static const char pgmstr_resin_preheat[] PROGMEM = "Resin preheat";
static const char pgmstr_rotation_speed[] PROGMEM = "Rotation speed";
static const char pgmstr_run_mode[] PROGMEM = "Run mode";
static const char pgmstr_preheat[] PROGMEM = "Preheat";
static const char pgmstr_sound[] PROGMEM = "Sound";
static const char pgmstr_fans[] PROGMEM = "Fans";
static const char pgmstr_led_intensity[] PROGMEM = "LED intensity";
static const char pgmstr_information_error[] PROGMEM = "Information ->!!";
static const char pgmstr_information[] PROGMEM = "Information";
static const char pgmstr_unit_system[] PROGMEM = "Unit system";
static const char pgmstr_fw_version[] PROGMEM = "FW version: "  FW_VERSION;
static const char pgmstr_fan1_failure[] PROGMEM = "FAN1 failure";
static const char pgmstr_fan2_failure[] PROGMEM = "FAN2 failure";
static const char pgmstr_heater_failure[] PROGMEM = "HEATER failure";
static const char *pgmstr_serial_number = reinterpret_cast<const char *>(0x7fe0);
static const char pgmstr_build_nr[] PROGMEM = "Build: " FW_BUILDNR;
static const char pgmstr_fw_hash[] PROGMEM = FW_HASH;
static const char pgmstr_workspace[] PROGMEM = FW_LOCAL_CHANGES ? "Workspace dirty" : "Workspace clean";

const __FlashStringHelper *str_back = reinterpret_cast<const __FlashStringHelper*>(pgmstr_back);
const __FlashStringHelper *str_fan1_curing = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan1_curing);
const __FlashStringHelper *str_fan1_drying = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan1_drying);
const __FlashStringHelper *str_fan2_curing = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan2_curing);
const __FlashStringHelper *str_fan2_drying = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan2_drying);
const __FlashStringHelper *str_curing = reinterpret_cast<const __FlashStringHelper*>(pgmstr_curing);
const __FlashStringHelper *str_drying = reinterpret_cast<const __FlashStringHelper*>(pgmstr_drying);
const __FlashStringHelper *str_washing = reinterpret_cast<const __FlashStringHelper*>(pgmstr_washing);
const __FlashStringHelper *str_resin_preheat = reinterpret_cast<const __FlashStringHelper*>(pgmstr_resin_preheat);
const __FlashStringHelper *str_rotation_speed = reinterpret_cast<const __FlashStringHelper*>(pgmstr_rotation_speed);
const __FlashStringHelper *str_run_mode = reinterpret_cast<const __FlashStringHelper*>(pgmstr_run_mode);
const __FlashStringHelper *str_preheat = reinterpret_cast<const __FlashStringHelper*>(pgmstr_preheat);
const __FlashStringHelper *str_sound = reinterpret_cast<const __FlashStringHelper*>(pgmstr_sound);
const __FlashStringHelper *str_fans = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fans);
const __FlashStringHelper *str_led_intensity = reinterpret_cast<const __FlashStringHelper*>(pgmstr_led_intensity);
const __FlashStringHelper *str_information_error = reinterpret_cast<const __FlashStringHelper*>(pgmstr_information_error);
const __FlashStringHelper *str_information = reinterpret_cast<const __FlashStringHelper*>(pgmstr_information);
const __FlashStringHelper *str_unit_system = reinterpret_cast<const __FlashStringHelper*>(pgmstr_unit_system);
const __FlashStringHelper *str_fw_version = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fw_version);
const __FlashStringHelper *str_fan1_failure = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan1_failure);
const __FlashStringHelper *str_fan2_failure = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fan2_failure);
const __FlashStringHelper *str_heater_failure = reinterpret_cast<const __FlashStringHelper*>(pgmstr_heater_failure);
const __FlashStringHelper *str_serial_number = reinterpret_cast<const __FlashStringHelper*>(pgmstr_serial_number);
const __FlashStringHelper *str_build_nr = reinterpret_cast<const __FlashStringHelper*>(pgmstr_build_nr);
const __FlashStringHelper *str_fw_hash = reinterpret_cast<const __FlashStringHelper*>(pgmstr_fw_hash);
const __FlashStringHelper *str_workspace = reinterpret_cast<const __FlashStringHelper*>(pgmstr_workspace);

