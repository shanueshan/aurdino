int alaram = 16;
void setup() {
  // put your setup code here, to run once:
  pinMode(16,OUTPUT);
  pinMode(14,INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
int sensorvalue  = analogRead(14);
Serial.println(sensorvalue);
if(sensorvalue<2000)
{
  digitalWrite(alaram,HIGH);
  }
else if(sensorvalue>2000)
{
  digitalWrite(alaram,LOW);
  }
}
