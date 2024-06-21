int led = 33;
int button= 32;
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your mainode here, to run repeatedly:
if (digitalRead(button) > 0)
{
  digitalWrite(led,HIGH);


}
else{
  digitalWrite(led,LOW);
}
}
