int motor1 = 26;
int motor2 = 32;
int horn = 4;
int indicator = 14;
void setup() {
   // put your setup code here, to run once:
   pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(39,INPUT);
pinMode(indicator,OUTPUT);


pinMode(horn,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedl to get analog chnge the digitalread into analogread 
int sensorvalue = analogRead(39);
int sensorvalue2 = analogRead(27);
Serial.println(sensorvalue);
delay(1);
{
if(sensorvalue>2000)
{
digitalWrite(motor1,LOW);
digitalWrite(motor2,LOW);
delay(1000);
digitalWrite(horn,HIGH);
delay(1000);
digitalWrite(horn,LOW);
delay(885);
digitalWrite(motor1,HIGH);
digitalWrite(motor2,LOW);
digitalWrite(horn,HIGH);
delay(885);



Serial.print("object decteted");
}
 else if(sensorvalue<2000)
 {
   digitalWrite(motor1,HIGH);
digitalWrite(motor2,HIGH);
digitalWrite(horn,LOW);
Serial.print("object NOT decteted");
 }
   }
  } 