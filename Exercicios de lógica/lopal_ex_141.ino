// C++ code
/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/

//Variaveis
int numero1 = 0;
int numero2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o numero1");
  while ( !Serial.available());
  numero1 = Serial.parseInt();
  
  Serial.println("Digite o numero2");
  while ( !Serial.available());
  numero2 = Serial.parseInt();
  
  //processamento
  if ( numero1 > numero2 ) {
  Serial.println("O numero1 eh maior");
  } else if ( numero2 > numero1 ) {
  Serial.println("O numero2 eh maior");
  } else {
  Serial.println("Os numeros sao iguais");
  }
}