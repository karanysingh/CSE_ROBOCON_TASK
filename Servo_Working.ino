#include<Servo.h>
int servoPin = 4;
Servo s1;
void setup() {
 s1.attach(servoPin);
}

void loop() {
 s1.write(0);//turns 0degree
 delay(500);//waits 0.5sec
 s1.write(90);//turns 90degree
 delay(500);//waits 0.5sec
 s1.write(180);//turns 180degree
 delay(500);//waits 0.5sec
 //Alternate code
// s1.writeMicroseconds(0);//turns 0degree
// delay(500);//waits 0.5sec
// s1.writeMicroseconds(1.5);//turns 90degree
// delay(500);//waits 0.5sec
// s1.writeMicroseconds(2);//turns 180degree
// delay(500);//waits 0.5sec
}
 
 
}
