# [📊] PRACTICAFINAL

> Descripción breve y clara del proyecto: Controlar un motor con un potenciómetro y mostrar en una pantalla OLED utilizando ESP32.

## Descripcion

Explicación detallada de que hace el proyecto. El objetivo principal es controlar el movimiento de un motor mediante la lectura de valores de un potenciómetro conectado a un pin analógico del ESP32, y mostrar estos valores en una pantalla OLED utilizando las bibliotecas Adafruit_SSD1306 y Adafruit_GFX.

## Hardware Requerido

* ESP32-WROOM (o modelo específico equivalente)
* Potenciómetro
* Motor DC (con L298N o similar)
* Pantalla OLED (Adafruit 1.44" I2C/OLED)
* Conexiones: GND, VCC, SCL, SDA

## Software Requerido

* Plataforma: Arduino IDE (versión específica)
* Board Package: ESP32 Board Package (versión específica)
* Librerias necesarias:
 + Adafruit_SSD1306.h
 + Wire.h
 + Adafruit_GFX.h
* Configuración de Board Manager: Verificar que el paquete de soporte para ESP32 esté instalado y configurado correctamente.

## Instalacion

1. Descargar e instalar Arduino IDE.
2. Agregar soporte para ESP32 mediante el menú `Sketch` > `Include Library` > `Manage Libraries`.
3. Instalar librerias necesarias: `Adafruit_SSD1306`, `Wire`, y `Adafruit_GFX`.
4. Seleccionar board correcto: `ESP32 Dev Module (WROOM)` o similar.
5. Configurar puerto serial.

## Configuracion de Pines

| Pin | Descripción |
| --- | --- |
| A0  | Potenciómetro |
| D9  | Motor DC |

## Compilacion y Carga

* Board: `ESP32 Dev Module (WROOM)`
* Upload Speed: `921600`
* Flash Size: `4MB`
* Partition Scheme: `Default`

## Uso

1. Abrir Serial Monitor (115200 baud).
2. Conectar a WiFi mostrado en la pantalla OLED.
3. Acceder via IP o Bluetooth.

## Estructura del Proyecto

* `ARDUINO.cpp`: Código principal para ESP32.
* `ESP32.cpp`: Archivo auxiliar para ESP32.

## Troubleshooting

* Problema de puerto serial: Verificar que el paquete de soporte para ESP32 esté instalado y configurado correctamente.
* Error de compilación por librerias: Verificar que las librerias necesarias estén instaladas y configuradas correctamente.
* No conecta a WiFi: Verificar la configuración de WiFi y redes locales.

## Notas

* Este proyecto es para ESP32, no se debe utilizar en otras plataformas.
* La pantalla OLED puede variar según el modelo utilizado.

## Licencia

MIT License
