#include<Wire.h>
const int MPU = 0x68;
int16_t AccX,AccY,AccZ,Temp,GyroX,GyroY,GyroZ;
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
  Serial.print("AccX = "); Serial.print(AccX);
  Serial.print("  AccY = "); Serial.print(AccY);
  Serial.print("  AccZ = "); Serial.print(AccZ);
  Serial.print("\nTemp = "); Serial.print(Temp/340.00+36.53);
  Serial.print("\nGyroX = "); Serial.print(GyroX);
  Serial.print("  GyroY = "); Serial.print(GyroY);
  Serial.print("  GyroZ = "); Serial.println(GyroZ);
  delay(200)
}
