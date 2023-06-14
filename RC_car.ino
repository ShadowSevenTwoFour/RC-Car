
int enA = 10;
int in1 = 9;
int in2 = 8;

int enB = 5;
int in4 = 6;
int in3 = 7;

int state = 0;
int direction = 0;

String s, state_, direction_;

void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  delay(2000);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:  
  if(Serial.available() > 0){     
    state = Serial.read();   
  }
  if(Serial.available()){
    int space = s.indexOf(" ");
    s = Serial.readString();
    state_ = s.substring(0,space);
    direction_ = s.substring(space+1,s.length());
    state = toInt(state_);
    direction = toInt(direction_);
  }
  switch(state) {
    case 0:
      analogWrite(enA, 0);
      analogWrite(enB, 0);
      break;
    case 1:
      analogWrite(enA, 100);
      analogWrite(enB, 100);
      break;
    case 2:
      analogWrite(enA, 175);
      analogWrite(enB, 175);
      break;
    case 3:
      analogWrite(enA, 250);
      analogWrite(enB, 250);
      break;
  }
  switch(direction):
    case 0:
      digitalWrite(in1, LOW);
	    digitalWrite(in2, HIGH);
	    digitalWrite(in3, LOW);
	    digitalWrite(in4, HIGH);
      break;
    case 1:
      digitalWrite(in1, LOW);
	    digitalWrite(in2, HIGH);
	    digitalWrite(in3, LOW);
	    digitalWrite(in4, HIGH);
      break;
    case 2:
      digitalWrite(in1, LOW);
	    digitalWrite(in2, HIGH);
	    digitalWrite(in3, LOW);
	    digitalWrite(in4, HIGH);
      break;
    case 3:
      digitalWrite(in1, LOW);
	    digitalWrite(in2, HIGH);
	    digitalWrite(in3, LOW);
	    digitalWrite(in4, HIGH);
      break;
    case 4:
      digitalWrite(in1, LOW);
	    digitalWrite(in2, HIGH);
	    digitalWrite(in3, LOW);
	    digitalWrite(in4, HIGH);
      break; 
    
  delay(5);
}

//////PHONE INTERFACE ATTEMPT

  // String s, x_, y_;
  // int x,y;
  // if(Serial.available()){
  //   int space = s.indexOf(" ");
  //   s = Serial.readString();
  //   x_ = s.substring(0,space);
  //   y_ = s.substring(space+1,s.length());
  //   x = toInt(x_);
  //   y = toInt(y_);
  // }
