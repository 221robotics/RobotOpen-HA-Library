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
 

#ifndef ROTimer_h
#define ROTimer_h


class ROTimer
{
  public:
    ROTimer();

    void queue(unsigned int);
    boolean ready();
    
  private:
    unsigned long _millisExpire;
    boolean _timerSet;
};


/* ROTimer */
#endif