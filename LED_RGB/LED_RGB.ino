#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
#define maximo 3

int btnClicado=0;
int btnliberado=0;
int ciclo=0;

void vermelho(){
  digitalWrite(ledR,HIGH);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,LOW); 
  }
void verde(){
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,HIGH);
  digitalWrite(ledB,LOW); 
  }
void azul(){
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,HIGH); 
  }
void trocaLed(){
  if(ciclo==0){
    vermelho();
    }else if(ciclo==1){
      verde();
    }else if(ciclo==2){
        azul();}
        ciclo++;
        if(ciclo>maximo-1){
          ciclo=0;
     }  
  }

void verificaBtn(){
  if(digitalRead(botao)==HIGH){
    btnClicado=1;
    btnliberado=0;
    }else{
      btnliberado=1;
      }
    if((btnClicado==1)and(btnliberado==1)){
      btnClicado=0; btnliberado=0; trocaLed();
      }
  }
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() {
  verificaBtn();

}
