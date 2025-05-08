//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variaveis
String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|          LOPAL-EX07          |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
 
  
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
  
  //processamento
  novoSalario = salario * 1.10;
  
  //saida - formatada
  Serial.println();
  Serial.println();
  
  Serial.println("Relatorio: ");
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
  
  Serial.println("Seu nome eh: " + String(nome));
  Serial.println("Seu cargo eh: " + String(cargo));
  Serial.println("Seu novo salario eh: R$ " + String(novoSalario));
  Serial.println();
  
  Serial.println("--------------------------------");
  
  Serial.println("Digite uma letra + <Enter> para continuar ...");//gambi para fazer o programa parar
  while(! Serial.available());
  
  Serial.println();
  Serial.println();
  
  Serial.read();//limpa o cache do \n - o <Enter>
}