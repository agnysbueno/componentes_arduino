//DECLARAÇÃO DE VARIÁVEIS

/*criação de uma variável chamada 'motor'
do tipo 'int' = número inteiro
pois guardará o número da porta digital PWM do arduino em que o motor está conectado*/
int motor = 9;

void setup() {
  /*configura o motor como um componente de saída,
  já que o arduino ENVIA informações para ele*/
  pinMode(motor, OUTPUT);
}

void loop() {
  /*Sequência de comandos que faz o motor ligar e desligar*/

  /*Para controlar a velocidade do motor, usaremos escrita analógica em uma porta PWM, cujos valores vão de 0 a 255:
  sendo 0 = totalmente desligado
  255 = 100% da velocidade
  Obs.: Também poderia ser utilizado o comando 'digitalWrite' com os valores 'HIGH' ou 'LOW',
  porém, dessa forma não seria possível controlar a velocidade, apenas definir se o motor ligará ou desligará*/
  analogWrite(motor, 255); //aciona o motor no máximo
  delay(1000); //espera 1 segundo antes do próximo comando
  analogWrite(motor, 0); //desliga o motor
  delay(1000); //espera 1 segundo e reinicia o loop
}
