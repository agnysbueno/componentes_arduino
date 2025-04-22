//INCLUSÃO DE BIBLIOTECAS

/*A biblioteca utilizada neste programa foi criada por Erick Simões - versão 3.0.0,
disponível em: https://github.com/ErickSimoes/Ultrasonic */
#include <Ultrasonic.h> //inclui a biblioteca do sensor de distância

//DECLARAÇÃO DE VARIÁVEIS

/*Criação de um objeto chamado 'sensor' que deriva da biblioteca Ultrasonic anteriormente importada
e recebe dois parâmetros: o número da porta digital do arduino em que o TRIG do sensor está conectado
e o número da porta em que o ECHO do sensor está conectado, respectivamente*/
Ultrasonic sensor(5,6);

/*criação de uma variável vazia chamada 'distancia'
do tipo 'int' = número inteiro
pois guardará o número da distância, em centímetros, captada pelo sensor */
int distancia;

void setup() {
  //não é necessário declarar pinMode para o sensor, pois a biblioteca importada já faz isso automaticamente
}

void loop() {
  /*Sequência de comandos para usar o sensor de distância */
  
  distancia = sensor.read(); //faz a leitura da distância captada pelo sensor e guarda dentro da variável 'distancia'

  /*criação de uma condição que verifica se a distância captada pelo sensor é menor que 40 centímetros.
  Você pode alterar o número e também o operador de acordo com a sua lógica de programação.
  Exemplos de operadores:
  > maior que || < menor que || >= maior ou igual || <= menor ou igual || == exatamente igual || != diferente de */
  if(distancia < 40){
    //aqui você coloca os comandos que serão executados se a distância for menor do que o valor que você definiu, no caso do programa, 40 centímetros
    //por exemplo: acender um led
  }else{
    //aqui você coloca os comandos que serão executados se a distância for maior do que o definido
    //por exemplo: apagar o led
  }
}
