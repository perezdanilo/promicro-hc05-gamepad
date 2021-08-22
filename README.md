# promicro-hc05-gamepad
Gamepad Bluetooth

# Materiais
- Arduino Nano
- Arduino Pro Micro
- HC-05

# Como funciona
O Arduino Nano (ou qualquer outro) é ligado a um HC-05. Cada entrada digital do Arduino manda um char pela porta serial para o HC-05, que envia o sinal para o outro HC-05, que está conectado no Arduino Pro Micro. Ele interpreta esses dados seriais e manda o comando correspondente do Gamepad para o computador.
* serial 38400
