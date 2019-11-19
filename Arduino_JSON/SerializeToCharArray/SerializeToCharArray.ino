#include <Arduino_JSON.h>

void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;
  
  long start = micros();
  
  JSONVar doc;
  doc["sensor"] = "gps";
  doc["time"] = 1351824120;
  doc["data"][0] = 48.756080;
  doc["data"][1] = 2.302038;

  char json[64]; 
  JSON.stringify(doc).toCharArray(json, 64);
  
  long stop = micros();
  Serial.println(stop-start);
}

void loop() {
}
