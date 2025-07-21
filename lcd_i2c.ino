/* BIBLIOTECAS */
#include <LiquidCrystal_I2C.h>  //módulo i2c
#include <Wire.h>               //comunicação

/* VARIÁVEIS AUXILIARES*/
#define endereco 0x27
#define colunas 16
#define linhas 2

LiquidCrystal_I2C lcd(endereco, colunas, linhas);

byte sorriso[8] = { 
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B11111,
  B00000,
  B00000
};

void setup() {
  /*INICIALIZA O DISPLAY LCD*/
  lcd.init();  // ou lcd.begin, dependendo da biblitoeca
  /*LIGA A LUZ DE FUNDO DO DISPLAY LCD*/
  lcd.backlight();
  /*LIMPA O DISPLAY*/
  lcd.clear();
  lcd.setCursor(0, 0);  //coluna 4, linha 2
  //a contagem começa no 0, ou seja, a primeira linha é a 0
  //primeiro passa a coluna, depois a linha
  lcd.createChar(0, sorriso);
  lcd.write(0);
}

void loop() {
  lcd.setCursor(16, 0);
  lcd.scrollDisplayLeft();
  lcd.print("MUITO APRENDIZADO POR AQUI");
  delay(300);
}
