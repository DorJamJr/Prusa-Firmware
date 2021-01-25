//messages.h

// Common serial messages
#define MSG_MARLIN "Marlin"

#if defined(__cplusplus)
extern "C" {
#endif //defined(__cplusplus)

// LCD Menu Messages
//internationalized messages
extern const char MSG_AUTO_HOME[];
extern const char MSG_BABYSTEP_Z[];
extern const char MSG_BABYSTEP_Z_NOT_SET[];
extern const char MSG_BED[];
extern const char MSG_BED_DONE[];
extern const char MSG_BED_HEATING[];
extern const char MSG_BED_LEVELING_FAILED_POINT_LOW[];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED[];
extern const char MSG_BELT_STATUS[];
extern const char MSG_CALIBRATE_Z_AUTO[];
extern const char MSG_CARD_MENU[];
extern const char MSG_CONFIRM_NOZZLE_CLEAN[];
extern const char MSG_COOLDOWN[];
extern const char MSG_CRASH_DETECTED[];
extern const char MSG_CRASHDETECT[];
extern const char MSG_ERROR[];
extern const char MSG_EXTRUDER[];
extern const char MSG_FILAMENT[];
extern const char MSG_FAN_SPEED[];
extern const char MSG_FILAMENT_CLEAN[];
extern const char MSG_FILAMENT_LOADED[];
extern const char MSG_FILAMENT_LOADING_T0[];
extern const char MSG_FILAMENT_LOADING_T1[];
extern const char MSG_FILAMENT_LOADING_T2[];
extern const char MSG_FILAMENT_LOADING_T3[];
extern const char MSG_FILAMENTCHANGE[];
extern const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1[];
extern const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE2[];
extern const char MSG_FINISHING_MOVEMENTS[];
extern const char MSG_FOLLOW_CALIBRATION_FLOW[];
extern const char MSG_FOLLOW_Z_CALIBRATION_FLOW[];
extern const char MSG_FSENSOR_AUTOLOAD[];
extern const char MSG_FSENSOR[];
extern const char MSG_HEATING[];
extern const char MSG_HEATING_COMPLETE[];
extern const char MSG_HOMEYZ[];
extern const char MSG_CHOOSE_EXTRUDER[];
extern const char MSG_CHOOSE_FILAMENT[];
extern const char MSG_LAST_PRINT[];
extern const char MSG_LOAD_FILAMENT[];
extern const char MSG_LOADING_FILAMENT[];
extern const char MSG_M117_V2_CALIBRATION[];
extern const char MSG_MAIN[];
extern const char MSG_BACK[];
extern const char MSG_SHEET[];
extern const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1[];
extern const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2[];
extern const char MSG_MENU_CALIBRATION[];
extern const char MSG_NO[];
extern const char MSG_NOZZLE[];
extern const char MSG_PAPER[];
extern const char MSG_PLACE_STEEL_SHEET[];
extern const char MSG_PLEASE_WAIT[];
extern const char MSG_PREHEAT_NOZZLE[];
extern const char MSG_PRESS_TO_UNLOAD[];
extern const char MSG_PRINT_ABORTED[];
extern const char MSG_PULL_OUT_FILAMENT[];
extern const char MSG_RECOVER_PRINT[];
extern const char MSG_REFRESH[];
extern const char MSG_REMOVE_STEEL_SHEET[];
extern const char MSG_RESUMING_PRINT[];
extern const char MSG_SD_WORKDIR_FAIL[];
extern const char MSG_SELFTEST_COOLING_FAN[];
extern const char MSG_SELFTEST_EXTRUDER_FAN[];
extern const char MSG_SELFTEST_FAILED[];
extern const char MSG_SELFTEST_FAN[];
extern const char MSG_SELFTEST_FAN_NO[];
extern const char MSG_SELFTEST_FAN_YES[];
extern const char MSG_SELFTEST_CHECK_BED[];
extern const char MSG_SELFTEST_CHECK_FSENSOR[];
extern const char MSG_SELFTEST_MOTOR[];
extern const char MSG_SELFTEST_FILAMENT_SENSOR[];
extern const char MSG_SELFTEST_WIRINGERROR[];
extern const char MSG_SETTINGS[];
extern const char MSG_HW_SETUP[];
extern const char MSG_MODE[];
extern const char MSG_HIGH_POWER[];
extern const char MSG_AUTO_POWER[];
extern const char MSG_SILENT[];
extern const char MSG_NORMAL[];
extern const char MSG_STEALTH[];
extern const char MSG_STEEL_SHEET_CHECK[];
extern const char MSG_STOP_PRINT[];
extern const char MSG_STOPPED[];
extern const char MSG_TEMP_CALIBRATION[];
extern const char MSG_TEMP_CALIBRATION_DONE[];
extern const char MSG_UNLOAD_FILAMENT[];
extern const char MSG_UNLOADING_FILAMENT[];
extern const char MSG_WATCH[];
extern const char MSG_WIZARD_CALIBRATION_FAILED[];
extern const char MSG_WIZARD_DONE[];
extern const char MSG_WIZARD_HEATING[];
extern const char MSG_WIZARD_QUIT[];
extern const char MSG_YES[];
extern const char MSG_V2_CALIBRATION[];
extern const char WELCOME_MSG[];
extern const char MSG_OFF[];
extern const char MSG_ON[];
extern const char MSG_NA[];
extern const char MSG_AUTO_DEPLETE[];
extern const char MSG_CUTTER[];
extern const char MSG_NONE[];
extern const char MSG_WARN[];
extern const char MSG_STRICT[];
extern const char MSG_MODEL[];
extern const char MSG_FIRMWARE[];
extern const char MSG_GCODE[];
extern const char MSG_NOZZLE_DIAMETER[];
extern const char MSG_MMU_MODE[];
extern const char MSG_SD_CARD[];
extern const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY[];
extern const char MSG_SORT[];
extern const char MSG_SORT_TIME[];
extern const char MSG_SORT_ALPHA[];
extern const char MSG_RPI_PORT[];
extern const char MSG_SOUND[];
extern const char MSG_SOUND_LOUD[];
extern const char MSG_SOUND_ONCE[];
extern const char MSG_SOUND_BLIND[];
extern const char MSG_MESH[];
extern const char MSG_Z_PROBE_NR[];
extern const char MSG_MAGNETS_COMP[];
extern const char MSG_FS_ACTION[];
extern const char MSG_FS_CONTINUE[];
extern const char MSG_FS_PAUSE[];
extern const char MSG_BRIGHTNESS[];
extern const char MSG_BL_HIGH[];
extern const char MSG_BL_LOW[];
extern const char MSG_TIMEOUT[];
extern const char MSG_BRIGHT[];
extern const char MSG_DIM[];
extern const char MSG_AUTO[];
#ifdef IR_SENSOR_ANALOG
extern const char MSG_IR_04_OR_NEWER[];
extern const char MSG_IR_03_OR_OLDER[];
extern const char MSG_IR_UNKNOWN[];
#endif

//not internationalized messages
extern const char MSG_BROWNOUT_RESET[];
extern const char MSG_EXTERNAL_RESET[];
extern const char MSG_FILE_SAVED[];
extern const char MSG_POSITION_UNKNOWN[];
extern const char MSG_SOFTWARE_RESET[];
extern const char MSG_UNKNOWN_COMMAND[];
extern const char MSG_WATCHDOG_RESET[];
extern const char MSG_Z_MAX[];
extern const char MSG_Z_MIN[];
extern const char MSG_ZPROBE_OUT[];
extern const char MSG_ZPROBE_ZOFFSET[];
extern const char MSG_TMC_OVERTEMP[];
extern const char MSG_Enqueing[];
extern const char MSG_ENDSTOPS_HIT[];
extern const char MSG_SD_ERR_WRITE_TO_FILE[];
extern const char MSG_OK[];
extern const char MSG_SD_OPEN_FILE_FAIL[];
extern const char MSG_ENDSTOP_OPEN[];
extern const char MSG_POWERUP[];
extern const char MSG_ERR_STOPPED[];
extern const char MSG_ENDSTOP_HIT[];
extern const char MSG_EJECT_FILAMENT[];
extern const char MSG_CUT_FILAMENT[];
extern const char MSG_OCTOPRINT_PAUSED[];
extern const char MSG_OCTOPRINT_RESUMED[];
extern const char MSG_OCTOPRINT_CANCEL[];
extern const char MSG_FANCHECK_EXTRUDER[];
extern const char MSG_FANCHECK_PRINT[];
extern const char MSG_M112_KILL[];
extern const char MSG_ADVANCE_K[];
extern const char MSG_POWERPANIC_DETECTED[];
extern const char MSG_LCD_STATUS_CHANGED[];

#if defined(__cplusplus)
}
#endif //defined(__cplusplus)
