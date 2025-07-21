/******** Programação do projeto Letreiro Boas Vindas ********/
/* BIBLIOTECAS */
#include <LiquidCrystal.h>

/* OBJETOS */
LiquidCrystal lcd(2,4,10,11,12,13); //portas, respectivamente: RS, E, D4, D5, D6 e D7

/* CUSTOM CHARS */
byte carinhaFeliz[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b10001,
  0b01110,
  0b00000,
  0b00000
};

byte coracao[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

/* FUNÇÕES */
//Define a posição do texto a ser exibido no display LCD bem como o texto que será exibido
void exibirNoLCD(int coluna, int linha, String texto) {
  lcd.setCursor(coluna, linha);
  lcd.print(texto);
}

//Configura a tela para dar início ao letreiro
void iniciarLetreiro() {
  lcd.begin(16,2);       //inicia o display LCD
  //criação dos caracteres especiais
  lcd.createChar(0, carinhaFeliz);
  lcd.createChar(5, coracao);
}

//Exibe o texto padrão de boas vindas
void exibirMensagemPadrao() {
  lcd.clear();
  exibirNoLCD(1, 0, "Boas vindas ao");
  exibirNoLCD(2, 1, "Maker Labs ");
  lcd.write((byte)5);
  delay(3000);
  lcd.clear();
  exibirNoLCD(1, 0, "Venha aprender");
  exibirNoLCD(1, 1, "e se divertir ");
  lcd.write(byte(0)); 
  delay(3000);
}

void setup() {
  iniciarLetreiro();
}

void loop() {
  exibirMensagemPadrao();  //Boas vindas ao Maker Labs
}
