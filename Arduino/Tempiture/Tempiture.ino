//Temp Humity
#include <SimpleDHT.h>
#define dataPin 7
SimpleDHT11 dht11;

void setup() {
  // put your setup code here, to run once:
    //Serial Port begin
    Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Humity and Temp
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read without samples.
  //byte temperature = 0;
  //byte humidity = 0;
  
  //if (dht11.read(dataPin, &temperature, &humidity, NULL)) {
    //Serial.print("Read DHT11 failed.");
    //delay(250);
    //return;
  //}
  
  //Serial.print("Sample OK: ");
  //Serial.print((int)temperature); Serial.print(" *C, "); 
  //Serial.print((int)humidity); Serial.println(" %");
  
  // DHT11 sampling rate is 1HZ.
  //delay(1000);
}
