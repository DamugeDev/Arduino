//HIGH & LOW
#define led 3
#define maximo 16
#define minimo 0
#define tmp 50
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i= minimo; i<maximo;i++){
   
    analogWrite(led,1);
    delay(tmp);}

  for(int i=maximo;i>minimo;i--){
    analogWrite(led,i);
    delay(tmp);}

}
