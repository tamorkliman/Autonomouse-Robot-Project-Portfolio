/* 
 * File:   HsmTopLevel.h
 * Author: jwloughb
 *
 * Created on December 2, 2017, 5:30 PM
 */

#ifndef HSMTOPLEVEL_H
#define HSMTOPLEVEL_H

#include "ES_Configure.h"

uint8_t InitHsmTopLevel(uint8_t priority);

uint8_t PostHsmTopLevel(ES_Event thisEvent);

ES_Event RunHsmTopLevel(ES_Event thisEvent);

#endif  /* TOPLEVELHSM_H */
