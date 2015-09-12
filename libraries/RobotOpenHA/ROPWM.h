/*
 * ROPWM.h
 * Helper class for managing PWM/Servo outputs
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef ROPWM_h
#define ROPWM_h

#include "RobotOpenHA.h"
#include <Servo.h>


class ROPWM
{
  public:
    ROPWM(uint8_t);

    void write(byte);

    void attach();
    void detach();
    
  private:
    uint8_t _channel;
    Servo _pwm;
};


/* ROPWM */
#endif