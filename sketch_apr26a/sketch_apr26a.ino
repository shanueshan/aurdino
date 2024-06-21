int motor1f = 26;
int motor1b = 25;
int motor2f = 15;
int motor2b = 19;
int buzzer =  4;

void setup() {
  // put your setup code


pinMode(motor1f,OUTPUT);
pinMode(motor1b,OUTPUT);
pinMode(motor2f,OUTPUT);
pinMode(motor2b,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(motor1f,HIGH);
digitalWrite(motor2f,HIGH);
digitalWrite(buzzer,LOW);
delay(14000);
digitalWrite(motor1f,HIGH);
digitalWrite(motor2f,LOW);
digitalWrite(buzzer,LOW);
delay(855);
digitalWrite(buzzer,LOW);
digitalWrite(motor1f,HIGH);
digitalWrite(motor2f,HIGH);
delay(4000);
digitalWrite(motor1f,HIGH);
digitalWrite(motor2f,LOW);
digitalWrite(buzzer,LOW);
delay(855);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
digitalWrite(motor1f,LOW);
digitalWrite(motor1b,LOW);
digitalWrite(motor2f,LOW);
digitalWrite(motor2b,LOW);

delay(8000);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
delay(500);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
delay(3000);
digitalWrite(motor1b,HIGH);
digitalWrite(motor2b,LOW);
delay(855);
digitalWrite(motor1b,HIGH);
digitalWrite(motor2b,HIGH);
delay(4000);
digitalWrite(motor1b,HIGH);
digitalWrite(motor2b,LOW);
digitalWrite(buzzer,LOW);
delay(855);
digitalWrite(buzzer,LOW);
digitalWrite(motor1b,HIGH);
digitalWrite(motor2b,HIGH);
delay(14000);
digitalWrite(motor1f,HIGH);
digitalWrite(motor2f,LOW);
digitalWrite(buzzer,LOW);
delay(855);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
digitalWrite(motor1f,LOW);
digitalWrite(motor1b,LOW);
digitalWrite(motor2f,LOW);
digitalWrite(motor2b,LOW);
delay(8000);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
delay(500);
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
delay(5000);
   
     }