/////////////////////////////////////////////////////////////////////////////////////////////////////////
// This configuration file was generated by the OAT Configurator at https://config.openastrotech.com for
// firmware V1.9.30 and later.
// Save this as Configuration_local.hpp in the folder where you placed the firmware code.

// We live in the Southern Hemisphere
#define NORTHERN_HEMISPHERE 0

// We are using the MKS GEN L V2.1 board
#define BOARD BOARD_AVR_MKS_GEN_L_V21

////////////////////////////////
// RA Stepper configuration
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 0.9°/step stepper for RA
#define RA_STEPPER_TYPE STEPPER_TYPE_NEMA17

// Using the TMC2209-UART driver for RA stepper motor
#define RA_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define some RA stepper motor settings
#define RA_MOTOR_CURRENT_RATING      900  // mA
#define RA_OPERATING_CURRENT_SETTING 80   // %
#define RA_STEPPER_ACCELERATION      3000
#define RA_STEPPER_SPEED             1200
#define RA_SLEW_MICROSTEPPING        8
#define RA_TRACKING_MICROSTEPPING    64
// TMC2209 Stealth Mode (spreadCycle) - When set to 0, tracking is more precise, but noisy (high-pitched sound). When set to 1, they are silent.
#define RA_UART_STEALTH_MODE 0

// Using the 16 tooth gear (recommended) for RA belt
#define RA_PULLEY_TEETH 16

////////////////////////////////
// DEC Stepper configuration
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 0.9°/step stepper for DEC
#define DEC_STEPPER_TYPE STEPPER_TYPE_NEMA17

// Using the TMC2209-UART driver for DEC stepper
#define DEC_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define some DEC stepper motor settings
#define DEC_MOTOR_CURRENT_RATING      900  // mA
#define DEC_OPERATING_CURRENT_SETTING 80   // %
#define DEC_STEPPER_ACCELERATION      3000
#define DEC_STEPPER_SPEED             1200
#define DEC_SLEW_MICROSTEPPING        16
#define DEC_GUIDE_MICROSTEPPING       64
// TMC2209 Stealth Mode (spreadCycle) - When set to 0, tracking is more precise, but noisy (high-pitched sound). When set to 1, they are silent.
#define DEC_UART_STEALTH_MODE 0

// Using the 16 tooth gear (recommended) for DEC belt
#define DEC_PULLEY_TEETH 16

////////////////////////////////
// Display configuration
// Define the type of display we are using. Currently: LCD Shield w/ keypad
#define DISPLAY_TYPE DISPLAY_TYPE_LCD_KEYPAD

////////////////////////////////
// GPS Addon configuration
// Define whether we have the GPS addon or not. Currently: Enable GPS
#define USE_GPS 1

////////////////////////////////
// Digital Level Addon configuration
// Define whether we have the Digital Level or not. Currently: Disable Digital Level
#define USE_GYRO_LEVEL 0

////////////////////////////////
// AutoPA Addon configuration
// Define whether we have the AutoPA add on or not. Currently: Full AutoPA is installed

// Using AutoPA V1.0.

// Using the 28BYJ-48 (Bipolar) stepper for AZ
#define AZ_STEPPER_TYPE STEPPER_TYPE_28BYJ48

// Using the TMC2209-UART driver for AZ stepper motor
#define AZ_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define AZ stepper motor power settings
#define AZ_MOTOR_CURRENT_RATING      300  // mA
#define AZ_OPERATING_CURRENT_SETTING 100  // %

// Using the 28BYJ-48 (Bipolar) stepper for ALT
#define ALT_STEPPER_TYPE STEPPER_TYPE_28BYJ48

// Using the TMC2209-UART driver for ALT stepper motor
#define ALT_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define ALT stepper motor power settings
#define ALT_MOTOR_CURRENT_RATING      300  // mA
#define ALT_OPERATING_CURRENT_SETTING 100  // %
