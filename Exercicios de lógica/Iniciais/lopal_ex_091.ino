/*
Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.
*/

//Variaveis
float salario = 0;
float salarioReajustado = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o salario do funcionario: ");
  while ( !Serial.available());
  salario = Serial.parseFloat();
  
  //Processamento
  if (salario < 500){
  Serial.println("Seu salario sera reajustado");
  salarioReajustado = salario * 1.30;
  Serial.println("Seu salario reajustado eh: R$ " + String(salarioReajustado));
  } else {
  Serial.println("O funcionario nao possui direito a aumento");
  
  }
}