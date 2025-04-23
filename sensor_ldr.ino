//DECLARAÇÃO DE VARIÁVEIS

/*Criação de uma variável chamada 'sensor'
do tipo 'int' = número inteiro
pois guardará o número da porta analógica do arduino em que o sensor está conectado*/
int sensor = A0;

/*Criação de uma variável vazia chamada 'luz'
que guardará o valor lido pelo sensor LDR*/
int luz;

void setup() {
  /*configura o sensor como um componente de entrada,
  já que o arduino RECEBE informações dele*/
  pinMode(sensor, INPUT);
}

void loop() {
  /*Sequência de comandos para usar o sensor de luminosidade*/
  
  luz = analogRead(sensor); //faz a leitura do sensor e guarda o valor lido dentro da variável 'luz'

  /*Criação de uma condição que verifica se o nível de luminosidade é maior que 600
  Você pode mudar o valor e também o operador.
  Exemplos de valores: Variam de 0 a 1023, sendo 0 = totalmente claro e 1023 = totalmente escuro.
  Exemplos de operadores:
  > maior que || < menor que || >= maior ou igual || <= menor ou igual || == exatamente igual || != diferente de */
  if(luz < 600){
    //aqui você coloca os comandos que serão executados se o nível de luminosidade for maior que o valor definido, no caso do programa, 600. Por exemplo: apagar uma lâmpada
  }else{
    //aqui você coloca os comandos que serão executados se o nível de luminosidade for menor que o definido, por exemplo: acender a lâmpada
  }
}
