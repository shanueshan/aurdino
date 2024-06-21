int redled = 27;
int yellowled = 15;
int greenled = 33;
int buzzer = 4;

;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redled,HIGH);
delay(3000);
digitalWrite(redled,LOW);
digitalWrite(greenled,HIGH);
delay(3000);
digitalWrite(greenled,LOW);
digitalWrite(yellowled,HIGH);
delay(1000);
digitalWrite(yellowled,LOW);
 digitalWrite(buzzer,HIGH);
delay(1000);
digitalWrite(buzzer,LOW);
delay(1000);

}
