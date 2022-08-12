
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>

const char* ssid "HUAWEI-E5330-FEFB"; 
const char* password "ynd6de5y";
#define host "controle-de-lampada-default-rtdb.firebaseio.com"   
#define chaveSecreta "BDwayaGmzSwjlOLLWVj4YFXym6NJZgSYHT2XF8KS" /*CHAVE SECRETA DO FIREBASE*/
#define lampada 0

void setup() {
  Serial.begin(115200);
  pinMode(lampada,OUTPUT);
  WiFi.begin(ssid,password);
  Serial.print("Conectando");
  
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);}

  Serial.println();
  Serial.print("CONECTADO: ");
  Serial.println(WiFi.localIP());


  Firebase.begin(host,chaveSecreta);

  if(Firebase.failed()){
    Serial.println(Firebase.error());}
  else{
    Serial.println("Conectado ao Firebase com SUCESSO");}
}


void loop() {
  // put your main code here, to run repeatedly:
Firebase.setInt("Teste", random());
}
