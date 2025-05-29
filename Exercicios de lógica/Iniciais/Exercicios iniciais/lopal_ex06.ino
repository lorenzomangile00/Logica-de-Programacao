//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variaveis
float polegadas, centimetros;

void setup() {
  Serial.begin(9600);
}
  
void loop() 
{
 
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX06          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //entrada 
  Serial.println("Digite a medida em polegadas:");
  while (Serial.available() == 0);
  polegadas = Serial.parseFloat();

  //processamento
  centimetros = polegadas * 2.54;

  //saida
  Serial.print("Medida em centimetros: ");
  Serial.println(centimetros, 2); // 2 casas decimais

}