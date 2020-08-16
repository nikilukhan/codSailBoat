#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "customAuthenticator";

char ssid[] = "ssid";
char pass[] = "password";

Servo servo;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(5);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1) {
  servo.write(param[0].asInt()); 
}
