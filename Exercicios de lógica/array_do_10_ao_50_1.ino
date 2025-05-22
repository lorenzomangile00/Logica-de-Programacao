// C++ code
void setup()
{
  Serial.begin(9600);

  //vetores - variaveis construidas (estrutura de dados)
  //podem guardar varios valores em um unico nome
  
  //                 0   1   2   3   4 - indices/posicoes
  int numeross[5] = {10, 20, 30, 40, 50};//gaveteiros com 5 gavetas
  numeross[3] = 40;//troca o valor que esta na 4a gaveta
  
  //imprime os valores do array/vetor
  for(int i = 0; i <= 4; i++){
  Serial.println(numeross[i]);//imprime o valor atual (variavel: i)
  }
  
  
}// fim do setup

void loop()
{
  
}