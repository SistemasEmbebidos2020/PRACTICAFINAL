#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Comentario de encabezado explicando el proyecto
// Proyecto para controlar un motor con un potenciómetro y mostrar en una pantalla OLED.
/*
**Pines GPIO del ESP32**

*   VCC: 3.3V
*   GND: GND
*   RXD0 (GPIO 16): No se utiliza en este ejemplo
*   TXD0 (GPIO 17): No se utiliza en este ejemplo
*   SCL (GPIO 5): I2C Clock
*   SDA (GPIO 4): I2C Data

*/

int potPin = A0; // Pin analógico donde está conectado el potenciómetro
int motorPin = 9; // Pin de control del motor (por ejemplo, si estás usando un L298N)
int potValue;
int motorSpeed;

Adafruit_SSD1306 display(-1);

#define DIS_WIDTH 128 // OLED display width, in pixels
#define DIS_HEIGHT 64 // OLED display height, in pixels

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

void setup() {
    // Inicializar la comunicación serie a una velocidad de 9600 bps.
    Serial.begin(9600);

    // Configurar el pin del motor como salida.
    pinMode(motorPin, OUTPUT);

    // Inicializar el display proporcionando el tipo de display y su dirección I2C.
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println("Error al iniciar el display!");
        while (1);
    }

    // Configurar la resolución del display.
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);

    // Inicializar la configuración WiFi/Bluetooth.
    // No se incluye en este ejemplo, pero se puede agregar según sea necesario.

    // Inicializar la memoria SPIFFS.
    // Si no se utiliza, se puede comentar esta línea.
    // espSPIFFSEditor();

}

void loop() {
    // Leer el valor del potenciómetro y asignarlo a motorSpeed.
    potValue = analogRead(potPin);
    motorSpeed = map(potValue, 0, 1023, 0, 255);

    // Mover el motor según la velocidad configurada.
    analogWrite(motorPin, motorSpeed);

    // Mostrar en la pantalla OLED los valores de potValue y motorSpeed.
    display.setCursor(0, 10);
    display.print("Pot Value: ");
    display.print(potValue);
    display.setCursor(0, 30);
    display.print("Motor Speed: ");
    display.print(motorSpeed);

    // Actualizar la pantalla OLED.
    display.display();

}
