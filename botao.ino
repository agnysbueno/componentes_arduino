//DECLARAÇÃO DE VARIÁVEIS

/*criação de uma variável chamada 'botao'
do tipo 'int' = número inteiro
pois guardará o número da porta digital do arduino em que o botão está conectado*/
int botao = 2;

/*criação de uma variável vazia chamada 'estadoBotao'
do tipo 'int' = número inteiro
pois guardará o número 0 ou 1,
sendo que 0 representa o estado lógico LOW, ou seja, quando o botão não está pressionado
e 1 representa o estado lógico HIGH, ou seja, quando o botão estiver sendo pressionado*/
int estadoBotao;

void setup() {
  /*configura o botão como um componente de entrada,
  já que o arduino RECEBE informações dele*/
  pinMode(botao, INPUT);
}

void loop() {
  /*Sequência de comandos para usar o botão a partir de condições*/
  
  estadoBotao = digitalRead(botao); //faz a leitura do botão e guarda seu estado lógico (HIGH ou LOW) dentro da variável 'estadoBotao'
  
  /*criação de uma condição que verifica se o estado lógico do botão é igual a HIGH,
  isso é, se o botão está sendo pressionado*/
  if(estadoBotao == HIGH){
    //aqui você coloca os comandos que serão executados quando o botão for PRESSIONADO. Por exemplo: acender um led
  }else{
    //aqui você coloca os comandos que serão executados quando o botão NÃO estiver sendo pressionado. Por exemplo: apagar o led
  }
}
