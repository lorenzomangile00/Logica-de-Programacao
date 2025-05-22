

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(String("Numeros pares de 60 a 80: "));
  for(int contador = 60; contador <= 80; contador+= 2){
  Serial.println(String(contador));
  }
  
  Serial.println(String("Numeros impares de 81 a 101: "));
  for(int contador = 81; contador <= 101; contador+= 2){
  Serial.println(String(contador));
  }
   
  delay(1000);
}