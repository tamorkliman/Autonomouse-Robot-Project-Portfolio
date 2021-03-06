#ifndef TAPE_EVENTCHECKER_H
#define	TAPE_EVENTCHECKER_H

#include "EventCheckerCommon.h"

// Sampling Time
#define TS_SAMPLE_TIME 2 // ms

#define TS_PORT PORTZ

// Tape Sensor Port Numbers
#define TS_LEFT_TRIG_PIN      PIN9
#define TS_LEFT_ADC           AD_PORTW8
#define TS_LEFT_LED_PIN       PIN6
 
#define TS_RIGHT_TRIG_PIN      PIN7
#define TS_RIGHT_ADC           AD_PORTW7
#define TS_RIGHT_LED_PIN       PIN4

#define TS_CENTER_TRIG_PIN      PIN5
#define TS_CENTER_ADC           AD_PORTW5
#define TS_CENTER_LED_PIN       PIN8
 
#define TS_REAR_TRIG_PIN      PIN3
#define TS_REAR_ADC           AD_PORTW3
#define TS_REAR_LED_PIN       PIN6


// Sensor Thresholds
#define TS_LEFT_HI_THRESH 850
#define TS_LEFT_LO_THRESH 650

#define TS_RIGHT_HI_THRESH 850
#define TS_RIGHT_LO_THRESH 650
 
#define TS_CENTER_HI_THRESH 850
#define TS_CENTER_LO_THRESH 650

#define TS_REAR_HI_THRESH 850
#define TS_REAR_LO_THRESH 650

typedef enum {
    LCR_OFF  = 0b000,
    LR_ON    = 0b101,
    L_ON     = 0b100,
    LC_ON    = 0b110,
    C_ON     = 0b010,
    RC_ON    = 0b011,
    R_ON     = 0b001,
    LCR_ON   = 0b111,
} TsFrontStatus;

 // Status Bit masks and vector
static uint8_t TS_leftBitmask   = 0b0100;
static uint8_t TS_centerBitmask = 0b0010;
static uint8_t TS_rightBitmask  = 0b0001;
 
/**
 * @Function TS_GetCurrentSensors(void)
 * @param none
 * @return TRUE or FALSE
 * @brief ...
 * @note 
 * @author David Kooi, Ben Swandon, 2017.10.3 14:08
 * @modified */
uint8_t TS_GetCurrentSensors(void);

/**
 * @Function InitializeTapeSensors(void)
 * @param none
 * @return TRUE or FALSE
 * @brief ...
 * @note 
 * @author David Kooi, Ben Swandon, 2017.10.3 14:08
 * @modified */
uint8_t InitializeTapeSensors(void);

/**
 * @Function CheckTapeSensors(void)
 * @param none
 * @return TRUE if an event occured or FALSE if no event occured
 * @brief Start asynchronously sync-sampling the tape sensors 
 * @note Subsequent calls to StartPing() will have no effect until the initial
   ping is complete.
 * @author David Kooi, 2017.11.21
 * @modified */
void StartSampling(void);

/**
 * @Function TS_DriveSampling(void)
 * @param none
 * @return 
 * @brief 
 * @note 
 * @author David Kooi, 2017.11.21
 * @modified */
void TS_DriveSampling(void);




#endif	/* TAPE_EVENTCHECKER_H */

