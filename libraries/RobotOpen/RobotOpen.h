/*
 * RobotOpen.h
 * Main RobotOpen class definition
 * 
 * RobotOpen [H]ardware [A]gnostic Library
 * www.RobotOpen.biz
 * by 221 Robotics // Eric Barch
 * Dec 30, 2014
 * 
 */


#ifndef RobotOpen_h
#define RobotOpen_h

#include "Arduino.h"
#include <ROJoystick.h>
#include <ROAnalog.h>
#include <RODigitalIO.h>
#include <RODashboard.h>
#include <ROPWM.h>
#include <ROStatus.h>
#include <ROTimer.h>
#include <ROParameter.h>
#include "IPAddress.h"


typedef void LoopCallback();


class RobotOpenClass {
public:
    // Set the IP address that the Robot controller will have
    static void setIP(IPAddress newIP);
    
    // Set the Subnet Mask that the Robot controller will have
    static void setSubnet(IPAddress newSubnet);
    
    // Set the Gateway router that the Robot controller will have
    static void setGateway(IPAddress newGateway);
    
    // Configure timeout until robot considers itself disconnected
    static void setTimeout(int new_timeout);

    // Fire up the RobotOpen object and get things running
    static void begin(LoopCallback *enabledCallback, LoopCallback *disabledCallback, LoopCallback *timedtasksCallback);
    
    // Exchange data with DS
    static void syncDS();

    // Log data to DS
    static void log(String data);
    
    // Tells us if the robot is enabled
    static boolean enabled();

    // How many joysticks are being received
    static int numJoysticks();

    // Overloaded calls to publish back data
    static boolean publish(String id, byte val);
    static boolean publish(String id, int val);
    static boolean publish(String id, long val);
    static boolean publish(String id, float val);

    static char* getJoystick(char index);

    static void addParameter(ROParameter* param);

    static void detachPWM(byte pwmChannel);
    static void attachPWM(byte pwmChannel);

private:
    // Dumps data back to the DS
    static void publishDS();

    // This gets called once when the robot becomes disconnected or disabled
    static void onDisable();

    // Parse out a DS packet
    static void parsePacket();

    // Grab UDP data
    static void handleData();

    // Update parameter in EEPROM
    static void writeParameter(uint8_t location, unsigned int firstByte);

    // Send all parameters to DS
    static void sendParameters();
    
    // CRC16 checksum function
    static unsigned int calc_crc16(unsigned char *buf, unsigned short len);
};

extern RobotOpenClass RobotOpen;


/* RobotOpen */
#endif