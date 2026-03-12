#include "a.h"

void beginSerialAndWaitForSerialToBeReady(unsigned long baudrate){
  Serial.begin(baudrate);
  
  while (!Serial) {
    ; // Wait for Serial to be ready (needed for some boards)
  }

}

void setup() {
  // put your setup code here, to run once:
  beginSerialAndWaitForSerialToBeReady(9600);
  a();
}

void loop() {
  // put your main code here, to run repeatedly:

}
