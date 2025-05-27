#include <stdio.h>

// Constantes para o número de passos
#define PASSOS_TORRE 5
#define PASSOS_BISPO 5
#define PASSOS_RAINHA 8

int main() {
    int contador;

    printf("--- Movimento da Torre ---\n");
    // Movimento da Torre: 5 casas para a direita (usando for)
    // O loop 'for' é ideal quando o número de iterações é conhecido antecipadamente.
    for (int i = 0; i < PASSOS_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n--- Movimento do Bispo ---\n");
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    // O loop 'while' verifica a condição antes de cada iteração.
    contador = 0; // Reinicia o contador para o while
    while (contador < PASSOS_BISPO) {
        printf("Cima, Direita\n");
        contador++; // Incrementa o contador dentro do loop
    }

    printf("\n--- Movimento da Rainha ---\n");
    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    // O loop 'do-while' executa o bloco de código pelo menos uma vez e depois verifica a condição.
    contador = 0; // Reinicia o contador para o do-while
    if (PASSOS_RAINHA > 0) { // Garante que o loop só execute se houver passos a dar
        do {
            printf("Esquerda\n");
            contador++; // Incrementa o contador dentro do loop
        } while (contador < PASSOS_RAINHA);
    }

    printf("\nSimulacao de movimentos concluida!\n");

    return 0;
}

