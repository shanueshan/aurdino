void setup() {

  Serial.begin(9600);
  pinMode(39,INPUT);

  pinMode(25,OUTPUT);

}

void loop() {

int sensorvalue1=analogRead(39);

Serial.println(sensorvalue1);

if(sensorvalue1<2000)
{
  digitalWrite(25,HIGH);
  Serial.print("object detected");
}
else if (sensorvalue1>2000 )
{
  
  digitalWrite(25,LOW);
    Serial.print("object not detected");
}

}