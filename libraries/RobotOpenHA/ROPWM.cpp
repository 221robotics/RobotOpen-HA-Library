/*
 * ROPWM.cpp
 * Helper class for managing PWM/Servo outputs
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#include "RobotOpenHA.h"


// Constructor
ROPWM::ROPWM(uint8_t channel)
{
    _channel = channel;
}

void ROPWM::write(byte pwmVal) {
	_pwm.write(map(pwmVal, 0, 255, 0, 180));
}

void ROPWM::attach() {
	_pwm.attach(_channel);
}

void ROPWM::detach() {
	_pwm.detach();
}