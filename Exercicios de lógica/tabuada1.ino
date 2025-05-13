int tabuadaEscolhida;
int tabuada;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite uma tabuada de sua escolha");
  while( !Serial.available()){};
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  tabuada = tabuadaEscolhida * contador;
    
  Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(tabuada));
    
  delay(1200);
  }
  
}