//! @file
//! @date Oct 10, 2019
//! @author Marek Bel

#include "messages.h"
#include "version.h"
#include <avr/pgmspace.h>
#include "messages_internal.h"

static const char pgmstr_back[] PROGMEM = "Zpet"; //!< example comment for translators
static const char pgmstr_fan1_curing[] PROGMEM = "VET1 peceni";
static const char pgmstr_fan1_drying[] PROGMEM = "FAN1 suseni";
static const char pgmstr_fan2_curing[] PROGMEM = "FAN2 peceni";
static const char pgmstr_fan2_drying[] PROGMEM = "FAN2 suseni";
static const char pgmstr_curing[] PROGMEM = "Peceni";
static const char pgmstr_drying[] PROGMEM = "Suseni";
static const char pgmstr_washing[] PROGMEM = "Prani";
static const char pgmstr_resin_preheat[] PROGMEM = "Sajrajt predehrev";
static const char pgmstr_rotation_speed[] PROGMEM = "Autistova slast";
static const char pgmstr_run_mode[] PROGMEM = "Bez nekam";
static const char pgmstr_preheat[] PROGMEM = "Predehrev";
static const char pgmstr_sound[] PROGMEM = "Zpev";
static const char pgmstr_fans[] PROGMEM = "Fanousci";
static const char pgmstr_led_intensity[] PROGMEM = "Teplota ledu";
static const char pgmstr_information_error[] PROGMEM = "Fake news ->!!";
static const char pgmstr_information[] PROGMEM = "Dezinformace";
static const char pgmstr_unit_system[] PROGMEM = "Francouzky?";
static const char pgmstr_fw_version[] PROGMEM = "Verze robutku: "  FW_VERSION;
static const char pgmstr_fan1_failure[] PROGMEM = "VET1 nefacha";
static const char pgmstr_fan2_failure[] PROGMEM = "VET2 nefacha";
static const char pgmstr_heater_failure[] PROGMEM = "Zatracenej teplomet";