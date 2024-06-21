/*
 * Created by ArduinoGetStarted, https://arduinogetstarted.com
 *
 * Arduino - Ultrasonic Sensor HC-SR04
 *
 * Wiring: Ultrasonic Sensor -> Arduino:
 * - VCC  -> 5VDC
 * - TRIG -> Pin 9
 * - ECHO -> Pin 8
 * - GND  -> GND
 *
 * Tutorial is available here: https://arduinogetstarted.com/tutorials/arduino-ultrasonic-sensor
 */

int trigPin = 12;    // TRIG pin
int echoPin = 13;    // ECHO pin

float duration_us, distance_cm;

void setup() {
  // begin serial port
  Serial.begin (9600);

  // configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);
  // configure the echo pin to input mode
  pinMode(echoPin, INPUT);
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);


  // measure duration of pulse from ECHO pin
  duration_us =pulseIn(echoPin, HIGH); 

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500);
if(distance_cm<50){
  digitalWrite(25,HIGH);
    digitalWrite(26,LOW);
     digitalWrite(19,LOW);
    digitalWrite(15,HIGH);
 
} 
 
else{
 digitalWrite(25,LOW);
    digitalWrite(26,LOW);
     digitalWrite(19,LOW);
    digitalWrite(15,LOW); 
}
}



