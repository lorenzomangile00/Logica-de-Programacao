//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX02          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
    
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha  
  
  
  
  //entrada
  
  Serial.println("Digite o seu ano de nascimento");//pergunta o ano de nascimento do usuario
  while( !Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  anoNascimento = Serial.parseInt();
  
    Serial.println("Digite o seu ano atual");//pergunta o ano atual do usuario
  while( !Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  anoAtual = Serial.parseInt();
  
  //processamento
  idade = anoAtual - anoNascimento;
  idadeSemanas = idade * 12 * 4;
  
  //saida
  Serial.println("sua idade: " + String(idade) );
  Serial.println("Sua idade em semanas: " + String(idadeSemanas));
  
}