//sound sensor
int  sensorPin  =  A0;     // select the input  pin for  the potentiometer 
int  ledPin  =  13;   // select the pin for  the LED
int  sensorValue =  0;  // variable to  store  the value  coming  from  the sensor


void setup() {
  // put your setup code here, to run once:
 //Serial Port begin
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //sound sensor
  sensorValue =  analogRead(sensorPin);
digitalWrite(ledPin,  HIGH); 
delay(sensorValue); 
digitalWrite(ledPin,  LOW);
delay(sensorValue);
Serial.println(sensorValue,  DEC);

}
