/****************************************************************************
 Module
     ES_Configure.h
 Description
     This file contains macro definitions that are edited by the user to
     adapt the Events and Services framework to a particular application.
 Notes
     
 History
 When           Who     What/Why
 -------------- ---     --------
 01/15/12 10:03 jec      started coding
 *****************************************************************************/

#ifndef CONFIGURE_H
#define CONFIGURE_H

//#include "HsmTopLevel.h"


//#include "HsmTopLevel.h"


// General DEBUG_PRINT macros

#define DEBUG_PRINT(fmt, ...) printf(fmt"\r\n", ##__VA_ARGS__); fflush(stderr)
//#define DEBUG_PRINT(fmt,...) 


//defines for keyboard input
//#define USE_KEYBOARD_INPUT
//What State machine are we testing
//#define POSTFUNCTION_FOR_KEYBOARD_INPUT PostGenericService

//define for TattleTale
#define USE_TATTLETALE

//uncomment to supress the entry and exit events
//#define SUPPRESS_EXIT_ENTRY_IN_TATTLE

/****************************************************************************/
// Name/define the events of interest
// Universal events occupy the lowest entries, followed by user-defined events

/****************************************************************************/
typedef enum {
    ES_NO_EVENT, ES_ERROR, /* used to indicate an error from the service */
    ES_INIT, /* used to transition from initial pseudo-state */
    ES_ENTRY, /* used to enter a state*/
    ES_EXIT, /* used to exit a state*/
    ES_KEYINPUT, /* used to signify a key has been pressed*/
    ES_LISTEVENTS, /* used to list events in keyboard input, does not get posted to fsm*/
    ES_TIMEOUT, /* signals that the timer has expired */
    ES_TIMERACTIVE, /* signals that a timer has become active */
    ES_TIMERSTOPPED, /* signals that a timer has stopped*/

    /* User-defined events start here */
    BATTERY_CONNECTED,
    BATTERY_DISCONNECTED,

    // Drive Events
    DISTANCE_TIMEOUT,
    HEADING_TIMEOUT,
    TRAJECTORY_COMPLETE,

    // Bumper events
    FR_BUMPER_ON,
    FR_BUMPER_OFF,
    FL_BUMPER_ON,
    FL_BUMPER_OFF,
    RR_BUMPER_ON,
    RR_BUMPER_OFF,
    RL_BUMPER_ON,
    RL_BUMPER_OFF,

    // Tape Sensor Events
    TS_LEFT_ON_TAPE,
    TS_LEFT_OFF_TAPE,
    TS_CENTER_ON_TAPE,
    TS_CENTER_OFF_TAPE,
    TS_RIGHT_ON_TAPE,
    TS_RIGHT_OFF_TAPE,
    TS_REAR_ON_TAPE,
    TS_REAR_OFF_TAPE,
    TS_START,
    TS_SET_IDLE,

    // Trackwire Events
    TW_LEFT_TOUCHING,
    TW_LEFT_IN_SIGHT,
    TW_LEFT_OFF,
    TW_RIGHT_TOUCHING,
    TW_RIGHT_IN_SIGHT,
    TW_RIGHT_OFF,

    TW_OFF,
    TW_SHIFTED_LEFT,
    TW_CENTER,
    TW_SHIFTED_RIGHT,

    // Derivative Sampling
    TW_START_DERIVATIVE,
    TW_ZERO_DERIVATIVE,
    TW_NULL_DERIVATIVE,

    // Beacon Events
    BC_IN_SIGHT,
    BC_HEAD_ON,
    BC_OFF,

    // Deployer Events
    BALL_DEPLOYED,

    // Elevator Events
    ELEVATOR_ARRIVED,
    ELEVATOR_STEP_COMMAND,
            
    // Collision Events
    COLLISION_COMPLETE,
            
    // AT Events
            AT_KILLED,
            
            NUMBEROFEVENTS,
} ES_EventTyp_t;

