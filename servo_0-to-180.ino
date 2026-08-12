#include <servo.h>

servo myservo;

void setup(); {myservo.attach(9); }

void loop(){
  for (int speed = 0; speed <= 180; speed += 1){

    myservo.Write(speed);
    delay(15);

  }

  delay(500);

  for (int speed = 180; speed>= 0; speed -= 1){
    myservo.Write(speed);

    delay(15);
  }
  delay(500);
}
