// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  Serial.println("***SACOLAO DO ZEH***");
  Serial.println();
  //vetor tamanho 6: vai de 0 ate 5
  String frutas[6];//cria um vetor tamanho 6(preenchendo as posicoes)
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  
  
  for(int i = 0; i <=5; i++){
  Serial.println("Informe a "+ String(i + 1) +"a fruta: ");
  while( !Serial.available());
  String frutaDigitada = Serial.readString();
    
  //poe a fruta na sacola/ cadastra a fruta no array
  frutas[i] = frutaDigitada;
  
  }//fim do for
  
  
  
  // Desafio
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a fruta: " + frutas[i]);
  }
  
 
}//fim do setup

void loop()
{
  
} 