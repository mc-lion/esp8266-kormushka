#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos_min = 10;    // variable to store the servo position
int pos_max = 170;    // variable to store the servo position
int repeat = 1;

void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  myservo.write(pos_min);
  for (int i = 1; i <= repeat; i += 1) {
    myservo.write(150);
    delay(600);
    myservo.write(20);
    delay(2000);
  }
  myservo.detach();
}

void rotate(int pos1,int pos2){
  if(pos1<pos2){
    for (int pos = pos1; pos <= pos2; pos += 1) {
      myservo.write(pos);
      delay(1);
    }
  } else {
    for (int pos = pos1; pos >= pos2; pos -= 1) {
      myservo.write(pos);
      delay(1);
    }    
  }
}

void loop() {
/*  for (pos = 0; pos <= 170; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 170; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
*/


}
