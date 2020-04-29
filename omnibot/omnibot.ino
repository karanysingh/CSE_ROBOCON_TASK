//motor NW
int motor1_IN1=2;
int motor1_IN2=3;
//motor NE
int motor2_IN1=4;
int motor2_IN2=5;
//motor SW
int motor3_IN1=6;
int motor3_IN2=7;
//motor SE
int motor4_IN1=8;
int motor4_IN2=9;
char state = 'U' ;
void setup() {
  // put your setup code here, to run once:
  //motor NW
  pinMode(motor1_IN1,OUTPUT);
  pinMode(motor1_IN2,OUTPUT);
  //motor NE
  pinMode(motor2_IN1,OUTPUT);
  pinMode(motor2_IN2,OUTPUT);
  //motor SW
  pinMode(motor3_IN1,OUTPUT);
  pinMode(motor4_IN2,OUTPUT);
  //motor SE
  pinMode(motor4_IN1,OUTPUT);
  pinMode(motor4_IN2,OUTPUT); 
}

void loop() {
    //code for the square path
    state = 'W';
    execution();
    state = 'A';
    execution();
    state = 'S'
    execution();
    state = 'D'
    execution();
   }
void execution(){
  //making both INS high or low will stop the motor
  //making both INS different will spin the motor
  //Using WASD control
  while(true){
    switch(state){
      case'W'{
        Serial.println("Forward");
        //motor NW
        digitalWrite(motor1_IN1,LOW);
        digitalWrite(motor1_IN2,HIGH);
        //motor NE
        digitalWrite(motor2_IN1,HIGH);
        digitalWrite(motor2_IN2,LOW); 
        //motor SW
        digitalWrite(motor3_IN1,LOW);
        digitalWrite(motor3_IN2,HIGH);
        //motor SE
        digitalWrite(motor4_IN1,HIGH);
        digitalWrite(motor4_IN2,LOW);
        }
      case'A'{
        Serial.println("LEFT");
        //motor NW
        digitalWrite(motor1_IN1,HIGH);
        digitalWrite(motor1_IN2,LOW);
        //motor NE
        digitalWrite(motor2_IN1,HIGH);
        digitalWrite(motor2_IN2,LOW); 
        //motor SW
        digitalWrite(motor3_IN1,LOW);
        digitalWrite(motor3_IN2,HIGH);
        //motor SE
        digitalWrite(motor4_IN1,LOW);
        digitalWrite(motor4_IN2,HIGH);
        }
      case'D'{
        Serial.println("Right");
        //motor NW
        digitalWrite(motor1_IN1,LOW);
        digitalWrite(motor1_IN2,HIGH);
        //motor NE
        digitalWrite(motor2_IN1,LOW);
        digitalWrite(motor2_IN2,HIGH); 
        //motor SW
        digitalWrite(motor3_IN1,HIGH);
        digitalWrite(motor3_IN2,LOW);
        //motor SE
        digitalWrite(motor4_IN1,HIGH);
        digitalWrite(motor4_IN2,LOW);
        }
      case'S'{
        Serial.println("Reverse");
        //motor NW
        digitalWrite(motor1_IN1,HIGH);
        digitalWrite(motor1_IN2,LOW);
        //motor NE
        digitalWrite(motor2_IN1,LOW);
        digitalWrite(motor2_IN2,HIGH); 
        //motor SW
        digitalWrite(motor3_IN1,HIGH);
        digitalWrite(motor3_IN2,LOW);
        //motor SE
        digitalWrite(motor4_IN1,LOW);
        digitalWrite(motor4_IN2,HIGH);
        }
        delay(10000);//10seconds
      }
      break
     }
  }
