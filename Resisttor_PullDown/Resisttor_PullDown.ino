#define led 4
#define btn 3

void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btn)==HIGH){
    digitalWrite(led,HIGH);}
    else{
      digitalWrite(led,LOW);}
}
