#include <Servo.h>

Servo myServo;

const int lightSensorPin = A0;
const int servoPin = 9;

float lightValue = 0;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);

  Serial.println("Start pomiaru widma");
  delay(2000);
}

void loop() {

  for (int angle = 20; angle <= 160; angle += 2) {
   
    myServo.write(angle);
    delay(300);
   
    long sum = 0;
    for (int i = 0; i < 100; i++) {
      sum += analogRead(lightSensorPin);
      delay(5);
    }
   
    lightValue = sum / 10;

    Serial.print("Kat: ");
    Serial.print(angle);
    Serial.print(" Swiatlo: ");
    Serial.println(lightValue);
  }

  Serial.println("Koniec skanowania");
  delay(5000);
}