// C++ code
//

int palpite;

void desenhaCabecalho()
{
  Serial.println("-------------------------------");
  Serial.println("--- Programa: JOGO DE DADOS ---");
  Serial.println("-------------------------------");
  Serial.println();  
  Serial.println();
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 500)
{
  Serial.println();
  for( int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(500);  
  }
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar pegar o mesmo valor
}

void loop()
{
  desenhaCabecalho();

  Serial.println("Digite um palpite entre 1 e 6:");
  while( !Serial.available());
  palpite = Serial.parseInt();

  //jogar um dado - sorteia um numero randomico
  int numeroSorteado = random(1, 7);
  
  Serial.println("Jogando o dado...");

  desenhaPontinhos();

  //exibir palpite do usuario e numero sorteado
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do Dado: " + String(numeroSorteado));
  if( palpite == numeroSorteado )
  {
    Serial.println("Parabens! Voce acertou!");
    Serial.println();
  } else {
    Serial.println("Que pena! Tente novamente.");
    Serial.println("Reiniciando o sistema...");
    Serial.println();
  }

  delay(2000);
}