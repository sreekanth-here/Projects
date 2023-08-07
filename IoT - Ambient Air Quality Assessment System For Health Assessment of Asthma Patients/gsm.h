#ifndef GSM_H
#define GSM_H

#include "global.h"

void send_sms(String number, String msg)
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
   mySerial.println("AT+CMGS=\"+91"+String(number)+"\"\r"); // Replace x with mobile number
  delay(1000);
   mySerial.print(msg);// The SMS text you want to send
  delay(1000);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}
#endif
