//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
int idadeMeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0;
  
  
void setup()
{
  Serial.begin(9600);
}



void loop()
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX01          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while( ! Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = 24 * 365 * idade;
  idadeMinutos = idadeHoras * 60;
  
  //saída 
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) );
  Serial.println("Sua idade em horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
  
}