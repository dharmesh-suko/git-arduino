int buzzerpin= 4;
int buzzerpin2= 5;

void setup(){
  pinMode(buzzerpin,OUTPUT);
  pinMode(buzzerpin2,OUTPUT);

}

void loop(){
  digitalWrite(buzzerpin,HIGH);
  delay(1000);

  digitalWrite(buzzerpin,LOW);
  delay(500);
  digitalWrite(buzzerpin2,HIGH);

  delay(1000);
  digitalWrite(buzzerpin2,LOW);
  delay(500);

  
}