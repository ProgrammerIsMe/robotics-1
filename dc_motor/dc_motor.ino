int IN1 = 8;       //left motor
int IN2 = 9;       //left motor
int IN3 = 11;      //right motor
int IN4= 12;      //right motor

int ENA = 6;
int ENB = 3;

void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);

}

void loop() {
//control speed
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
//control direction
  for(int i=0;i<4;i++){
    // move forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(4000);
    if(i==3){
      break;
    }
    // turn left
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(500);
  }
}
