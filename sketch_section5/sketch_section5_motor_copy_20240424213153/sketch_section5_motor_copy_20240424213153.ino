
int motor1a = 25;
int motor1b = 26;

void setup() {
  // put your setup code here, to run once:
pinMode(25,OUTPUT);
pinMode(26,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(25,HIGH);
digitalWrite(26,LOW);
delay(5000);
digitalWrite(25,LOW);
digitalWrite(26,HIGH);
delay(5000);

}
