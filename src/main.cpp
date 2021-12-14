#define GD32F330
#include <Arduino.h>


#define LED PB5
void setup(){

     Serial.begin(115200);

    pinMode(LED, OUTPUT);
}

void loop(){
    digitalWrite(LED, LOW);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
 Serial.write("A");
 
  // if(Serial.available() > 0){
  //   Serial.write(Serial.read()+10);
  //}
}
 