static const char *EventNames[] = {
	"ES_NO_EVENT",
	"ES_ERROR",
	"ES_INIT",
	"ES_ENTRY",
	"ES_EXIT",
	"ES_KEYINPUT",
	"ES_LISTEVENTS",
	"ES_TIMEOUT",
	"ES_TIMERACTIVE",
	"ES_TIMERSTOPPED",
	"BATTERY_CONNECTED",
	"BATTERY_DISCONNECTED",
	"DISTANCE_TIMEOUT",
	"HEADING_TIMEOUT",
	"TRAJECTORY_COMPLETE",
	"FR_BUMPER_ON",
	"FR_BUMPER_OFF",
	"FL_BUMPER_ON",
	"FL_BUMPER_OFF",
	"RR_BUMPER_ON",
	"RR_BUMPER_OFF",
	"RL_BUMPER_ON",
	"RL_BUMPER_OFF",
	"TS_LEFT_ON_TAPE",
	"TS_LEFT_OFF_TAPE",
	"TS_CENTER_ON_TAPE",
	"TS_CENTER_OFF_TAPE",
	"TS_RIGHT_ON_TAPE",
	"TS_RIGHT_OFF_TAPE",
	"TS_REAR_ON_TAPE",
	"TS_REAR_OFF_TAPE",
	"TS_START",
	"TS_SET_IDLE",
	"TW_LEFT_TOUCHING",
	"TW_LEFT_IN_SIGHT",
	"TW_LEFT_OFF",
	"TW_RIGHT_TOUCHING",
	"TW_RIGHT_IN_SIGHT",
	"TW_RIGHT_OFF",
	"TW_OFF",
	"TW_SHIFTED_LEFT",
	"TW_CENTER",
	"TW_SHIFTED_RIGHT",
	"TW_START_DERIVATIVE",
	"TW_ZERO_DERIVATIVE",
	"TW_NULL_DERIVATIVE",
	"BC_IN_SIGHT",
	"BC_HEAD_ON",
	"BC_OFF",
	"BALL_DEPLOYED",
	"ELEVATOR_ARRIVED",
	"ELEVATOR_STEP_COMMAND",
	"COLLISION_COMPLETE",
	"AT_KILLED",
	"NUMBEROFEVENTS",
};




/****************************************************************************/
// This are the name of the Event checking function header file.
#define EVENT_CHECK_HEADER "EventCheckerCommon.h"

/****************************************************************************/
// This is the list of event checking functions
#define EVENT_CHECK_LIST CheckBatteryEvent

/****************************************************************************/
// These are the definitions for the post functions to be executed when the
// corresponding timer expires. All 16 must be defined. If you are not using
// a timers, then you can use TIMER_UNUSED
#define TIMER_UNUSED ((pPostFunc)0)
#define TIMER0_RESP_FUNC (PostDriveService)
#define TIMER1_RESP_FUNC (PostRateGroupDriverService) // 1 Hz
#define TIMER2_RESP_FUNC (PostHsmTopLevel)
#define TIMER3_RESP_FUNC TIMER_UNUSED
#define TIMER4_RESP_FUNC TIMER_UNUSED
#define TIMER5_RESP_FUNC (PostHsmTopLevel)
#define TIMER6_RESP_FUNC (PostRateGroupDriverService) // 20 Hz
#define TIMER7_RESP_FUNC (PostRateGroupDriverService) // 500 Hz
#define TIMER8_RESP_FUNC  (PostHsmTopLevel)
#define TIMER9_RESP_FUNC  (PostHsmTopLevel)
#define TIMER10_RESP_FUNC (PostHsmTopLevel)
#define TIMER11_RESP_FUNC (PostHsmTopLevel)
#define TIMER12_RESP_FUNC (PostElevatorService)
#define TIMER13_RESP_FUNC (PostDeployerDriver)
#define TIMER14_RESP_FUNC (PostHsmTopLevel)
#define TIMER15_RESP_FUNC (PostRateGroupDriverService) // TS Sync Timer


/****************************************************************************/
// Give the timer numbers symbolc names to make it easier to move them
// to different timers if the need arises. Keep these definitons close to the
// definitions for the response functions to make it easire to check that
// the timer number matches where the timer event will be routed

#define DRIVE_SERVICE_TIMER 0
#define DRIVE_TIMER_TICKS 50

#define HZ_1_TIMER     1 /*make sure this is enabled above and posting to the correct state machine*/
#define TOP_LEVEL_TIMER 2
#define WIGGLE_TIMER 5
#define HZ_50_TIMER   6
#define HZ_500_TIMER  7
#define TW_FINAL_TO 8
#define BEACON_CHECK_TIMER 9
#define REN_LAUNCH_TIMER 10
#define COLLISION_TAPE_SNUB_TIMER 11
#define ELEVATOR_SERVICE_TIMER 12
#define BALL_DRIVER_TIMER 13
#define TW_ALIGN_TIMER 14
#define TS_SYNC_TIMER 15

