#define azul 12 
# define vermelho 10
int tempo = 250;
void setup() {
  pinMode(azul,OUTPUT); pinMode(vermelho,OUTPUT);

}

void loop() {
  digitalWrite(azul,HIGH); digitalWrite(vermelho,LOW);
  delay(tempo);
  digitalWrite(vermelho,HIGH); digitalWrite(azul,LOW);
  delay(tempo);
   digitalWrite(vermelho,LOW); digitalWrite(azul,LOW);
  delay(tempo);
   digitalWrite(vermelho,HIGH); digitalWrite(azul,HIGH);
  delay(tempo);
   digitalWrite(vermelho,LOW); digitalWrite(azul,LOW);
  delay(tempo);
  digitalWrite(vermelho,HIGH); digitalWrite(azul,HIGH);
  delay(tempo);
   digitalWrite(vermelho,LOW); digitalWrite(azul,LOW);
  delay(tempo);
 
  

}
