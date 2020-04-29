//motor N
int motor1_IN1=2;
int motor1_IN2=3;
//motor E
int motor2_IN1=4;
int motor2_IN2=5;
//motor S
int motor3_IN1=6;
int motor3_IN2=7;
//motor W
int motor4_IN1=8;
int motor4_IN2=9;
char state = 'U' ;
void setup() {
  // put your setup code here, to run once:
  //motor N
  pinMode(motor1_IN1,OUTPUT);
  pinMode(motor1_IN2,OUTPUT);
  //motor E
  pinMode(motor2_IN1,OUTPUT);
  pinMode(motor2_IN2,OUTPUT);
  //motor S
  pinMode(motor3_IN1,OUTPUT);
  pinMode(motor4_IN2,OUTPUT);
  //motor W
  pinMode(motor4_IN1,OUTPUT);
  pinMode(motor4_IN2,OUTPUT); 
}

void loop() {
  //making both INS high or low will stop the motor
  //making both INS different will spin the motor
  //Using WASD control
  switch(state){
    case'W'{
      Serial.println("Forward");
      //motor N
      digitalWrite(motor1_IN1,HIGH);
      digitalWrite(motor1_IN2,HIGH);
      //motor E
      digitalWrite(motor2_IN3,HIGH);
      digitalWrite(motor2_IN4,LOW); 
      //motor S
      digitalWrite(motor3_IN1,HIGH);
      digitalWrite(motor3_IN2,HIGH);
      //motor W
      digitalWrite(motor4_IN3,HIGH);
      digitalWrite(motor4_IN4,LOW);
      }
    case'A'{
      Serial.println("LEFT");
      //motor N
      digitalWrite(motor1_IN1,LOW);
      digitalWrite(motor1_IN2,HIGH);
      //motor E
      digitalWrite(motor2_IN3,HIGH);
      digitalWrite(motor2_IN4,HIGH); 
      //motor S
      digitalWrite(motor3_IN1,LOW);
      digitalWrite(motor3_IN2,HIGH);
      //motor W
      digitalWrite(motor4_IN3,HIGH);
      digitalWrite(motor4_IN4,HIGH);
      }
    case'D'{
      Serial.println("Right");
      //motor N
      digitalWrite(motor1_IN1,HIGH);
      digitalWrite(motor1_IN2,LOW);
      //motor E
      digitalWrite(motor2_IN3,HIGH);
      digitalWrite(motor2_IN4,HIGH); 
      //motor S
      digitalWrite(motor3_IN1,HIGH);
      digitalWrite(motor3_IN2,LOW);
      //motor W
      digitalWrite(motor4_IN3,HIGH);
      digitalWrite(motor4_IN4,HIGH);
      }
    case'S'{
      Serial.println("Reverse");
      //motor N
      digitalWrite(motor1_IN1,HIGH);
      digitalWrite(motor1_IN2,HIGH);
      //motor E
      digitalWrite(motor2_IN3,LOW);
      digitalWrite(motor2_IN4,HIGH); 
      //motor S
      digitalWrite(motor3_IN1,HIGH);
      digitalWrite(motor3_IN2,HIGH);
      //motor W
      digitalWrite(motor4_IN3,LOW);
      digitalWrite(motor4_IN4,HIGH);
      }
    }
  

}
