/*
 * ROStatus.h
 * Diagnostic data for the controller
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef ROStatus_h
#define ROStatus_h

#include "RobotOpenHA.h"


class ROStatusClass {
public:
	static boolean isEnabled();

	static int uptimeSeconds();

};

extern ROStatusClass ROStatus;


/* ROStatus */
#endif