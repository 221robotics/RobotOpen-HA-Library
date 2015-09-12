/*
 * ROStatus.cpp
 * Diagnostic data for the controller
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#include "RobotOpenHA.h"


// Constructor
ROStatusClass ROStatus;

boolean ROStatusClass::isEnabled() {
    return RobotOpen.enabled();
}

int ROStatusClass::uptimeSeconds() {
    return (int)(millis()/1000);
}