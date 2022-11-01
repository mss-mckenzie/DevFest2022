//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;
int mode = LOW;
byte leds = 0;
bool readya = true;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    if(readya){
      mode = HIGH + LOW - mode;
      digitalWrite(ledPin, mode);
      readya = false;
    }
  }
  else{
    readya = true;
  }
  
  if (digitalRead(buttonBpin) == LOW)
  {
    Serial.println("XXXXXXXXXXXXXXXXXXXXXXXX");
    digitalWrite(ledPin, LOW);
    mode = LOW;
  }
}
