#include <Servo.h>
int palpite;
int acertos = 0;
int ledVermelho = 7;
int ledVerde = 10;
int ledsAzuis[] = {4, 3, 2};
Servo servoPorta;


void desenhaCabecalho() {
  Serial.println();
  Serial.println("-------------------------------");
  Serial.println("--- Programa: JOGO DE DADOS ---");
  Serial.println("-------------------------------");
  Serial.println();  
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 500) {
  Serial.println();
  for (int i = 1; i <= qtdPontos; i++) {
    Serial.print(".");
    delay(tempo);  
  }
  Serial.println();
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0)); 

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  for (int i = 0; i < 4; i++) {
    pinMode(ledsAzuis[i], OUTPUT);
    digitalWrite(ledsAzuis[i], LOW);
    
  }


}

void loop() {
  desenhaCabecalho();

  Serial.println("Digite um palpite entre 1 e 6:");
  while (!Serial.available());
  palpite = Serial.parseInt();
  Serial.read();

  Serial.println("Jogando o dado...");
  desenhaPontinhos();

  int numeroSorteado = random(1, 7);

  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do Dado: " + String(numeroSorteado));

  if (palpite == numeroSorteado) {
    Serial.println("Parabens! Voce acertou!");
    acertos++;
    Serial.println("Voce tem " + String(acertos) + " acertos.");

    digitalWrite(ledVerde, HIGH);
    delay(1500);
    digitalWrite(ledVerde, LOW);

    if (acertos <= 3) {
      digitalWrite(ledsAzuis[acertos - 1], HIGH);
    } else if (acertos == 3) {
      Serial.println("Todas as joias foram acesas!");
      Serial.println("A porta se abre!");
      servoPorta.write(180);
    }
  } else {
    Serial.println("Que pena! Tente novamente.");
    digitalWrite(ledVermelho, HIGH);
    delay(1500);
    digitalWrite(ledVermelho, LOW);
  }

  Serial.println();
  delay(2000);
}
