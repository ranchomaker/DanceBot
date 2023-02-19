// DANCE CODE for Spider by Karl Wendt 1/15/13  
// Define the pin outs  
int Red_Eye_Left= 8; // LED connected to pin 12  
int Red_Eye_Right= 4; // LED connected to pin 4  
int Green_Eye_Left= 5; // LED connected to pin 8  
int Green_Eye_Right= 3; // LED connected to pin 3  
int Blue_Eye_Left= 7; // LED connected to pin 7  
int Blue_Eye_Right= 2; // LED connected to pin 2  
int Left_Reverse = 6; // Right motor control 1 connected to pin 6  
int Left_Forward = 9; // Right motor control 2 connected to pin 9  
int Right_Forward = 10; // Left motor control 1 connected to pin 10  
int Right_Reverse = 11; // Left motor control 2 connected to pin 11 
// Set the mode of the pin (output or input)  
void setup() {  
    pinMode(Red_Eye_Left, OUTPUT); //sets the digital pin as output  
    pinMode(Red_Eye_Right, OUTPUT); //sets the digital pin as output  
    pinMode(Green_Eye_Left, OUTPUT); //sets the digital pin as output  
    pinMode(Green_Eye_Right, OUTPUT); //sets the digital pin as output  
    pinMode(Blue_Eye_Left, OUTPUT); //sets the digital pin as output  
    pinMode(Blue_Eye_Right, OUTPUT); //sets the digital pin as output  
    pinMode(Left_Forward, OUTPUT); // sets L1 the digital pin as output  
    pinMode(Left_Reverse, OUTPUT); // sets L2 the digital pin as output  
    pinMode(Right_Forward, OUTPUT); // sets L3 the digital pin as output  
    pinMode(Right_Reverse, OUTPUT); // sets L4 the digital pin as output  
}  
// Create your code loop  
void loop() {  
     digitalWrite(Red_Eye_Left, HIGH); //turns on left eye red LED  
    digitalWrite(Red_Eye_Right, HIGH); //turns on right eye red LED  
    delay(500); //run for half a second  
    digitalWrite(Red_Eye_Left, LOW); //turns off left eye red LED  
    digitalWrite(Red_Eye_Right, LOW); //turns off right eye red LED  
    digitalWrite(Green_Eye_Left, HIGH); //turns on left eye green LED  
    delay(500); //run for half a second  
    digitalWrite(Green_Eye_Left, LOW); //turns off left eye green LED  
    digitalWrite(Blue_Eye_Left, HIGH); //turns on left eye blue LED  
    delay(500); //run for half a second  
    digitalWrite(Blue_Eye_Left, LOW); //turns on left eye blue LED  
    delay(500); //run for half a second  
    digitalWrite(Green_Eye_Right, HIGH); //turns on right eye green LED  
    delay(500); //run for half a second  
    digitalWrite(Green_Eye_Right, LOW); //turns off right eye green LED  
    digitalWrite(Blue_Eye_Right, HIGH); //turns on right eye blue LED  
    delay(500); //run for half a second  
    digitalWrite(Blue_Eye_Right, LOW); //turns off right eye blue LED  
    delay(500); //run for half a second  
    //Make new colors by combining LED lights  
    digitalWrite(Blue_Eye_Left, HIGH); //turns on left eye blue LED  
    digitalWrite(Blue_Eye_Right, HIGH); //turns on right eye blue LED  
    digitalWrite(Red_Eye_Left, HIGH); //turns on left eye red LED  
    digitalWrite(Red_Eye_Right, HIGH); //turns on right eye red LED  
    delay(1000); //run for a quarter second  
    digitalWrite(Blue_Eye_Left, LOW); //turns on left eye blue LED  
    digitalWrite(Blue_Eye_Right, LOW); //turns on right eye blue LED  
    digitalWrite(Green_Eye_Left, HIGH); //turns on left eye green LED  
    digitalWrite(Green_Eye_Right, HIGH); //turns on right eye green LED  
    digitalWrite(Red_Eye_Left, HIGH); //turns on left eye red LED  
    digitalWrite(Red_Eye_Right, LOW); //turns on right eye red LED  
    delay(1000); //run for a quarter second
    //Turn on the motors and make Spider move  
    analogWrite(Left_Reverse, 90); //run left motor backwards at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Left_Reverse, 0); //stop left motor  
    delay(200); //run for 2 seconds  
    analogWrite(Right_Reverse, 90); //run right motor backwards at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Right_Reverse, 0); //stop right motor  
    analogWrite(Left_Forward, 90); //run left motor forward at PWM speed 90  
    delay(500); //wait for half a second  
    analogWrite(Left_Forward, 0); //stop left motor  
    analogWrite(Right_Forward, 90); //run right motor forward at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Right_Forward, 0); //stop right motor  
    analogWrite(Left_Reverse, 90); //run left motor backwards at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Left_Reverse, 0); //stop left motor  
    delay(200); //run for 2 seconds  
    analogWrite(Right_Reverse, 90); //run right motor backwards at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Right_Reverse, 0); //stop right motor  
    analogWrite(Left_Forward, 90); //run left motor forward at PWM speed 90  
    delay(500); //wait for half a second  
    analogWrite(Left_Forward, 0); //stop left motor  
    analogWrite(Right_Forward, 90); //run right motor forward at PWM speed 90  
    delay(500); //run for half a second  
    analogWrite(Right_Forward, 0); //stop right motor  
}
