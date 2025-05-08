//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

//Variaveis
float centimetros, polegadas;

void setup() {
  Serial.begin(9600);
}
 
void loop() 
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX05          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //entrada
  Serial.println("Digite a medida em centimetros:");
  while (Serial.available() == 0);
  centimetros = Serial.parseFloat();

  //processamento
  polegadas = centimetros / 2.54;

  //saida
  Serial.print("Medida em polegadas: ");
  Serial.println(polegadas, 2); // 2 casas decimais
}