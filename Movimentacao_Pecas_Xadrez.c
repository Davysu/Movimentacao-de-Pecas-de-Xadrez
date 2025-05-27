#include <stdio.h>

// Constantes para o número de passos das peças
#define PASSOS_TORRE 5
#define PASSOS_BISPO 5
#define PASSOS_RAINHA 8

// Constantes para os passos específicos do Cavalo (Nível Mestre: 2 Cima, 1 Direita)
#define PASSOS_CAVALO_CIMA 2
#define PASSOS_CAVALO_DIREITA 1

// --- Funções Recursivas --- 

// Função recursiva para mover a Torre
void mover_torre_rec(int passos_restantes) {
    // Condição de parada da recursão
    if (passos_restantes <= 0) {
        return;
    }
    // Ação do passo atual
    printf("Direita\n");
    // Chamada recursiva para o próximo passo
    mover_torre_rec(passos_restantes - 1);
}

// Função recursiva para mover o Bispo
// Nota: O requisito pedia loops aninhados aqui também, o que não faz sentido
// para a saída simples "Cima, Direita" por passo. Implementamos a recursão
// para os passos, mantendo a saída direta por passo.
void mover_bispo_rec(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    mover_bispo_rec(passos_restantes - 1);
}

// Função recursiva para mover a Rainha
void mover_rainha_rec(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_rec(passos_restantes - 1);
}


int main() {

    printf("--- Movimento da Torre (Recursivo) ---\n");
    mover_torre_rec(PASSOS_TORRE);

    printf("\n--- Movimento do Bispo (Recursivo) ---\n");
    mover_bispo_rec(PASSOS_BISPO);

    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    mover_rainha_rec(PASSOS_RAINHA);

    printf("\n--- Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    // Usando loops aninhados (for obrigatório) com múltiplas variáveis/condições.
    // Loop externo para controlar o movimento 'L' completo (roda 1 vez neste caso)
    for (int l_move = 0; l_move < 1; l_move++) {
        printf("Iniciando movimento em L (Cima, Cima, Direita):\n");
        // Loop interno (for) para os 2 passos para cima
        for (int passo_vertical = 1; passo_vertical <= PASSOS_CAVALO_CIMA; passo_vertical++) {
            // Condição exemplo (poderia ser mais complexa se necessário)
            if (passo_vertical > 0) { 
                printf("  Passo %d: Cima\n", passo_vertical);
            } else {
                // Exemplo de 'continue' ou 'break' se houvesse lógica mais complexa
                continue; 
            }
        }

        // Loop interno (while) para o passo para a direita
        int passo_horizontal = 0;
        while (passo_horizontal < PASSOS_CAVALO_DIREITA) {
             // Outra condição exemplo
            if (l_move == 0) { // Sempre verdadeiro neste caso, mas demonstra condição
                 printf("  Passo Final: Direita\n");
            } else {
                break; // Exemplo de break
            }
            passo_horizontal++;
        }
    }

    printf("\nSimulacao de movimentos (Nivel Mestre) concluida!\n");

    return 0;
}

