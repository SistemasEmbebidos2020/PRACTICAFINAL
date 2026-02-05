# 🤖 PRACTICAFINAL: Sistema Embebido General

> Descripcion breve y clara del proyecto:
Este proyecto es un sistema embebido general diseñado para funcionar en una plataforma específica.

## Descripcion

El sistema embebido general está diseñado para ser una solución completa para aplicaciones de bajo consumo de energía. Utiliza una placa base que incluye una CPU, memoria RAM y almacenamiento flash, todo esto conectado a una variedad de sensores y actuatoras para interactuar con el entorno.

## Hardware Requerido

* Placa base de Embebido General
* CPU (Arm Cortex-M4)
* Memoria RAM 64KB
* Almacenamiento Flash 128MB
* Sensores:
 + Sensor de temperatura DS18B20
 + Sensor de luminosidad BH1750
* Actuadores:
 + Led RGB
 + Motor DC

## Software Requerido

* Entorno de desarrollo: Keil uVision
* IDE: STM32CubeIDE
* Herramientas necesarias: CMSIS-Driver, ST-LINK/V2

## Instalacion

1. Descargar e instalar el software necesario.
2. Conectar la placa base al PC mediante cable USB.
3. Configurar los pines de la placa base según la documentación proporcionada.

## Configuracion de Pines

| Pin | Descripción |
| --- | --- |
| VCC | Voltaje de alimentación (+3,3V) |
| GND | Tierra (0V) |
| GPIO0 | Salida del sensor de temperatura |
| GPIO1 | Salida del sensor de luminosidad |
| GPIO2 | Entrada del led RGB |
| GPIO3 | Salida del motor DC |

## Compilacion y Carga

1. Crear un nuevo proyecto en Keil uVision.
2. Agregar los archivos fuente a la aplicación.
3. Configurar las opciones de compilación según la documentación proporcionada.
4. Generar el código ensamblado y cargarlo en la placa base mediante ST-LINK/V2.

## Uso

1. Conectar la placa base al PC mediante cable USB.
2. Abrir STM32CubeIDE e iniciar la aplicación.
3. Utilizar los sensores y actuadores según sea necesario.

## Estructura del Proyecto

* `main.c`: Archivo principal que contiene el código de inicio.
* `drivers.c`: Archivo que contiene las funciones para interactuar con los dispositivos periféricos.
* `config.h`: Archivo de configuración que contiene las opciones de compilación y otros parámetros.

## Troubleshooting

* Problemas comunes:
 + No se detecta la placa base en el PC.
 + Error al compilar el código.
 + Sensores o actuadores no funcionan correctamente.

## Notas

* El sistema embebido general está diseñado para ser una solución flexible y adaptable a diferentes necesidades.
* Es importante seguir las instrucciones de seguridad para evitar dañar la placa base o los componentes.
* La documentación proporcionada es fundamental para entender el funcionamiento del sistema.

## Licencia

MIT License.