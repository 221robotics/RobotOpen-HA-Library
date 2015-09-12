#include <SPI.h>
#include <Ethernet.h>
#include <EEPROM.h>
#include <Servo.h>
#include <RobotOpenHA.h>



/* I/O Setup */
ROJoystick usb1(1);         // Joystick #1
ROPWM leftDrive(5);
ROPWM rightDrive(6);


void setup()
{
  /* Initiate comms */
  RobotOpen.begin(&enabled, &disabled, &timedtasks);

  leftDrive.attach();
  rightDrive.attach();
}


/* This is your primary robot loop - all of your code
 * should live here that allows the robot to operate
 */
void enabled() {
  // Constantly update PWM values with joystick values
  // Analog sticks feed back values from 0-255
  // 255 - usb1.leftY() to invert a drive

  // Set left and right drive from joystick values
  leftDrive.write(usb1.leftY());
  rightDrive.write(usb1.rightY());
}


/* This is called while the robot is disabled */
void disabled() {
  // safety code

  // neutral out PWMs
  leftDrive.write(127);
  rightDrive.write(127);
}


/* This loop ALWAYS runs - only place code here that can run during a disabled state
 * This is also a good spot to put driver station publish code
 */
void timedtasks() {
  RODashboard.publish("Uptime Seconds", ROStatus.uptimeSeconds());
}


// !!! DO NOT MODIFY !!!
void loop() {
  RobotOpen.syncDS();
}