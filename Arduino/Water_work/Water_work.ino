//www.elegoo.com
//2016.12.9
#include "pitches.h"
int adc_id = 1;
int HistoryValue = 0;
char printBuffer[128];

// notes in the melody:
int duration = 500;  // 500 miliseconds

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    int value = analogRead(adc_id); // get adc value

    if(((HistoryValue>=value) && ((HistoryValue - value) > 10)) || ((HistoryValue<value) && ((value - HistoryValue) > 10)))
    {
      sprintf(printBuffer,"ADC%d level is %d\n",adc_id, value);
      Serial.print(printBuffer);
      HistoryValue = value;
    }
    if(value > 60)
    {
      // pin8 output the voice, every scale is 0.5 sencond
      tone(8, NOTE_A5, duration);
     
      // Output the voice after several minutes
       delay(1000);
    }
}
