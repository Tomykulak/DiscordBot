// code to connect arduino DiscordBot to wifi
// after connecting it checks the discord server
// when someone joins, it plays a sound
#include <Arduino.h>
#if defined(ESP32)
  #include <WiFi.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
#endif

#include "secrets.h"

// code to connect arduino ESP8266 to wifi
void connectToWifi(){
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  Serial.print("Connecting to Wi-Fi");
  // keep printing untill connection success
  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();
}


void setup(){
  Serial.begin(115200);
  connectToWifi();
}

void loop(){

}