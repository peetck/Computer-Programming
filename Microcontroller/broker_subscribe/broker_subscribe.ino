#include <ESP8266WiFi.h>
#include <PubSubClient.h>
const char ssid[] = "AISFibre_24G_AC2963";
const char pass[] = "38AC2963";
const char mqtt[] = "broker.mqttdashboard.com";
WiFiClient espClient;
PubSubClient client(espClient);
void callback(const char* topic, byte*payload, unsigned int len){
    String msg = "";
    for (int i = 0; i < len; i++){
      msg += (char)payload[i];
    }
    int val = msg.toInt();
    Serial.println(val);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin(ssid, pass);
  client.setServer(mqtt, 1883);
  client.setCallback(callback);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!client.connected()){
    String id = "clientId-4Fehk7qAxN55555sss";
    client.connect(id.c_str());
    client.subscribe("picnic");
  }
  client.loop();
 }
