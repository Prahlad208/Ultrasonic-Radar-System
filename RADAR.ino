#include <Servo.h>

Servo radarServo;

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

long duration;
int distance;

void setup() {
  Serial.begin(9600);
  radarServo.attach(servoPin);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {

  for(int angle = 15; angle <= 165; angle++) {
    radarServo.write(angle);
    delay(30);
    distance = calculateDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.print(distance);
    Serial.println(".");
  }

  for(int angle = 165; angle > 15; angle--) {
    radarServo.write(angle);
    delay(30);
    distance = calculateDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.print(distance);
    Serial.println(".");
  }
}

int calculateDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}
