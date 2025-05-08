// C++ code
/*
Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO
para média inferior a 5,0.
*/

//Variaveis
float n1, n2, n3, n4, media;//cria as 5 variaveis de uma so vez e inicializa

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a primeira nota");
  while ( !Serial.available());
  n1 = Serial.parseFloat ();
    
  Serial.println("Digite a segunda nota");
  while ( !Serial.available());
  n2 = Serial.parseFloat ();
  
  Serial.println("Digite a terceira nota");
  while ( !Serial.available());
  n3 = Serial.parseFloat ();
  
  Serial.println("Digite a quarta nota");
  while ( !Serial.available());
  n4 = Serial.parseFloat ();
  
  //processamento
  media = (n1 + n2 + n3 + n4) / 4;
    
  //saida
  Serial.println("Sua media eh: " + String(media));
  
  if( media >= 7) {//entre 7 e 10
  Serial.println("APROVADO");
  } else if ( media >= 5 && media < 7){//entre 5 e 7
  Serial.println("RECUPERACAO");
  } else {//entre 0 e 5
  Serial.println("REPROVADO");
  }
  
  delay(10000);
}