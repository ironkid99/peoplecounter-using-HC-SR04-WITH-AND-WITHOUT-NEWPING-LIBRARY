#include<NewPing.h>

#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200
Newping sonar(TRIGGER_PIN , ECHO_PIN , MAX_DISTANCE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
  unsigned int uS = sonar.ping_cm();
  Serial.print(uS);
  Serial.println("cm");
}
