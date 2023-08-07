#ifndef GLOBAL_H
#define GLOBAL_H

#include<SoftwareSerial.h>
SoftwareSerial mySerial(4,5);  //rx, tx

#include "dht11.h"
DHT dht;
#define tempPin 2
#define gasPin  A0     
#define pulsePin A1   
#define voicePin A2  
#define buzzerPin 3 

int gas_val, pulse_val, voice_val, temp_val, hum_val;
String mobile_number = "9940123099";
void send_sms(String number, String msg);
void Buzzer();
#endif
