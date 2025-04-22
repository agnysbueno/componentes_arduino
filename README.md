# Guia de programação para Arduino - Componentes
Neste repositório você encontrá os modelos base de programação em C++ para uso de componentes eletrônicos com Arduino.

Cada arquivo contém os comandos básicos para executar a função principal do componente em questão (conforme indicado no nome do arquivo). Estes modelos podem ser replicados e modificados de acordo com a lógica de programação desejada, uma vez que a base do código será a mesma para qualquer situação.

Segue lista dos componentes contemplados em ordem alfabética e resumo dos comandos principais:

### • LED
Para __acender__ o led: ``digitalWrite(led, HIGH);`` 

Para __apagar__ o led: ``digitalWrite(led, LOW);``

---
### • BOTÃO
Para __ler__ o botão: ``estadoBotao = digitalRead(botao);`` 

Para verificar se o botão está sendo __pressionado__: ``if(estadoBotao == HIGH){}``

---
### • BUZZER
Para __tocar__ alguma nota: ``tone(buzzer, nota);`` 

Para __parar__ o som: ``noTone(buzzer);``

---
### • SENSOR DE DISTÂNCIA (ULTRASSÔNICO)
Para __captar a distância__: ``sensor.read();``
