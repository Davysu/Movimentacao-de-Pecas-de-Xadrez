#include <stdio.h>

// Constantes para o número de passos das peças
#define PASSOS_TORRE 5
#define PASSOS_BISPO 5
#define PASSOS_RAINHA 8

// Constantes para os passos específicos do Cavalo
#define PASSOS_CAVALO_BAIXO 2
#define PASSOS_CAVALO_ESQUERDA 1

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

    printf("\n--- Movimento do Cavalo ---\n");
    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando loops aninhados: for e while)
    // O requisito pede loops aninhados (um for obrigatório) e a saída específica "Baixo", "Baixo", "Esquerda".
    // Usaremos um loop for externo (que roda uma vez para este movimento específico)
    // e loops internos para cada parte do movimento 'L'.
    for (int l_move = 0; l_move < 1; l_move++) { // Loop externo (roda 1 vez para este movimento específico)
        // Primeiro componente do 'L': 2 passos para baixo (usando for interno)
        for (int i = 0; i < PASSOS_CAVALO_BAIXO; i++) {
            printf("Baixo\n"); // Saída direta
        }

        // Segundo componente do 'L': 1 passo para a esquerda (usando while interno)
        contador = 0; // Reinicia contador
        while (contador < PASSOS_CAVALO_ESQUERDA) {
            printf("Esquerda\n"); // Saída direta
            contador++;
        }
    }

    printf("\nSimulacao de movimentos concluida!\n");

    return 0;
}

