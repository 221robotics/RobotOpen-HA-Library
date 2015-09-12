/*
 * ROTimer.cpp
 * A handy class to schedule simple events
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#include "RobotOpenHA.h"


// Constructor
ROTimer::ROTimer()
{
	_millisExpire = 0;
	_timerSet = false;
}

void ROTimer::queue(unsigned int duration) {
	_millisExpire = millis() + duration;
	_timerSet = true;
}

boolean ROTimer::ready() {
	if ((millis() > _millisExpire) && _timerSet) {
		_timerSet = false;
		return true;
	} else {
		return false;
	}
}