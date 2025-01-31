#define TRIG  5  // define Trig pin Ultrasonic
#define ECHO  35 // define Echo pin Ultrasonic

//------------------------------------------------------------------------MicrosecondsToCentimeters Function-----------------------------------------------------------------------------//
long microsecondsToCentimeters(long microseconds)
{
// The speed of sound is 340 m/s or 29 microseconds per centimeter.
// The ping travels out and back, so to find the distance of the
// object we take half of the distance travelled.
return microseconds / 29 / 2;
}

void UltraPin(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}
//------------------------------------------------------------------------Car Detect Wall Function-----------------------------------------------------------------------------//

void forward_to_wall(int distance) {
  while (1) {
    long duration, cm;

    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(5);
    digitalWrite(TRIG, LOW);
    duration = pulseIn(ECHO, HIGH);
    cm = microsecondsToCentimeters(duration);
    
    Serial.println(cm);
    delay(10);
    forward(50);

    if (cm <= distance && cm != 0) {
      stop(50);
      break;
    }
  }
}