int led1 = 25;
int led2 = 26;
int led3 = 15;
int led4 = 19;
int led5 = 32;
int led6 = 33;
                                     
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
delay(1000);
digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
delay(1000);
digitalWrite(led4,LOW);
digitalWrite(led5,HIGH);
delay(1000);
digitalWrite(led5,LOW);
digitalWrite(led6,HIGH);
delay(1000);
digitalWrite(led6,LOW);
delay(1000);
digitalWrite(led6,HIGH);
delay(1000);
digitalWrite(led6,LOW);
digitalWrite(led5,HIGH);
delay(1000);
digitalWrite(led5,LOW);
digitalWrite(led4,HIGH);
delay(1000);
digitalWrite(led4,LOW);
 digitalWrite(led3,HIGH);
delay(1000);
digitalWrite(led3,LOW);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led2,LOW);
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1,LOW);
delay(1000);
}