/****************************************************************************/
// The maximum number of services sets an upper bound on the number of 
// services that the framework will handle. Reasonable values are 8 and 16
// HOWEVER: at this time only a value of 8 is supported.
#define MAX_NUM_SERVICES 8

/****************************************************************************/
// This macro determines that nuber of services that are *actually* used in
// a particular application. It will vary in value from 1 to MAX_NUM_SERVICES
#define NUM_SERVICES 6

/****************************************************************************/
// These are the definitions for Service 0, the lowest priority service
// every Events and Services application must have a Service 0. Further 
// services are added in numeric sequence (1,2,3,...) with increasing 
// priorities
// the header file with the public fuction prototypes
#define SERV_0_HEADER "ES_KeyboardInput.h"
// the name of the Init function
#define SERV_0_INIT InitKeyboardInput
// the name of the run function
#define SERV_0_RUN RunKeyboardInput
// How big should this service's Queue be?
#define SERV_0_QUEUE_SIZE 9

/****************************************************************************/
// These are the definitions for Service 1
#if NUM_SERVICES > 1
// the header file with the public fuction prototypes
#define SERV_1_HEADER "DriveService.h"
// the name of the Init function
#define SERV_1_INIT InitDriveService
// the name of the run function
#define SERV_1_RUN RunDriveService
// How big should this services Queue be?
#define SERV_1_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 2
#if NUM_SERVICES > 2
// the header file with the public fuction prototypes
#define SERV_2_HEADER "RateGroupDriverService.h"
// the name of the Init function
#define SERV_2_INIT InitRateGroupDriverService
// the name of the run function
#define SERV_2_RUN RunRateGroupDriverService
// How big should this services Queue be?
#define SERV_2_QUEUE_SIZE 5
#endif

/****************************************************************************/
// These are the definitions for Service 3
#if NUM_SERVICES > 3
// the header file with the public fuction prototypes
#define SERV_3_HEADER "HsmTopLevel.h"
// the name of the Init function
#define SERV_3_INIT InitHsmTopLevel
// the name of the run function
#define SERV_3_RUN RunHsmTopLevel
// How big should this services Queue be?
#define SERV_3_QUEUE_SIZE 4
#endif

/****************************************************************************/
// These are the definitions for Service 4
#if NUM_SERVICES > 4
// the header file with the public fuction prototypes
#define SERV_4_HEADER "DeployerDriver.h"
// the name of the Init function
#define SERV_4_INIT InitDeployerDriver
// the name of the run function
#define SERV_4_RUN RunBallDispenser
// How big should this services Queue be?
#define SERV_4_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 5
#if NUM_SERVICES > 5
// the header file with the public fuction prototypes
#define SERV_5_HEADER "ElevatorService.h"
// the name of the Init function
#define SERV_5_INIT InitElevatorService
// the name of the run function
#define SERV_5_RUN RunElevatorService
// How big should this services Queue be?
#define SERV_5_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 6
#if NUM_SERVICES > 6
// the header file with the public fuction prototypes
#define SERV_6_HEADER "TestService.h"
// the name of the Init function
#define SERV_6_INIT TestServiceInit
// the name of the run function
#define SERV_6_RUN TestServiceRun
// How big should this services Queue be?
#define SERV_6_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 7
#if NUM_SERVICES > 7
// the header file with the public fuction prototypes
#define SERV_7_HEADER "TestService.h"
// the name of the Init function
#define SERV_7_INIT TestServiceInit
// the name of the run function
#define SERV_7_RUN TestServiceRun
// How big should this services Queue be?
#define SERV_7_QUEUE_SIZE 3
#endif

/****************************************************************************/
// the name of the posting function that you want executed when a new 
// keystroke is detected.
// The default initialization distributes keystrokes to all state machines
#define POST_KEY_FUNC ES_PostAll



/****************************************************************************/
// These are the definitions for the Distribution lists. Each definition
// should be a comma seperated list of post functions to indicate which
// services are on that distribution list.
#define NUM_DIST_LISTS 0
#if NUM_DIST_LISTS > 0 
#define DIST_LIST0 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 1 
#define DIST_LIST1 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 2 
#define DIST_LIST2 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 3 
#define DIST_LIST3 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 4 
#define DIST_LIST4 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 5 
#define DIST_LIST5 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 6 
#define DIST_LIST6 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 7 
#define DIST_LIST7 PostTemplateFSM
#endif



#endif /* CONFIGURE_H */
