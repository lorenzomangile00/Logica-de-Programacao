// C++ code
/* Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/

//Variaveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digitie um numero");
  while ( !Serial.available());
  numero = Serial.parseInt();
  
  if(numero % 2 == 0) {//se for par
  Serial.println("Numero digitado eh par");
  } else {
    Serial.println("Numero digitado eh impar");
  }
}//fim do loop