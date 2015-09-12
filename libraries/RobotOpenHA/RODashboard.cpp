/*
 * RODashboard.cpp
 * Used to publish bits of data to the web inferface
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#include "RobotOpenHA.h"


// Constructor
RODashboardClass RODashboard;

void RODashboardClass::debug(String data) {
    RobotOpen.log(data);
}

boolean RODashboardClass::publish(String id, byte val) {
    return RobotOpen.publish(id, val);
}

boolean RODashboardClass::publish(String id, int val) {
    return RobotOpen.publish(id, val);
}

boolean RODashboardClass::publish(String id, long val) {
    return RobotOpen.publish(id, val);
}

boolean RODashboardClass::publish(String id, float val) {
    return RobotOpen.publish(id, val);
}