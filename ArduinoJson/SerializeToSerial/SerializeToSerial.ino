#include <ArduinoJson.h>

void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;

  StaticJsonDocument<64> doc;
  doc["sensor"] = "gps";
  doc["time"] = 1351824120;
  JsonArray data = doc.createNestedArray("data");
  data.add(48.756080);
  data.add(2.302038);
  serializeJson(doc, Serial);
  
  long stop = micros();
  Serial.println(stop-start);
}

void loop() {
}
