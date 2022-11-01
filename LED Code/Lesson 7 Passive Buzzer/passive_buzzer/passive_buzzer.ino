//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_C5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_G5,0,
  NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_C5, 0,
  NOTE_G5, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_D5, 0
  };
int duration = 200;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(int); thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    if(melody[thisNote] != 0){
      tone(8, melody[thisNote], duration);
    }
    // Output the voice after several minutes
    delay(500);
  }
   
  // restart after two seconds 
  delay(2000);
}
