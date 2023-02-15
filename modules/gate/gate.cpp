//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "display.h"
#include "mbed.h"
#include "servo.h"
#include "gate.h"
#include "user_interface.h"

//=====[Declaration of private defines]========================================

#define DELAY_TIME 3000

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void gateInit()
{
    servoInit();
}

void gateOpenClose(){
    clearDisplay();

    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "Welcome" );

    servoOpen();
    delay(DELAY_TIME);
    servoClose();
    userInterfaceInit();
}

//=====[Implementations of private functions]==================================
