// C++ code
/*Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.*/
// Variáveis 

float precoCompra = 0;
float precoVenda = 0;
float percentual = 0;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
    //entrada
    Serial.println("Digite o valor do produto:");
    while (!Serial.available());
    precoCompra = Serial.parseFloat();
  	while (Serial.available()) Serial.read();

    Serial.println("Digite o percentual a ser aplicado para obtencao de lucro na venda (ex: 1.0 para 100%):");
    while (!Serial.available());
    percentual = Serial.parseFloat();
  	while (Serial.available()) Serial.read();

    //processamento
    precoVenda = precoCompra + (precoCompra / 100 * percentual);
  
    //saida
    Serial.println("O valor do produto eh: R$ " + String(precoCompra));
    Serial.println("O valor do percentual eh: " + String(percentual));
    Serial.println("O valor do preco de venda eh: R$ " + String(precoVenda));
  
    if (percentual < 50) {
    Serial.println("O produto sera vendido com uma margem pequena de lucro");
    } else {
    Serial.println("O produto sera vendido com uma margem alta de lucro");
    }  
}