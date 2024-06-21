int motor1a= 25;
int motor2a = 33;
int motor1b= 26;
int motor2b = 32;
void setup() {
  // put your setup code here, to run once:
pinMode(motor1a,OUTPUT);
pinMode(motor2a,OUTPUT);
pinMode(motor1b,OUTPUT);
pinMode(motor2b,OUTPUT);
pinMode(27,INPUT);
pinMode(39,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorvalueR=analogRead(39);// white 2390 &3000 black0
int sensorvalueL=analogRead(27);// white3229 &3214 black279 &290
Serial.println(sensorvalueR);
Serial.println(sensorvalueL);
delay(100);
if(sensorvalueR<2000 && sensorvalueL<2000){
  digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,LOW);
}
else if(sensorvalueR>2000 && sensorvalueL>2000){
digitalWrite(motor1a,LOW);
digitalWrite(motor1b,LOW);
digitalWrite(motor2a,LOW);
digitalWrite(motor2b,LOW);
}
if(sensorvalueR<2000 && sensorvalueL>2000)
{
    digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,LOW);
}
 else if(sensorvalueR>2000 && sensorvalueL<2000)
{
    digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,LOW);
}
}
