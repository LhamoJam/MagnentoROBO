// 设置红外测距传感器
int IR_SENSOR = 0; // Sensor is connected to the analog A0
int intSensorResult = 0; //Sensor result
int fltSensorCalc = 0; //Calculated value
// 设置薄膜压力传感器
int sensorPin = A1 ; //定义模拟口A3
int value = 0; //设置value为0

void setup()
{
  Serial.begin(9600); // Setup communication with computer to present results serial monitor
}

void loop()
{
  // 读取红外传感器压力
  intSensorResult = analogRead(IR_SENSOR); //Get sensor value
  fltSensorCalc = (6787.0 / (intSensorResult - 3.0)) - 4.0; //Calculate distance in cm
  // 读取眼里传感器模拟量
  value = analogRead(sensorPin); //将value设置为读取到的A3的数值
  // 写入串口
  Serial.print(fltSensorCalc, DEC); //显示value数值，并自动换行
  Serial.print("&");
  Serial.println(value, DEC); //显示value数值，并自动换行
  delay(50); //Wait
}
