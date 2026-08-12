
const int speedpin = 10;
const int inputpin1 = 8;
const int inputpin2 = 9;

void setup(){
  pinMode(speedpin,OUTPUT);
  pinMode(inputpin1,OUTPUT);
  pinMode(inputpin2,OUTPUT);

  digitalWrite(speedpin,HIGH);
  digitalWrite(inputpin2,LOW);
}

void loop(){
  int speedup = 0;
  while (speedup <= 255){
    analogWrite(speedpin,speedup);

    speedup++;
    delay(20);
  }
  delay(3000);

  speedup = 255;
  while (speedup >=0){
    analogWrite(speedpin,speedup);
    speedup--;
    delay(20);

  }
  delay(3000);
}
