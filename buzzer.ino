//DECLARAÇÃO DE VARIÁVEIS

/*criação de uma variável chamada 'buzzer'
do tipo 'int' = número inteiro
pois guardará o número da porta digital do arduino em que o buzzer está conectado*/
int buzzer = 2;

void setup() {
  /*configura o buzzer como um componente de saída,
  já que SAI som dele, e o arduino o ENVIA informações*/
  pinMode(buzzer, OUTPUT);
}

void loop() {
  /*Sequência de comandos para o buzzer ficar apitando*/

  tone(buzzer, 261); //aciona o buzzer tocando a nota dó. Obs.: No lugar do número 261, coloque a frequência em Hertz que deseja emitir com o buzzer
  delay(1000); //espera 1 segundo antes do próximo comando
  noTone(buzzer); //para de tocar o som
  delay(1000); //espera 1 segundo para reiniciar o loop
}
