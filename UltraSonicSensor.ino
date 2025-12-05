int trigPin=9;
int echoPin=10;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration=pulseIn(echoPin, HIGH);
  float distance=duration*0.0343/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("CM");
  delay(500);
  
}