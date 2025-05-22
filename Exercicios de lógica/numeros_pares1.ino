// C++ code
//
int numerosPares[10];

void setup()
{
  Serial.begin(9600);

  int i = 0;//variavel de controle
  while(i < 9){

  //incremento da variavel do controle

  Serial.println("Digite um numero par: ");
  while( !Serial.available());
  int numeroDigitado = Serial.parseInt();
    
  numerosPares[i] = numeroDigitado;
    i++;

  }//fim do while 
  
  for(int i = 0; i <= 9; i+= 2){
  Serial.println("O valor digitado eh igual a " + numerosPares[i]);
  }//fim do for

}//fim do setup

void loop()
{

}