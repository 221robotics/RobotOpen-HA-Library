/*
 * RODashboard.h
 * Used to publish bits of data to the web inferface
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef RODashboard_h
#define RODashboard_h

#include "RobotOpenHA.h"



class RODashboardClass {
public:
    // Log data to DS
    static void debug(String data);

    // Overloaded calls to publish back data
    static boolean publish(String id, byte val);
    static boolean publish(String id, int val);
    static boolean publish(String id, long val);
    static boolean publish(String id, float val);

};

extern RODashboardClass RODashboard;


/* RODashboard */
#endif