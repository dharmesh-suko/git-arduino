const int pin1 = 8;
const int pin2 = 9;
const int pin3 = 10;
const int pin4 = 11;

void setup(){
  pinMode(pin1,OUTPUT);
 pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
   pinMode(pin4,OUTPUT);

}

void loop(){
 digitalWrite(pin1,HIGH);
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,LOW);
  delay(25);

   digitalWrite(pin1,LOW);
 digitalWrite(pin2,HIGH);
 digitalWrite(pin3,LOW;
 digitalWrite(pin4,LOW);
  delay(25);

   digitalWrite(pin1,LOW);
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,HIGH);
 digitalWrite(pin4,LOW;
  delay(25);

   digitalWrite(pin1,LOW);
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,LOW);
 digitalWrite(pin4,HIGH);
  delay(25);



}