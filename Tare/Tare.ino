#include <ArduinoJson.h>

void setup() {
  // Initialize Serial port
  Serial.begin(115200);
  while (!Serial) continue;

  long start = micros();
   
  // PLACE PROGRAM HERE
  
  long stop = micros();
  Serial.println(stop - start);
}

void loop() {

}
