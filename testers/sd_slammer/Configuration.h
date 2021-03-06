/****************************************************************************************
 * Here's where you define the overall electronics setup for your machine.
 ****************************************************************************************/

//
// CHOOSE WHICH MOTHERBOARD YOU'RE USING:
//
//#define REPRAP_MOTHERBOARD_VERSION_1_0
//#define REPRAP_MOTHERBOARD_VERSION_1_1
#define REPRAP_MOTHERBOARD_VERSION_1_2
//#define REPRAP_MOTHERBOARD_VERSION_2_0

//
// CHOOSE WHICH FAMILY OF STEPPER DRIVER YOU'RE USING:
//
//#define STEPPER_DRIVER_VERSION_1_X
#define STEPPER_DRIVER_VERSION_2_X
//#define STEPPER_DRIVER_VERSION_3_X

//
// CHOOSE WHICH FAMILY OF OPTO ENDSTOP YOU'RE USING:
//
//#define OPTO_ENDSTOP_1_X
#define OPTO_ENDSTOP_2_X

#define PACKET_TIMEOUT 1000
#define HOST_SERIAL_SPEED 38400
#define SLAVE_SERIAL_SPEED 38400

//uncomment to enable debugging functions
#define ENABLE_DEBUG 1
#define ENABLE_COMMS_DEBUG 1

//#define SCAN_TOOLS_ON_STARTUP

/****************************************************************************************
 * Sanguino Pin Assignment
 ****************************************************************************************/

//these are the pins for the v1.0 Motherboard.
#ifdef REPRAP_MOTHERBOARD_VERSION_1_0

//x axis pins
#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_MIN_PIN       20
#define X_MAX_PIN       21

//y axis pins
#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    19
#define Y_MIN_PIN       25
#define Y_MAX_PIN       26

//z axis pins
#define Z_STEP_PIN      29
#define Z_DIR_PIN       30
#define Z_ENABLE_PIN    31
#define Z_MIN_PIN        1
#define Z_MAX_PIN        2

//our pin for debugging.
#define DEBUG_PIN        0

//our SD card pins
#define SD_CARD_SELECT	4
#define SD_CARD_WRITE	28
#define SD_CARD_DETECT	24


//our RS485 pins
#define RX_ENABLE_PIN	13
#define TX_ENABLE_PIN	12


#endif

//these are the pins for the v1.1 Motherboard.
#if defined(REPRAP_MOTHERBOARD_VERSION_1_1) || defined(REPRAP_MOTHERBOARD_VERSION_1_2)

//x axis pins
#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_MIN_PIN       20
#define X_MAX_PIN       21

//y axis pins
#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    24
#define Y_MIN_PIN       25
#define Y_MAX_PIN       26

//z axis pins
#define Z_STEP_PIN      27
#define Z_DIR_PIN       28
#define Z_ENABLE_PIN    29
#define Z_MIN_PIN       30
#define Z_MAX_PIN       31

//our pin for debugging.
#define DEBUG_PIN        0

//our SD card pins
#define SD_CARD_WRITE    2
#define SD_CARD_DETECT   3
#define SD_CARD_SELECT   4

//our RS485 pins
#define TX_ENABLE_PIN	12
#define RX_ENABLE_PIN	13

//pin for controlling the PSU.
#define PS_ON_PIN       14

//these are the pins for the v2.0 Motherboard.
#elif defined(REPRAP_MOTHERBOARD_VERSION_2_0)

//x axis pins
#define X_STEP_PIN      48
#define X_DIR_PIN       47
#define X_ENABLE_PIN    46
#define X_MIN_PIN       45
#define X_MAX_PIN       44
#define X_CONFIG_1			43
#define X_CONFIG_2			42

//y axis pins
#define Y_STEP_PIN      40
#define Y_DIR_PIN       37
#define Y_ENABLE_PIN    36
#define Y_MIN_PIN       35
#define Y_MAX_PIN       34
#define Y_CONFIG_1			33
#define Y_CONFIG_2			32

//z axis pins
#define Z_STEP_PIN      31
#define Z_DIR_PIN       30
#define Z_ENABLE_PIN    15
#define Z_MIN_PIN       14
#define Z_MAX_PIN       39
#define Z_CONFIG_1			29
#define Z_CONFIG_2			28

//our pin for debugging.
#define DEBUG_PIN        13

//our SD card pins
#define SD_CARD_WRITE    10
#define SD_CARD_DETECT   11
#define SD_CARD_SELECT   12

//our RS485 pins
#define TX_ENABLE_PIN    38
#define RX_ENABLE_PIN    41

//pin for controlling the PSU.
#define PS_ON_PIN        27

//pins for all the peripherals
#define INTERFACE_1      4
#define INTERFACE_2      5
#define INTERFACE_3      3
#define INTERFACE_4      16
#define INTERFACE_5      17
#define INTERFACE_6      6
#define INTERFACE_7      7
#define INTERFACE_8      8
#define INTERFACE_9      9
#define INTERFACE_10     49
#define INTERFACE_11     25
#define INTERFACE_12     24
#define INTERFACE_13     23
#define INTERFACE_14     22
#define INTERFACE_15     53
#define INTERFACE_16     20
#define INTERFACE_17     21

//our kill switch aka estop
#define KILL_SWITCH      2

//our buzzer for alerts.
#define BUZZER_PIN       26

#endif

/****************************************************************************************
 * Stepper Driver Behaviour Definition
 ****************************************************************************************/

//do we want a step delay (ie: length of pulse in microseconds) comment out to disable.
#define STEP_DELAY 1

#ifdef STEPPER_DRIVER_VERSION_1_X
#define STEPPER_ENABLE    1
#define STEPPER_DISABLE   0
#endif

#ifdef STEPPER_DRIVER_VERSION_2_X
#define STEPPER_ENABLE    0
#define STEPPER_DISABLE   1
#endif

#ifdef STEPPER_DRIVER_VERSION_3_X
#define STEPPER_ENABLE    0
#define STEPPER_DISABLE   1
#endif

/****************************************************************************************
 * Opto Endstop Behaviour Definition
 ****************************************************************************************/

#ifdef OPTO_ENDSTOP_1_X
#define SENSORS_INVERTING 0
#endif

#ifdef OPTO_ENDSTOP_2_X
#define SENSORS_INVERTING 1
#endif


/****************************************************************************************
 * Various Buffer Size Declarations
 ****************************************************************************************/
//we store all queueable commands in one big giant buffer.
// Explicitly allocate memory at compile time for buffer.

#define POINT_SIZE 16 // 4 + 4 + 4 + 4 = 16
#define MAX_PACKET_LENGTH 32
#define COMMAND_BUFFER_SIZE 256

#if defined(REPRAP_MOTHERBOARD_VERSION_1_1) || defined(REPRAP_MOTHERBOARD_VERSION_1_2)
#define POINT_QUEUE_SIZE 32
#elif defined(REPRAP_MOTHERBOARD_VERSION_2_0)
#define POINT_QUEUE_SIZE 128
#endif
