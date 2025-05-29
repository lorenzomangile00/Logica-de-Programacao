// Faça um programa que receba um número e exiba o seu dobro.


//Variaveis
int numero = 0;
int dobroNumero = 0;
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX03          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //Pedir numero para o usuario
  Serial.println("Digite um numero");
  while( !Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  numero = Serial.parseInt ();
  
  //Calcular o dobro desse numero
  dobroNumero = numero * 2;
  
  //Mostrar o dobro do numero na tela
  Serial.println("O dobro do numero e: " + String(dobroNumero) );
  
}