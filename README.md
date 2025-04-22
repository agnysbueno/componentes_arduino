# Guia de programação para Arduino - Componentes
Neste repositório você encontrará os modelos base de programação em C++ para uso de componentes eletrônicos com Arduino.

Cada arquivo contém os comandos básicos para executar a função principal do componente em questão (conforme indicado no nome do arquivo). Estes modelos podem ser replicados e modificados de acordo com a lógica de programação desejada, uma vez que a base do código será a mesma para qualquer situação.

Segue lista dos componentes contemplados em ordem alfabética e resumo dos comandos principais:


### • BOTÃO
Para __ler__ o botão: ``estadoBotao = digitalRead(botao);`` 

Para verificar se o botão está sendo __pressionado__: ``if(estadoBotao == HIGH){}``

---
### • BUZZER
Para __tocar__ alguma nota: ``tone(buzzer, nota);`` 

Para __parar__ o som: ``noTone(buzzer);``

---
### • LED
Para __acender__ o led: ``digitalWrite(led, HIGH);`` 

Para __apagar__ o led: ``digitalWrite(led, LOW);``

---
### • MOTOR DC
Para __acionar__ o motor no __máximo__: ``analogWrite(motor, 255);`` 

Para __desligar__ o motor: ``analogWrite(motor, 0);``

---
### • SENSOR DE DISTÂNCIA (ULTRASSÔNICO)
Para __captar a distância__: ``distancia = sensor.read();``

Para verificar se a distância é __menor que algum valor__: ``if(distancia < valor){}``

---
### • SERVO MOTOR
Para __definir a porta__: ``motor.attach(porta);``

Para fazer o motor __girar para determinado ângulo__: ``motor.write(angulo);``
