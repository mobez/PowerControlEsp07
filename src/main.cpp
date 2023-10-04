#include <Arduino.h>
#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
#endif
#include <NetBIOS.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <WebServer.h>

#include <Ticker.h>
#include "time.h"

#include "espnow.h"
#include "config.h"
#include "wifi_conf.h"
#include "times.h"
#include "web_server.h"

#include <Arduino_JSON.h>

#if FILESYSTEM == FFat
#include <FFat.h>
#endif
#if FILESYSTEM == SPIFFS
#include <SPIFFS.h>
#endif

#include "SI7021.h"
#include "ds18b.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}