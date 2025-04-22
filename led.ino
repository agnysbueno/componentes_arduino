//DECLARAÇÃO DE VARIÁVEIS

/*criação de uma variável chamada 'led'
do tipo 'int' = número inteiro
pois guardará o número da porta digital do arduino em que o led está conectado*/
int led = 2;

void setup() {
  /*configura o led como um componente de saída,
  já que SAI luz dele, e o arduino o ENVIA informações*/
  pinMode(led, OUTPUT);
}

void loop() {
  /*Sequência de comandos que faz o led piscar*/
  digitalWrite(led, HIGH); //acende o led
  delay(1000); //espera 1 segundo antes de ir para o próximo comando
  digitalWrite(led, LOW); //apaga o led
  delay(1000); //espera 1 segundo antes de reiniciar o loop
}
