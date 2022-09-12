#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <stdlib.h>

Adafruit_SSD1306 OLED(-1);

int x = 63, y = 31, step; // Coordenadas do centro do display
void setup()   
{                
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicializa com o I2C addr 0x3C
  OLED.clearDisplay(); // Limpa o display pela primeira vez
}

void loop() {
  if (x < 0){ // Evita desenhar fora da tela
    x = 0;
  }
  if (x > 128){ // Evita desenhar fora da tela
    x = 128;
  } 
  if (y < 0){ // Evita desenhar fora da tela
    y = 0;
  }
  if (y > 32){ // Evita desenhar fora da tela
    y = 32;
  }
  step = rand() % 4; // Escolhe aleatoriamente um numero de 0 a 3
  switch (step){ // move o pixel pra cima ou para baixo ou para a esquerda
    case 0:      // ou para a direita dependendo do valor escolhido
      x++;
      break;
    case 1:
      x--;
      break;
    case 2:
      y++;
      break;
    case 3:
      y--;
      break;
  }
  OLED.drawPixel(x, y, WHITE); // desenha o pixel na coorderana selecionada
  OLED.display(); // Acende o pixel selecionado aleatóriamente
}