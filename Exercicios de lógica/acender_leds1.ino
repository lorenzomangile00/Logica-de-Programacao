/*

Criar um protótipo com 3 leds: verde, vermelho e amarelo. 
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar, 
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair 

Você não pode esquecer dos resistores e de configurar cadas porta de lede com a função
pinMode(pino, modo) lá dentro da função setup()

Utilizar Do While, Switch e Serial para o menu e comunicação com o usuário
*/

int LED = 0;
int ledVerde = 13;//0
int ledVermelho = 11;
int ledAmarelo = 9;

void setup()
{

  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);

  pinMode(ledVermelho, OUTPUT);

  pinMode(ledAmarelo, OUTPUT);
}

void loop()
{
  do{
    Serial.println("-------------------------------");
    Serial.println("Bem vindo ao menu!");
    Serial.println("-------------------------------");
    Serial.println();
    Serial.println("Digite um numero entre 0 ao 8: ");
    Serial.println("1 - Ligar led Verde");
    Serial.println("2 - Desligar led Verde");
    Serial.println("3 - Ligar led Vermelho");
    Serial.println("4 - Desligar led Vermelho");
    Serial.println("5 - Ligar led Amarelo");
    Serial.println("6 - Ligar led Amarelo");
    Serial.println("7 - Ligar todos os leds");
    Serial.println("8 - Desligar todos os leds");
    Serial.println("0 - Sair do menu");
    Serial.println();
    while(!Serial.available());
    int ledDigitado = Serial.parseInt();


    switch(ledDigitado) {
      case 1:
      digitalWrite(ledVerde, HIGH);
      Serial.println("Led Verde foi aceso");
      break;

      case 2:
      digitalWrite(ledVerde, LOW);
      Serial.println("Led Verde foi apagado");
      break;

      case 3:
      digitalWrite(ledVermelho, HIGH);
      Serial.println("Led Vermelho foi aceso");
      break;

      case 4:
      digitalWrite(ledVermelho, LOW);
      Serial.println("Led Vermelho foi apagado");
      break;  

      case 5:
      digitalWrite(ledAmarelo, HIGH);
      Serial.println("Led Amarelo foi aceso");
      break; 

      case 6:
      digitalWrite(ledAmarelo, LOW);
      Serial.println("Led Amarelo foi apagado");
      break;

      case 7:
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      Serial.println("Todos os leds foram acesos");
      break;

      case 8:
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      Serial.println("Todos os leds foram apagados");
      break;

      case 0:
      Serial.println("Voce saiu do menu");
      LED++;
      break;

      default :
      Serial.println("Nao temos a opcao digitada");

    } 
  } while ( LED == 0 );

  delay(5000);
}