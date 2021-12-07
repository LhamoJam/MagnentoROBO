int sensorPin = A1 ; //定义模拟口A3
int value = 0; //设置value为0
void setup(){
  Serial.begin(9600); //设置波特率
}

void loop(){

  value = analogRead(sensorPin); //将value设置为读取到的A3的数值
  Serial.println(value, DEC); //显示value数值，并自动换行

  delay(50); //延迟0.05S

}
