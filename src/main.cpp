#include <Arduino.h>
#include <Adafruit_GFX.h> // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>
 

#define TFT_DC 7
#define TFT_CS 10
#define TFT_SDA 11
#define TFT_SCL 12
#define TFT_RST 6
#define SPI_FREQUENCY 40000000
 
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_SDA, TFT_SCL, TFT_RST);

const uint16_t colors[] = {ST7735_RED, ST7735_GREEN, ST7735_BLUE, ST7735_YELLOW, ST7735_MAGENTA, ST7735_CYAN, ST7735_WHITE};

void setup(void) {
  tft.setSPISpeed(SPI_FREQUENCY);
  tft.initR(INITR_MINI160x80_PLUGIN);
  tft.fillScreen(ST7735_BLACK);
  tft.setRotation(1);
}

void loop() {
  tft.fillScreen(ST7735_BLACK);
  tft.setCursor(10, 10);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(2);
  tft.println("Hola, Mundooo");
  delay(1000);
}