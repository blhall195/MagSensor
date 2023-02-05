#include <Arduino.h>
#include <RM3100.h>

RM3100 magSensor;



void setup() {
  // put your setup code here, to run once:
  magSensor.init();
  Serial.begin(9600);
  Wire.begin();
}

void loop() {

  magSensor.get_raw_data();
  delay(1000);
  Serial.println("hello");
  // put your main code here, to run repeatedly:
}