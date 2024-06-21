int led =4;
int led2 =33;
int led3 =27;
void setup()

{
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);  

}
void loop(){
  digitalWrite(led,HIGH);
delay(5000);
digitalWrite(led,LOW);
delay(5000);
digitalWrite(led2,HIGH);
delay(5000);
digitalWrite(led2,LOW);
delay(5000);
digitalWrite(led3,HIGH);
delay(5000);
digitalWrite(led3,LOW);
delay(5000);


}