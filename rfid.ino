/***********BIBLIOTECAS***********/
//RFID
#include <SPI.h>
#include <MFRC522.h>

/***********OBJETOS***********/
//RFID
#define SDA 10
#define RST 9
MFRC522 LeitorRFID(SDA, RST);  // Cria uma nova instância para o leitor e passa os pinos como parâmetro


/***********AUXILIARES***********/
bool Cadastrado = false;  //Variável que verifica a permissão, inicia com false par aguardar a leitura da tag

String IDtag = "";                      //Variável que armazenará o ID da tag
String TagsCadastradas[] = { "", "" };  //Vetor que armazena o ID das tags cadastradas

//Faz a leitura do código da tag
void Leitura() {
  IDtag = "";  //Inicialmente a variável IDtag deve estar vazia para poder receber o valor após a leitura do RFID

  //Enquanto não houver detecção de tag, exibirá a mensagem padrão
  if (!LeitorRFID.PICC_IsNewCardPresent() || !LeitorRFID.PICC_ReadCardSerial()) {
    Serial.println("Nenhuma tag detectada");
    delay(50);
    return;
  }

  verificarCadastro();
}

//Confere a situação do cadastro no sistema
void verificarCadastro() {
  verificarTag();

  //Se estiver cadastrada, exibirá as informações do pet e seu tutor, senão, exibirá um CTA de cadastro
  if (Cadastrado) {
    Serial.println("Essa tag está cadastrada");
    //código a executar caso a tag esteja cadastrada
  } else {
    Serial.println("Essa tag NÃO está cadastrada");
    //código a executar caso a tag NÃO esteja cadastrada
  }
}

//Confere se a tag lida existe na lista de tags cadastradas
void verificarTag() {
  // Pega o ID da tag através da função LeitorRFID.uid e Armazena o ID na variável IDtag
  for (byte i = 0; i < LeitorRFID.uid.size; i++) {
    IDtag.concat(String(LeitorRFID.uid.uidByte[0], HEX));
  }

  Serial.println("Este é o ID da tag: " + IDtag);

  //Compara o valor do ID lido com os IDs armazenados no vetor TagsCadastradas[]
  for (int i = 0; i < (sizeof(TagsCadastradas) / sizeof(String)); i++) {
    if (IDtag == TagsCadastradas[i]) {
      Cadastrado = true;
    }
  }
}

void setup() {
  Serial.begin(9600);     // Inicializa a comunicação Serial
  SPI.begin();            // Inicializa comunicacao SPI
  LeitorRFID.PCD_Init();  // Inicializa o leitor RFID
}

void loop() {
  Leitura();
}
