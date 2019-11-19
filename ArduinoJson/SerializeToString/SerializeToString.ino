#include <ArduinoJson.h>

void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;

  long start = micros();
  
  StaticJsonDocument<64> doc;
  doc["sensor"] = "gps";
  doc["time"] = 1351824120;
  JsonArray data = doc.createNestedArray("data");
  data.add(48.756080);
  data.add(2.302038);

  String json;
  json.reserve(64);
  serializeJson(doc, json);
  
  long stop = micros();
  Serial.println(stop-start);
}

void loop() {
}
