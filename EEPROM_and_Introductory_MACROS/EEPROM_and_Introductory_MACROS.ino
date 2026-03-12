#ifndef EEPROM_DEF
#define EEPROM_DEF
#include <EEPROM.h>
#endif

#ifndef modeA
#define modeA
#endif

#ifndef modeB
#define modeB
#endif

void beginSerialAndWaitForSerialToBeReady(unsigned long baudrate){
  Serial.begin(baudrate);
  
  while (!Serial) {
    ; // Wait for Serial to be ready (needed for some boards)
  }

}

void setup() {
  // put your setup code here, to run once:
  beginSerialAndWaitForSerialToBeReady(9600);
  
  #ifdef modeA
  for (int i = 0; i < 1028; i++) {
    EEPROM.write(i, i % 256); // Store values 0, 10, 20, ...
  }
  Serial.println("a");
  #endif
  
  #ifdef modeB
  for (long int address = 995; address < 1033; address++) {
    byte value = EEPROM.read(address); // Read a byte from EEPROM
    Serial.print("Address ");
    Serial.print(address);
    Serial.print(": ");
    Serial.println(value);
  }
  //the below is objectively wrong
  //data written past memory address 1000 does not persist but will 
  //remain in memory for the lifetime of the program, idk where the information is actually stored tho
  //this could cause unintended behaviours
  #endif
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("running loop continously");
  delay(3000);
}