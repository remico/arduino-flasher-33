# arduino-flasher-33
esp32 (lolin32) based "USB-to-UART converter" for arduino 3.3V powered boards

For flashing a small arduino board (e.g. arduino-pro-mini) which:
- is powered by 3.3V
- doesn't have its own USB plug

you generally need a simple and cheap USB-to-UART converter supporting 3.3V TTL logic.

However if you don't have one, but have an esp32 based board, it's possible to turn it into a such converter.

Serial1 pins used:
- RX - GPIO27
- TX - GPIO26

Note:
reset pin isn't connected, use hardware Reset button on the target board instead
