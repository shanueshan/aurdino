const int trigpin=12;
const int echopin=13;

long duration;
int distance;

void setup() 
{
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600); 
}

void loop()
{
digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
Serial.print("distance:");
Serial.println(distance);

}