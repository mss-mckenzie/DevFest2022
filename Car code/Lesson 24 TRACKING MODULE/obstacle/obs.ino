int buttonpin=3; //define switch port
int  val;//define digital variable val

void  setup(){
  Serial.begin(9600);
  pinMode(buttonpin,INPUT);//define switch as a output port
}

void  loop(){ 
  val=digitalRead(buttonpin); //read the value of the digital interface 3 assigned to val 
  if(val==HIGH){              //when the switch sensor have signal, LED blink
    Serial.println("Clear");
  }
  else{
    Serial.println("Obstacle!");
  }
}

