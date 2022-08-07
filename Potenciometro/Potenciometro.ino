#define pot A5
#define led 3

void setup() {
  // put your setup code here, to run once:
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(led, map(analogRead(pot),0,1023,0,255)); 
}
