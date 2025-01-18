// Biblioteca padrao do Raspberry Pi Pico para manipulacao de GPIOs e comunicacao serial
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "hardware/pwm.h"

// DEFINICOES DE CONSTANTES
#define linhas 4  // Numero de linhas do keypad
#define colunas 4 // Numero de colunas do keypad
#define green_pin 11
#define blue_pin 12
#define red_pin 13
#define BUZZER_PINA 21
#define BUZZER_PINB 4
#define BUZZER_FREQUENCY 10000

// Configuracao dos pinos GPIO para as linhas e colunas do keypad
unsigned int gpio_linhas[linhas] = {18, 19, 20, 4}; // Pinos GPIO conectados as linhas do keypad
unsigned int gpio_colunas[colunas] = {9, 8, 16, 17}; // Pinos GPIO conectados as colunas do keypad

// Mapeamento das teclas do keypad em forma de matriz
const char keymap[linhas][colunas] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// DECLARACAO DE FUNCOES
void pwm_init_buzzer(uint pin);
void beep(uint pin, uint duration_ms);
void keypad_init();
char keypad_get_key();

// IMPLEMENTACAO DE FUNCOES

// Funcao para inicializar o PWM no pino do buzzer
void pwm_init_buzzer(uint pin) {
    // Configurar o pino como saida de PWM.
    // (Descricao: Configura o pino do buzzer para PWM com frequencia definida.)
}

// Funcao para emitir um beep com duracao especificada
void beep(uint pin, uint duration_ms) {
    // Configurar o duty cycle para ativar o beep e desativar apos a duracao especificada.
    // (Descricao: Emite som no pino especificado por um tempo determinado.)
}

// Funcao para inicializar os GPIOs do keypad
void keypad_init() {
    for (int i = 0; i < linhas; i++) {
        gpio_init(gpio_linhas[i]);           // Inicializa o pino da linha
        gpio_set_dir(gpio_linhas[i], GPIO_OUT); // Configura como saída
        gpio_put(gpio_linhas[i], 1);          // Define o estado inicial da linha como alta (1)
    }

    // Configura os pinos das colunas como entradas com pull-up
    for (int i = 0; i < colunas; i++) {
        gpio_init(gpio_colunas[i]);            // Inicializa o pino da coluna
        gpio_set_dir(gpio_colunas[i], GPIO_IN);  // Configura como entrada
        gpio_pull_up(gpio_colunas[i]);           // Habilita o resistor de pull-up
    }
}

// Funcao para verificar qual tecla foi pressionada no keypad
char keypad_get_key() {
    // Verificar cada combinacao de linha e coluna para detectar a tecla pressionada.
    // (Descricao: Retorna a tecla pressionada ou '\0' caso nenhuma seja pressionada.)
}

int main() {
    stdio_init_all();

    // Atividade 1: Inicialize o keypad chamando a funcao apropriada.
    keypad_init();

    // Atividade 2: Configure um loop infinito para:
    //              - Obter a tecla pressionada utilizando a funcao keypad_get_key.
    //              - Exibir a tecla pressionada no terminal.
    //              - Acionar LEDs de acordo com a tecla pressionada (A, B, C ou D).
    //              - Emitir um beep quando a tecla '#' for pressionada.

    while (1) {
        char key = keypad_get_key(); // Obtem a tecla pressionada.
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key); // Exibe a tecla pressionada.
            
            // TODO: Implementar logica para controle de LEDs, buzzer e codigo secreto.
        }
    }

    return 0;
}
