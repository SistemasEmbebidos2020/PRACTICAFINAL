# PRACTICAFINAL
================

A collection of projects created with Arduino and ESP32 boards.

## Project Description
------------------------

This repository contains the source code for a project that collects information about a project, including its hardware and libraries used.

## Hardware Requirements
-------------------------

* Arduino or ESP32 board

## Supported Boards
-------------------

* Arduino Uno
* Arduino Mega
* ESP32 DevKitC

## Libraries Used
-----------------

* [ArduinoJson](https://github.com/bblanchon/ArduinoJson)

## Pin Configuration
---------------------

The code does not use any specific pin configuration.

## Installation
--------------

To install this project, follow these steps:

### Using Arduino IDE

1. Open the Arduino IDE.
2. Go to `Sketch` > `Include Library` > `Add .ZIP/LIBRARY`.
3. Select the zip file containing the library (ArduinoJson).
4. Create a new project and copy the code into it.

### Using PlatformIO

1. Install PlatformIO by following the instructions on their website.
2. Create a new project in PlatformIO.
3. Add the library `ArduinoJson` to the project's dependencies.
4. Copy the code into the project directory.

## Compilation & Upload
-------------------------

To compile and upload the code, follow these steps:

1. Make sure you have the correct board selected in the IDE or PlatformIO.
2. Go to `Sketch` > `Upload` (Arduino IDE) or `Project` > `Build Project` > `Upload` (PlatformIO).

## Project Structure
----------------------

The project is organized as follows:

* `ANALISIS_PROYECTO.json`: A JSON file containing the project information.

## Usage Example
-----------------

To use this project, simply upload it to your board and open the serial monitor. The code will print the project information to the serial monitor.

## Notes
---------

This project uses a JSON file to store the project information. The code reads from this file and prints the information to the serial monitor.

## License
----------

[MIT](https://opensource.org/licenses/MIT)