int motor1 = 25;
int motor2 = 33;
void setup() {
   // put your setup code here, to run once:
   pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(39,INPUT);
pinMode(27,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedl to get analog chnge the digitalread into analogread 
int sensorvalue = analogRead(39);
int sensorvalue2 = analogRead(27);
Serial.println(sensorvalue);
delay(1);


  if(sensorvalue>2000)

{
  
digitalWrite(motor1,LOW);
digitalWrite(motor2,LOW);
Serial.print("object decteted");
}
 else if(sensorvalue<2000)
 {
   digitalWrite(motor1,HIGH);
digitalWrite(motor2,HIGH);
Serial.print("object NOT decteted");
 }
  if(sensorvalue2>2000)
{
  
digitalWrite(motor1,LOW);
digitalWrite(motor2,LOW);
Serial.print("object decteted");
}
 else if(sensorvalue2<2000)
 {
   digitalWrite(motor1,HIGH);
digitalWrite(motor2,HIGH);
Serial.print("object NOT decteted");
 }
}

