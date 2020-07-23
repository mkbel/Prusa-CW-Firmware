//! @file
//! @date Oct 10, 2019
//! @author Marek Bel

#include "messages.h"
#include "version.h"
#include <avr/pgmspace.h>
#include "messages_internal.h"

static const char pgmstr_back[] PROGMEM = "Back"; //!< example comment for translators
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