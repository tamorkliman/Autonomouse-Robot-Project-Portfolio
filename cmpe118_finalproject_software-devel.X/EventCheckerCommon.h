
#ifndef EVENTCHECKER_COMMON_H   /* Guard against multiple inclusion */
#define EVENTCHECKER_COMMON_H

#include "ES_Configure.h"
#include "ES_Events.h"
#include "serial.h"
#include "AD.h"
#include "ES_CheckEvents.h"
#include "IO_Ports.h"
#include "BOARD.h"
#include "IO_Ports.h"
#include <stdio.h>

#include "BatteryEventChecker.h"

#define TS_LEFT_SENSOR   0x01 //b0001
#define TS_RIGHT_SENSOR  0x02 //b0010
#define TS_CENTER_SENSOR 0x04 //b0100
#define TS_BACK_SENSOR   0x08 //b1000

// Utility Macros
#define IO_SOURCE IO_PortsSetPortBits
#define IO_SINK   IO_PortsClearPortBits


/* Event Checker Debug Print Handers */
//#define BUMPER_PRINT(fmt, ...) printf(fmt"\r\n", ##__VA_ARGS__); fflush(stderr)
#define BUMPER_PRINT(fmt,...) 

//#define TAPE_PRINT(fmt, ...) printf(fmt"\r\n", ##__VA_ARGS__); fflush(stderr)
#define TAPE_PRINT(fmt,...) 

//#define TWIRE_PRINT(fmt, ...) printf(fmt"\r\n", ##__VA_ARGS__); fflush(stderr)
#define TWIRE_PRINT(fmt,...) 

//#define BEACON_PRINT(fmt, ...) printf(fmt"\r\n", ##__VA_ARGS__); fflush(stderr)
#define BEACON_PRINT(fmt,...) 



#endif 
