

#include "pico/stdlib.h"

#define LED_PIN 11            //porta GPIO da Pico W
#define PONTO 200             // 0,2 segundos
#define TRACO 800             // 0,8 segundos
#define INTERVALO_LETRA 250   // 0,25 segundos
#define INTERVALO_CICLO 3000  // 3 segundos

// Função para acender o led conforme tempo informado, 0,2 segundos para o ponto e 0,8 segundos para o traço (ativa e depois desativa o led)
void acenderLED(int tempo) {
    gpio_put(LED_PIN, 1);
    sleep_ms(tempo);
    gpio_put(LED_PIN, 0);
    sleep_ms(125); // intervalo GAP de 0,125 segundos entre led acesso para ponto ou traço
}
// função geradora da palavra SOS (que corresponde a: ... --- ... em código morse)
void transmitirSOS() {
    for (int i = 0; i < 3; i++) {
        acenderLED(PONTO);
    }
    sleep_ms(INTERVALO_LETRA);
    for (int i = 0; i < 3; i++) {
        acenderLED(TRACO);
    }
    sleep_ms(INTERVALO_LETRA);
    for (int i = 0; i < 3; i++) {
        acenderLED(PONTO);
    }
    sleep_ms(INTERVALO_CICLO);
}

int main() {
    // Inicializar o LED_PIN como saída para ativar o led
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Programa principal
    while (true) {
        transmitirSOS();
    }
}
