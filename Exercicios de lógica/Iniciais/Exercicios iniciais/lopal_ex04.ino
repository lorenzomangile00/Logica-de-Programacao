//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura).

//Variaveis
String nome = "";
float altura = 0;
float peso = 0;
float imc = 0;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX04          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //entrada
  Serial.println("Digite seu nome:");
  while ( !Serial.available());
  nome = Serial.readString();
  nome.trim();

  Serial.println("Digite sua altura:");
  while ( !Serial.available());
  altura = Serial.parseFloat();
  
  Serial.println("Digite seu peso:");
  while ( !Serial.available());
  peso = Serial.parseFloat();
  
  //processamento
  imc = peso / (altura * altura);
  
  //saida
  Serial.println("Seu nome eh: " + String(nome));
  Serial.print("Seu imc eh: " + String(imc));
  
  delay (20000);//20 segundos
  
}