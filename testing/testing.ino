#include "a.h"
#include "classA.h"

void beginSerialAndWaitForSerialToBeReady(unsigned long baudrate){
  Serial.begin(baudrate);
  
  while (!Serial) {
    ; // Wait for Serial to be ready (needed for some boards)
  }

}

ClassA c;
char phoneNumber[12] = "12345678911";
char messageContent[255] = "messageContentWithLotsOfExcessSpaceForConcatenation";


void setup() {
  // put your setup code here, to run once:
  beginSerialAndWaitForSerialToBeReady(9600);
  a();
  c.sendTextMessage(phoneNumber, messageContent);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("running");
  c.sendTextMessage(phoneNumber, messageContent);
}
