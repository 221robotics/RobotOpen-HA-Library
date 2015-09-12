/*
 * ROAnalog.h
 * Helper class for ADC
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef ROAnalog_h
#define ROAnalog_h

#include "RobotOpenHA.h"


class ROAnalog
{
  public:
    ROAnalog(uint8_t);

    int read();
    
  private:
    uint8_t _channel;
};


/* ROAnalog */
#endif