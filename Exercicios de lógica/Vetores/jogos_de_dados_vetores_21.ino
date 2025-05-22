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
  
  //perguntar ao usuario quantas vezes ele quer jogar
  //criar vetores baseado na quantidade de rodadas
  //jogar apenas essa quantidade(laco de repeticao)
  
  Serial.println("Quantas vezes voce quer jogar?");
  while( !Serial.available());
  int qtdRodadas = Serial.parseInt();
  
  //criar os arrays de estatisticas para o relatorio final
  //os Vetores do tamanho da quantidade de rodadas
  int vetPalpites[qtdRodadas];//tamanho do vetor?
  int vetResultados[qtdRodadas];
  
  for( int r = 1; r < qtdRodadas; r++)
  {//aqui dentro o jogo todo
   Serial.println("Digite um palpite entre 1 e 6:");
  while( !Serial.available());
  palpite = Serial.parseInt();

  //jogar um dado - sorteia um numero randomico
  int numeroSorteado = random(1, 7);
  
  vetPalpites[r] = palpite;
  vetResultados[r] = numeroSorteado;
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
    Serial.println();
  }

  
  }//fim do jogo
  
  //ao finalizar, mostrar estatisticas do jogo 
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i = 1; i < qtdRodadas; i++)
  { 
    Serial.println("Rodada " + String(i) + ":");
    Serial.println("  Palpite: " + String(vetPalpites[i]));
    Serial.println("  Dado: " + String(vetResultados[i]));
    Serial.println("  Resultado: " + String(vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou!"));
    Serial.println("--------------------------------");
    Serial.println();
  }//fim do for que exibe o relatorio final(estatisticas)
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA");
  desenhaPontinhos(3, 500);
  delay(3000);
  
}