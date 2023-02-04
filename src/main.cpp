#include <Arduino.h>
#include <RM3100.h>

RM3100 magSensor;



void setup() {
  // put your setup code here, to run once:
  magSensor.init();
  Serial.begin(9600);
}

void loop() {

  magSensor.get_raw_data();
  delay(100);
  // put your main code here, to run repeatedly:
}