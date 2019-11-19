#include <ArduinoJson.h>

// USER INTERACTION REQUIRED:
// paste {"sensor":"gps","time":1351824120,"data":[48.756080,2.302038]} in the serial monitor

void setup() {
  Serial.begin(115200);
  while (!Serial) continue;

  while (Serial.available()<30) continue;

  StaticJsonDocument<64> doc;
  deserializeJson(doc, Serial);
  
  const char* sensor = doc["sensor"];
  long time = doc["time"];
  double latitude = doc["data"][0];
  double longitude = doc["data"][1];
  
  long stop = micros();
  Serial.println(stop-start);
}

void loop() {
}
