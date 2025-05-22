// C++ code
//
//vetor tamanho 6: vai de 0 ate 5
String frutas[6];//cria um vetor tamanho 6(preenchendo as posicoes)
float precosFrutas[6];
void setup()
{
  Serial.begin(9600);

  Serial.println("***SACOLAO DO ZEH***");
  Serial.println();


  Serial.println("Oh ZEH, bora cadastrar as frutas!");

  Serial.println();
  //pede as frutas para o usuario
  for(int i = 0; i <=5; i++){
    Serial.println("Informe a "+ String(i + 1) +"a fruta: ");
    while( !Serial.available());
    String frutaDigitada = Serial.readString();

    //pega o preco da fruta
    Serial.println("Qual o preco de " + frutaDigitada + "?");
    while( !Serial.available());
    float precoDigitado = Serial.parseFloat();

    //poe a fruta na sacola/ cadastra a fruta no array
    frutas[i] = frutaDigitada;
    precosFrutas[i] = precoDigitado;

  }//fim do for


  Serial.println("Exibindo os valores cadastrados: ");
  Serial.println();

  for(int i = 0; i <= 5; i++){
    Serial.println(String(i + 1) + "a fruta: " + frutas[i]);
    Serial.println("Preco da fruta: " + String(precosFrutas[i]));
  }


}//fim do setup

void loop()
{

} 