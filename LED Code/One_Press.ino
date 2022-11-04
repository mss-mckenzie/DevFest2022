// C++ code
//
int button = 2;
int current = 4;
bool ready = true;
int UP = 1;
int DOWN = 0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
  digitalWrite(current, HIGH);
  
}

void loop()
{
  int press = digitalRead(button);
  Serial.println(ready);
 
  if(press == UP){
    ready = true;
  }
  if(press == DOWN && ready){
    ready = false;
    digitalWrite(current, LOW);
  	current += 1;
    if(current == 8){
      current = 4;
    }
    digitalWrite(current, HIGH);
  }

}