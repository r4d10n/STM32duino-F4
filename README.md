# STM32duino-F4 - Arduino IDE for STM32F407 DISCOVERY KIT

To get started, install Arduino (>= 1.6.5) and add support for ARM-Cortex M3 (Arduino Due) (Tools->Board->Boards Manager) to install ARM-GCC compiler. 

Pull master branch from https://github.com/rogerclarkmelbourne/Arduino_STM32 into local Arduino/hardware directory (~/Arduino/hardware or My Documents\Arduino\Hardware)

For working I2S Audio Codec and Accelerometer example code, replace contents of STM32F4 folder with the master pulled from https://github.com/mubase/STM32F4-Arduino-core

test_io_serial.ino -> Basic code to get started with Arduino for STM32F4. GPIO LED / Button, Serial Port support (requires external USB-to-Serial RX connected to PA2).





