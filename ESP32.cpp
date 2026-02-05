// Proyecto: Controlador de Motor y Display OLED utilizando ESP32
// Descripción: El proyecto utiliza un ESP32 como controlador para un motor DC y muestra mensajes en una pantalla OLED 128x64.

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Pines GPIO del ESP32
const int potPin = 34; // Pin analógico donde está conectado el potenciómetro
const int motorPin = 12; // Pin de control del motor (por ejemplo, si estás usando un L298N)

// Variables para almacenar valores de potenciómetro y velocidad del motor
int potValue;
int motorSpeed;

// Configuración para la pantalla OLED
Adafruit_SSD1306 display(-1);

#define DIS_WIDTH 128 // Ancho de la pantalla OLED en píxeles
#define DIS_HEIGHT 64 // Alto de la pantalla OLED en píxeles

#define IMG_HEIGHT   128
#define IMG_WIDTH    64

// 'logo-espol', 64x64px
const unsigned char epd_bitmap_logo_espol [] PROGMEM = {
  // ...
};

// Array de todos los bitmaps para conveniencia.
const int epd_bitmap_allArray_LEN = 1;
const unsigned char* epd_bitmap_allArray[1] = {
    epd_bitmap_logo_espol
};

/**
 * Muestra un mensaje de bienvenida en la pantalla OLED.
 */
void showWelcomeMessage() {
  // Limpia la pantalla OLED
  display.clearDisplay();
  
  // Establece el tamaño del texto a 1 (pequeño)
  display.setTextSize(1);
  
  // Establece el color del texto a blanco
  display.setTextColor(WHITE);
  
  // Coloca el cursor en la posición (0, 0) de la pantalla
  display.setCursor(0, 0);
  
  // Dibuja un cuadrado en la posición (10, 10)
  display.drawRect(10, 10, 20, 20, WHITE);
  
  // Muestra el mensaje de bienvenida en la posición (0, 20)
  display.print("Bienvenido al controlador de motor y display OLED!");
  
  // Actualiza la pantalla
  display.display();
}

void setup() {
  // Inicializa la comunicación SPI con la pantalla OLED
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  
  // Configura el pin del potenciómetro como entrada analógica
  pinMode(potPin, INPUT_ANALOG);
  
  // Configura el pin del motor como salida digital
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Lee el valor del potenciómetro
  potValue = analogRead(potPin);
  
  // Calcula la velocidad del motor basada en el valor del potenciómetro
  motorSpeed = map(potValue, 0, 1023, 0, 255);
  
  // Establece la velocidad del motor
  digitalWrite(motorPin, motorSpeed);
  
  // Muestra un mensaje de bienvenida en la pantalla OLED
  showWelcomeMessage();
}
