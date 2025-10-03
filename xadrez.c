#include <stdio.h>

/* ---------- Funções Recursivas ---------- */

// Torre: move 5 casas para a direita
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// Bispo: move 5 casas na diagonal cima-direita
void moverBispoRecursivo(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Cima, Direita (%d casa)\n", atual);
    moverBispoRecursivo(casas, atual + 1);
}

// Rainha: move 8 casas para a esquerda
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Esquerda (%d casa)\n", atual);
    moverRainha(casas, atual + 1);
}

/* ---------- Funções com Loops ---------- */

// Bispo com loops aninhados (vertical + horizontal)
void moverBispoComLoops(int casas) {
    for (int i = 1; i <= casas; i++) {      // movimento vertical (Cima)
        for (int j = 1; j <= 1; j++) {      // movimento horizontal (Direita)
            printf("Cima, Direita (%d casa)\n", i);
        }
    }
}

// Cavalo: 2 casas para cima + 1 para a direita (L)
void moverCavalo() {
    int movimentos = 0;

    // Loop externo para o movimento vertical (duas casas para cima)
    for (int cima = 1; cima <= 2; cima++) {
        printf("Cima (%d casa)\n", cima);
        movimentos++;

        // Se já fez as 2 casas para cima, parte para a direita
        if (cima == 2) {
            int direita = 1;
            while (direita <= 1) { // movimento horizontal
                printf("Direita (%d casa)\n", direita);
                movimentos++;
                direita++;
            }
        }
    }

    // Apenas para mostrar que usamos múltiplas condições:
    if (movimentos == 3) {
        printf("Movimento em L concluído!\n");
    }
}

/* ---------- Função Principal ---------- */
int main() {
    // Torre com recursividade
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(5, 1);
    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5, 1);
    printf("\n");

    // Bispo com loops aninhados
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(5);
    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainha(8, 1);
    printf("\n");

    // Cavalo com loops complexos
    printf("Movimento do Cavalo (Loops Aninhados):\n");
    moverCavalo();
    printf("\n");

    printf("Simulação concluída!\n");
    return 0;
}
