
int ledPin = 2;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);                       // wait for a second  
  digitalWrite(ledPin, LOW);
  delay(1000);                       // wait for a second
}
