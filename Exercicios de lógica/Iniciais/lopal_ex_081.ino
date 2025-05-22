/* 
Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/

//Variaveis
String nome = "";
String cargo = "";
float salario = 0;
float salarioAumentado = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o nome do funcionario:");
  while ( !Serial.available());//aguarde o usuario digitar
  nome = Serial.readString();

  Serial.println("Digite o cargo do funcionario: ");
  while ( !Serial.available());
  cargo = Serial.readString();

  Serial.println("Digite o salario do funcionario:");
  while ( !Serial.available());
  salario = Serial.parseFloat();
  
  Serial.println("               ");//pular uma linha
  
  if (salario < 1000){
  Serial.println ("Seu salario sera aumentado");
  salarioAumentado = salario * 1.10;
  Serial.println("Seu nome eh: " + String(nome));
  Serial.println("Seu cargo eh: " + String(cargo));
  Serial.println("Seu salario aumentado eh: R$ " + String(salarioAumentado));
  } else {
  Serial.println("Seu nome eh: " + String(nome));
  Serial.println("Seu cargo eh: " + String(cargo));
  Serial.println("Seu salario eh: R$ " + String(salario));
  }
}