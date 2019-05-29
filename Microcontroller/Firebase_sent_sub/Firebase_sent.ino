#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

const char host[] = "picnic-5f801.firebaseio.com";
const char auth[] = "EXWzgQyrcTLu5pwpu5xsgQJj2odGlHiewXuEjZ0Q";
const char ssid[] = "AISFibre_24G_AC2963";
const char pass[] = "38AC2963";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    WiFi.begin(ssid, pass);
   while (WiFi.status() != WL_CONNECTED) {
Serial.print(".");
delay(500);}
Serial.println();
Serial.print("connected: "); 
  Firebase.begin(host, auth);
  Firebase.setInt("analog", 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Firebase.setInt("analog", val);
  Serial.println(Firebase.getInt("test"));
}
