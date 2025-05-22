//C++ code
//
//cria cada vetor tamanho 4 fazendo parte do mesmo cadastro
String convidados[4];
int idadeConvidados[4];
String emailConvidados[4];

//Funcoes
void desenhaCabecalho(){
  Serial.println("Bem vindo ao seu cadastro,");
  Serial.println("para o churrasco !!!");
  Serial.println("------------------------");
  Serial.println();
  Serial.println();
}

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  desenhaCabecalho();//chama funcao para desenhar cabecalho
  
  for(int i = 0; i < 4; i++)
  {
   Serial.println("Informe o nome para cadastro: ");
   while( !Serial.available());
   convidados[i] = Serial.readString();
    
   Serial.println("Informe a idade de " + convidados[i] + ": ");
   while( !Serial.available());
   idadeConvidados[i] = Serial.parseInt();
    
   Serial.println("Informe o email de " + convidados[i] + ": ");
   while( !Serial.available());
   emailConvidados[i] = Serial.readString();
    
   Serial.println();
    
  }
  
  /*Exibir lista de convidados
  so vai quem for maior de idade
  
  criar um for
  exibir com o print cada um dos arrays */
  
  Serial.println("** Exibindo convidados eleitos para a festa **");
  Serial.println();
  
  for(int i = 0; i < 4; i++)
  {
   // if(idadeConvidados[i] >= 18)
   //{
    Serial.println("Nome: " + convidados[i]);
    Serial.println("Idade: " + String(idadeConvidados[i]));
    Serial.println("Email: " + emailConvidados[i]);
    
    Serial.println("Permissao para festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade; NAO AUTORIZADO"));
 
    Serial.println("------------");
    Serial.println();
    
  }// fim do for
  
 delay(5000);

}