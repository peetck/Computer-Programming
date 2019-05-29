#include <ESP8266WiFi.h>
const char ssid[] = "AISFibre_24G_AC2963";
const char pass[] = "38AC2963";
const char key[] = "ckmgNjN7cwIKxs30g_j3H9";
const char host[] = "maker.ifttt.com";
const char event[] = "Alert";
void line(int value1, String value2, String value3){
  String payload = String("value1=") + value1 + "&" + "value2=" + value2 + "&" + "value3=" + value3;

  WiFiClientSecure client;
  client.setInsecure();
  const int port = 443;
  if (!client.connect(host, port)) {
      Serial.println("connection failed");
      return;
   }
  String url = "/trigger/";
   url += event;
   url += "/with/key/";
   url += key;
  client.print(String("POST ") + url + " HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Content-Type: application/x-www-form-urlencoded\r\n" + "Content-Length:" + payload.length() + "\r\n\r\n" + payload + "\r\n");

}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  if (val > 500){
    line(val, "hello", "สวัสดีจ้า");
  }
  Serial.println(val);
}
