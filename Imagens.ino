#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif12pt7b.h>

Adafruit_SSD1306 display(-1);

static const unsigned char PROGMEM image_data_Saraarray[] = { 
  // Imagem convertida deve vir aqui <------
};

void setup() {
  Serial.begin(115200);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pausa por 2 segundos
 
  // Limpa o display
  display.clearDisplay();
  
  // Desenha um bitmap na tela
  display.drawBitmap(40, 17, image_data_Saraarray, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                             // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
}
 
void loop() {
  
}