void setup() {

// Define the pin modes
int define trigPin 12
int define echoPin 11
int define maxDistance 50 // Maximum distance (in cm) that the sensor can detect
int define stopDistance 5 // Distance in cm at which the vehicle should stop

// Set the mode of the pin (output or input)
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(4, OUTPUT); // Motor 1 forward
  pinMode(5, OUTPUT); // Motor 1 backward
  pinMode(6, OUTPUT); // Motor 2 forward
  pinMode(7, OUTPUT); // Motor 2 backward
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= maxDistance) {
    moveForward();
  }
  else if (distance <= stopDistance) {
    stopVehicle();
    delay(1000);
    turnRight();
    delay(1000);
    moveForward();
  else {
    moveForward();
  }
}
void moveForward() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
void stopVehicle() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}
void turnRight() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}
void turnLeft() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
