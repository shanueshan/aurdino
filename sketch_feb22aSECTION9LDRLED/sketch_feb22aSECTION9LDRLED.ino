void setup() {
   // put your setu
  pinMode(25, OUTPUT);
  pinMode(26,OUTPUT);
pinMode(39,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedl to get analog chnge the digitalread into analogread 
int sensorvalue =analogRead(39);
Serial.println(sensorvalue);

if(sensorvalue>2000){
digitalWrite(25,HIGH);
digitalWrite(26,HIGH);
}
else{
if(sensorvalue<3000)  
{
digitalWrite(25,LOW);
digitalWrite(26,LOW);
}
}
 
}
