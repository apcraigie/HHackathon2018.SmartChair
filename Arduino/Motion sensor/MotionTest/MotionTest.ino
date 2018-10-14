int ledPin = 13;  // LED on Pin 13 of Arduino
int pirPin = 6; // Input for HC-S501

int pirValue; // Place to store read PIR Value


void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
 
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
  
  
  
}

void loop() {
  pirValue = digitalRead(pirPin);

  Serial.print(pirValue);
  Serial.println();
  
  digitalWrite(ledPin, pirValue);

}