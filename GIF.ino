#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif12pt7b.h>

#define x 0

Adafruit_SSD1306 display(-1);

// Cole aqui <------

void setup() {
  Serial.begin(115200);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pausa por 2 segundos
 
  // Limpa o display
  display.clearDisplay();
  
}
 
void loop() {
  // Desenha um bitmap na tela
  display.drawBitmap(40, 17, Frame1, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame2, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame3, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame4, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame5, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame6, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame7, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                            // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();

  display.drawBitmap(40, 17, Frame8, 48, 48, 1); // Coordenada X, coordenada Y, nome da imagem, 
                             // tamanho na coordenada x, tamanho na coordenada y, nome do arquivo bitmap (sempre 1)
  display.display();
  delay(x);
  display.clearDisplay();
  
}