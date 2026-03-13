#include "Arduino.h"
#include "classA.h"

ClassA::ClassA(){

}
void ClassA::sendTextMessage(const char* recipientPhoneNumber, const char* messageContent){
  Serial.print("sending ");
  Serial.print(messageContent);
  Serial.print(" to ");
  Serial.print(recipientPhoneNumber);
  Serial.print("\n");
}
bool recieveTextMessageNow(char* senderPhoneNumber, char* messageContent){
  return false;
}