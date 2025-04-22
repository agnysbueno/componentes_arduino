//INCLUSÃO DE BIBLIOTECAS

/*A biblioteca utilizada neste programa foi criada por Michael Margolis - versão 1.2.2,
disponível em: https://docs.arduino.cc/libraries/servo */
#include <Servo.h> //inclusão da biblioteca do servo motor

//DECLARAÇÃO DE VARIÁVEIS

/*Criação de um objeto chamado 'motor'
que deriva da biblioteca Servo anteriormente importada */
Servo motor;

void setup() {
  motor.attach(9); //declara que o servo motor está conectado na porta digital PWM 9 do arduino
}

void loop() {
  /*Sequência de comandos para fazer o servo motor girar*/
  
  motor.write(0); //faz o motor ir para o ângulo mínimo de 0 graus
  delay(1000); //espera 1 segundo antes de ir para o próximo comando
  motor.write(180); //faz o motor ir para o ângulo máximo de 180 graus
  delay(1000); //espera 1 segundo e reinicia o loop
}
