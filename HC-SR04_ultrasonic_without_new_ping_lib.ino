 int trigpin = 11;
 int echopin = 12;
 long duration , cm , inches;
  
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin , OUTPUT);
  pinMode(echopin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigpin , LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin , HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin , LOW);
  pinMode(echopin , INPUT);
  duration = pulseIn(echopin , HIGH);
  cm = (duration/2) / 29.1;
  inches = (duration / 2) / 74;
  Serial.print(inches);
  Serial.print("in,  ");
  Serial.print(cm);
  Serial.print("cm,  ");
  Serial.println();
  delay(250);

}
