#include "gsm.h"
#include "global.h"
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(gasPin, INPUT);
  pinMode(pulsePin, INPUT);
  pinMode(voicePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  gas_val = digitalRead(gasPin);
  pulse_val = analogRead(pulsePin);
  voice_val = analogRead(voicePin);
  dht.dht_read(tempPin);
  temp_val = dht.temperature;
  hum_val = dht.RH;

  Serial.print("Gas Value: ");
  Serial.println(gas_val);
  Serial.print("Pulse Value: ");
  Serial.println(pulse_val);
  Serial.print("Voice Value: ");
  Serial.println(voice_val);
  Serial.print("Temperature: ");
  Serial.print(temp_val);
  Serial.println("°C");
  Serial.print("Humidity: ");
  Serial.print(hum_val);
  Serial.println("%");
 

  if (gas_val == 0) {
    send_sms(mobile_number,"Gas leakage detected!");
    Buzzer();
  }

  if (pulse_val > 950) {
    send_sms(mobile_number,"Heart rate abnormal!");
    Buzzer();
  }

  if (voice_val > 950) {
    send_sms(mobile_number,"Unusual noise detected!");
    Buzzer();
  }

  if (hum_val > 70) {
    send_sms(mobile_number,"High humidity detected!");
    Buzzer();
  }

  if (temp_val > 38) {
    send_sms(mobile_number,"High temperature detected!");
    Buzzer();
  }

delay(1000);
}

void Buzzer() {
  digitalWrite(buzzerPin, HIGH);
  delay(1000);
  digitalWrite(buzzerPin, LOW);
}
