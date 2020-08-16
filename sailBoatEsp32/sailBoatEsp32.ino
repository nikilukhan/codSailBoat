#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <Servo_ESP32.h>

char auth[] = "customAuthenticator";

char ssid[] = "ssid";
char pass[] = "password";

Servo_ESP32 servo;

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  servo.attach(11);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1) {
  servo.write(param[0].asInt()); 
}
