/*
 * ROAnalog.cpp
 * Helper class for ADC
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#include "RobotOpenHA.h"


// Constructor
ROAnalog::ROAnalog(uint8_t channel)
{
    _channel = channel;
}

int ROAnalog::read() {
	return analogRead(_channel);
}