/*
 * ROJoystick.h
 * Exposes raw joystick data as meaningful labels
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef ROJoystick_h
#define ROJoystick_h

#include "RobotOpenHA.h"


class ROJoystick
{
  public:
    ROJoystick(char);

    byte leftX();
    byte leftY();
    byte rightX();
    byte rightY();
    boolean btnA();
    boolean btnB();
    boolean btnX();
    boolean btnY();
    boolean btnLShoulder();
    boolean btnRShoulder();
    byte lTrigger();
    byte rTrigger();
    boolean btnSelect();
    boolean btnStart();
    boolean btnLStick();
    boolean btnRStick();
    boolean dPadUp();
    boolean dPadDown();
    boolean dPadLeft();
    boolean dPadRight();
    byte auxOne();
    byte auxTwo();
    byte auxThree();
    byte auxFour();
    
  private:
    char _index;

    byte validate(char index, boolean neutralOnError);
};


/* ROJoystick */
#endif