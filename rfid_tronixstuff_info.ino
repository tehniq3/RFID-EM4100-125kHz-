// http://tronixstuff.com/2013/11/19/arduino-tutorials-chapter-15-rfid/

#include <SoftwareSerial.h>
SoftwareSerial RFID(2, 3); // RX and TX

int i;

void setup()
{
  RFID.begin(9600);    // start serial to RFID reader
  Serial.begin(9600);  // start serial to PC 
}

void loop()
{
  if (RFID.available() > 0) 
  {
     i = RFID.read();
     Serial.print(i, DEC);
     Serial.print(" ");
  }
}
