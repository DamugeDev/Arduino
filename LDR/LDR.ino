#define ldr A0
#define led 2
#define led2 3
int vldr=0;
void setup() {
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vldr=analogRead(ldr);
  if(vldr<100){
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);}
  else{
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);}
  Serial.println(vldr);
  delay(100);

}
