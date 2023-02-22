
// Define the pin modes
const int trigPin = 2;
const int echoPin = 3;
const int l1 = 5;
const int l2 = 6;
const int r1 = 9;
const int r2 = 10;
const int maxDistance = 50; // Maximum distance (in cm) that the sensor can detect
const long stopDistance = 20.0; // Distance in cm at which the vehicle should stop

// Set the mode of the pin (output or input)
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(l1, OUTPUT); // Motor 1 forward
  pinMode(l2, OUTPUT); // Motor 1 backward
  pinMode(r1, OUTPUT); // Motor 2 forward
  pinMode(r2, OUTPUT); // Motor 2 backward
  delay(1000);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2.0) / 29.1;
  Serial.print(distance);
  Serial.println();
  delay(15);
  if (distance <= stopDistance) {
    stopVehicle();
    delay(1000);
    if (random(0,2) == 1){  // Turn left or right randomely
      turnRight();
    }
    else{
      turnLeft();
    }
    
    delay(random(100, 250));
    stopVehicle();
    delay(500);
    // moveForward();
    // delay(1000);
  }
  else {
    Serial.print("moving forward");
    Serial.println();
    moveForward();
  }
}

void moveForward() {
  // digitalWrite(l1, HIGH);
  //digitalWrite(l2, LOW);
  //digitalWrite(r1, HIGH);
  //digitalWrite(r2, LOW);
  // the left wheel and right wheel are set differently because the motor seem to output different amounts of power.
  // These ratios might need to be tuned on a per car basis? 
  // This is currently set to go at a pretty slow speed. Set it too fast and the car will crash into a wall before it can stop
  // from pure momentum. 
  analogWrite(l1, 105);  
  analogWrite(l2, 0);
  analogWrite(r1, 90);
  analogWrite(r2, 0);
}

void stopVehicle() {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
}

void turnRight() {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
}

void turnLeft() {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
}
