float numero1 = 0;
float numero2 = 0;
float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao = 0;
int contador = 0;

void setup()
{
  Serial.begin(9600);

do{
  Serial.println("Bem vindo(a) a calculadora !)");
  Serial.println("Escolha uma das opcoes/operacoes:");
  Serial.println("1 - Somar");
  Serial.println("2 - Subtrair");
  Serial.println("3 - Multiplicar");
  Serial.println("4 - Dividir");

  while( !Serial.available()){} //Espera o usuario digitar

  escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usuario digitou na variavel

  Serial.println("Agora, para realizar a operacao, digite o primeiro numero:");
  while( !Serial.available()){} //Espera o usuario digitar
  numero1 = Serial.parseFloat();

  Serial.println("Agora, para realizar a operacao, digite o segundo numero:");
  while( !Serial.available()){} //Espera o usuario digitar
  numero2 = Serial.parseFloat();


  
  switch(escolhaDaOperacao) {
    case 1:
    soma = numero1 + numero2;
    Serial.println("WOW! O resultado foi: " + String(soma));
      break;
    
    case 2:
    subtracao = numero1 - numero2;
    Serial.println("WOW! O resultado foi: " + String(subtracao));
      break;
    
    case 3:
    multiplicacao = numero1 * numero2;
    Serial.println("WOW! O resultado foi: " + String(multiplicacao));
      break;
    
    case 4:
    divisao = numero1 / numero2;
    Serial.println("WOW! O resultado foi: " + String(divisao));
      break;
    
    default:
      Serial.println("Opcao invalida");
    
  }

  Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
  while( !Serial.available()){}//Espera o usuario digitar

  if(Serial.readString() == "s"){
    contador++;
  }
  else{
    contador = 0;

    Serial.println("Ate breve, obrigado por usar a calculadora inteligente!");
    Serial.println("Caso queira voltar, reinicie o sistema.");
  }

}  
  while(contador != 0);

}

void loop()
{
  //sem codigo
}