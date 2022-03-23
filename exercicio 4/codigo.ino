// C++ code
//
const int botao1 = 2;
const int led = 7;

int var1;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
    pinMode(led, OUTPUT);
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	
   if(var1){
     Serial.println("botao 1 apertado");
     digitalWrite(led, HIGH);
     delay(3000);
     digitalWrite(led, LOW);
   }
 }
