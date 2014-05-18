/*
Example illustrates the Magnetic field strength surrounded the Smartphone and when exceeds 
a limit Send the phone a notification and Turn on a LED
*/

/*Including OneSheeld Library*/
#include <OneSheeld.h>

/*Reserve a boolean Flag*/
boolean phoneNotified=false;
/*Led on pin 13*/
int ledPin = 13;

void setup ()
{
  /*Start Communication*/
  OneSheeld.begin();
  /*Set ledPin as OUTPUT*/
  pinMode(ledPin,HIGH);
}

void loop () 
{
  
  /*Checkout if the magnetic strength exceeded certain value*/
  if (MagnetometerSensor.magneticStrength()>50.115)
  {
      /*This assures that notification will be sent only one time in this loop*/ 
      if (phoneNotified == false)
      {
        /*Notify the SmartPhone*/
        Notification.notifyPhone("Danger: Magnetic field increased checkout what's the problem");
        /*Turn on the LED*/
        digitalWrite(ledPin,HIGH);
        /*Initialize the variable with true so as to not always send a notification and annoy you*/
        phoneNotified = true;
      }
  }

  /*Reset the Flag*/
  if(MagnetometerSensor.magneticStrength()<50)
  {
    phoneNotified = false;
    digitalWrite(ledPin,LOW);
  }
  
}
