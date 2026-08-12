const int speedpin = 10;
const int inputpin1 = 8;
const int inputpin2 = 9;

void setup(){
  pinMode(speedpin,OUTPUT);
  pinMode(inputpin1,OUTPUT);
  pinMode(inputpin2,OUTPUT);

  digitalWrite(speedpin,HIGH);
}

void loop(){
  digitalWrite(inputpin1,HIGH);
  digitalWrite(inputpin2,LOW);
  delay(3000);
  digitalWrite(inputpin1,LOW);
  delay(3000);

  digitalWrite(inputpin1,LOW);
  digitalWrite(inputpin2,HIGH);
  delay(3000);
  digitalWrite(inputpin1,LOW);
  delay(3000);


}
