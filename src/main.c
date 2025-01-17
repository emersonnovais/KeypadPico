#include <stdio.h>
#include "pico/stdlib.h"
#include "keypad.h"
#include "led_control.h"
#include "buzzer.h"

int main() {
    // Inicialização
    stdio_init_all();
    init_keypad();       // Inicializa o teclado matricial
    init_leds();         // Inicializa os LEDs
    init_buzzer();       // Inicializa o buzzer

    while (1) {
        // Leitura do teclado
        char key = read_key();
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key);
            handle_keypress(key); // Comportamento específico para cada tecla
        }
        sleep_ms(100);
    }
}