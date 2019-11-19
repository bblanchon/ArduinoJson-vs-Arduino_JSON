#include <Arduino_JSON.h>

void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;

  const char json[] = "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";

  long start = micros();

  JSONVar doc = JSON.parse(json);
  
  const char* sensor = doc["sensor"];
  long time = doc["time"];
  double latitude = doc["data"][0];
  double longitude = doc["data"][1];
  
  long stop = micros();
  Serial.println(stop-start);
}

void loop() {
}
