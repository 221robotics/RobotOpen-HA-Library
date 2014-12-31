#include <SPI.h>
#include <Ethernet.h>
#include <EEPROM.h>
#include <RobotOpen.h>
#include <Servo.h>



/* I/O Setup */
ROJoystick usb1(1);         // Joystick #1
Servo steerPWM;
Servo throttlePWM;


void setup()
{
  /* Initiate comms */
  RobotOpen.begin(&enabled, &disabled, &timedtasks);

  steerPWM.attach(5);
  throttlePWM.attach(6);
}


/* This is your primary robot loop - all of your code
 * should live here that allows the robot to operate
 */
void enabled() {
  steerPWM.write(map(usb1.rightX(), 0, 255, 0, 180));
  throttlePWM.write(map(usb1.leftY(), 0, 255, 0, 180));
}


/* This is called while the robot is disabled */
void disabled() {
  // safety code

  // neutral out PWMs
  steerPWM.write(90);
  throttlePWM.write(90);
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