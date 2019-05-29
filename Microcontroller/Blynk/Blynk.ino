#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
const char ssid[] = "AISFibre_24G_AC2963";
const char pass[] = "38AC2963";
const char auth[] = "d34b35795ee44781a6bf2e2f3f86805f";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin(ssid, pass);
  Blynk.begin(auth, ssid, pass);
  pinMode(D0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
 }
