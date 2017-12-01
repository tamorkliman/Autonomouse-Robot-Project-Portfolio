#include <BOARD.h>
#include <xc.h>
#include <stdio.h>
#include "ES_Configure.h"
#include "ES_Framework.h"
#include "ES_Timers.h"
#include "AD.h"

#include "BumperEventChecker.h"
#include "TapeSensorEventChecker.h"
#include "TrackWireEventChecker.h"

void main(void)
{
    ES_Return_t ErrorType;

    BOARD_Init();
    
    DEBUG_PRINT("STARTING");
     
    printf("Starting ES Framework Template\r\n");
    printf("using the 2nd Generation Events & Services Framework\r\n");

    // Your hardware initialization function calls go here
    AD_Init();
    
    ES_Timer_Init();
    InitializeTapeSensors(); 
    
    /* Initialize Event Checkers */
    
    InitializeBumperChecker();
    
    InitializeTrackWire();
        
    // now initialize the Events and Services Framework and start it running
    ErrorType = ES_Initialize();
    if (ErrorType == Success) {
        ErrorType = ES_Run();

    }
    //if we got to here, there was an error
    switch (ErrorType) {
    case FailedPointer:
        printf("Failed on NULL pointer");
        break;
    case FailedInit:
        printf("Failed Initialization");
        break;
    default:
        printf("Other Failure: %d", ErrorType);
        break;
    }
    for (;;)
        ;

};

/*------------------------------- Footnotes -------------------------------*/
/*------------------------------ End of file ------------------------------*/
