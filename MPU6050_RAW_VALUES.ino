#include<Wire.h>
const int MPU = 0x68;
void setup() {
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);//Device reset
  Wire.write(0);
  Wire.endTransmission(true);
  Serial.begin(9600);
}

void loop() {
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);//ACCEL_XOUT_H  -->register name
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true);
  AccX=Wire.read()<<8|Wire.read();
  AccY=Wire.read()<<8|Wire.read();
  AccZ=Wire.read()<<8|Wire.read();
  Temp=Wire.read()<<8|Wire.read();
  GyroX=Wire.read()<<8|Wire.read();
  GyroY=Wire.read()<<8|Wire.read();
  GyroZ=Wire.read()<<8|Wire.read();
  delay(100)
}
