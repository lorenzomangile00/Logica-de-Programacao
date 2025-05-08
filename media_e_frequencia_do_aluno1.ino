// C++ code

//Variaveis
int nota1 = 0;
int nota2 = 0;
int media = 0;
int frequencia = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a primeira nota");
  while ( !Serial.available());
  nota1 = Serial.parseInt ();
  
  Serial.println("Digite a segunda nota");
  while ( !Serial.available());
  nota2 = Serial.parseInt ();
  
  Serial.println("Digite a frequencia");
  while ( !Serial.available());
  frequencia = Serial.parseInt ();
  
  //processamento
  media = (nota1 + nota2) / 2 ;
  
  //saida
  Serial.println("Sua media eh: " + String(media));
  
  if ( media >= 6 && frequencia >= 75){
  Serial.println("APROVADO");
  } else if ( media < 6 && frequencia >= 75) {
  Serial.println("REPROVADO (Reprovacao por nota)");
  } else if ( media >= 6 && frequencia < 75){
  Serial.println("REPROVADO (Reprovacao por frequencia)");
  } else if ( media == 10){
  Serial.println("Parabens! Nota maxima!");
  } else {
  Serial.println("REPROVADO (Reprovacao por nota e frequencia)");
  }
}