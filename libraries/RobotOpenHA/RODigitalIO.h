/*
 * RODigitalIO.h
 * Helper class for gpio
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef RODigitalIO_h
#define RODigitalIO_h

#include "RobotOpenHA.h"


class RODigitalIO
{
  public:
    RODigitalIO(uint8_t, uint8_t);

    void on();
	void off();
	boolean read();
	void pullUp();
	void allowFloat();
	void setMode(uint8_t);
    
  private:
    uint8_t _channel;
};


/* RODigitalIO */
#endif