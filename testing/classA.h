#ifndef ClassA_h
#define ClassA_h

#include "Arduino.h"

#ifndef string
#define string
#include <string.h>
#endif

class ClassA {
  public:
    ClassA();

    void sendTextMessage(const char* recipientPhoneNumber, const char* messageContent);
    bool recieveTextMessageNow(char* senderPhoneNumber, char* messageContent);
};
#endif