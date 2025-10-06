#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 7
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    
    int navio1_linha = 1;
    int navio1_coluna = 1;
    int navio1_tamanho = 3;
    for (int i = 0; i < navio1_tamanho; i++) {
        tabuleiro[navio1_linha][navio1_coluna + i] = NAVIO;
    }
    
    int navio2_linha = 4;
    int navio2_coluna = 7;
    int navio2_tamanho = 3;
    for (int i = 0; i < navio2_tamanho; i++) {
        tabuleiro[navio2_linha + i][navio2_coluna] = NAVIO;
    }
    
    int navio3_linha = 7;
    int navio3_coluna = 2;
    int navio3_tamanho = 3;
    for (int i = 0; i < navio3_tamanho; i++) {
        tabuleiro[navio3_linha + i][navio3_coluna + i] = NAVIO;
    }
    
    int navio4_linha = 6;
    int navio4_coluna = 8;
    int navio4_tamanho = 3;
    for (int i = 0; i < navio4_tamanho; i++) {
        tabuleiro[navio4_linha + i][navio4_coluna - i] = NAVIO;
    }
    
    int centro = TAMANHO_HABILIDADE / 2;
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i <= centro && j >= centro - i && j <= centro + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i == centro || j == centro) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int distancia_linha = i - centro;
            int distancia_coluna = j - centro;
            if (distancia_linha < 0) distancia_linha = -distancia_linha;
            if (distancia_coluna < 0) distancia_coluna = -distancia_coluna;
            
            if (distancia_linha + distancia_coluna <= centro) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }
    
    int origem_cone_linha = 2;
    int origem_cone_coluna = 5;
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (cone[i][j] == 1) {
                int linha_tab = origem_cone_linha - centro + i;
                int coluna_tab = origem_cone_coluna - centro + j;
                
                if (linha_tab >= 0 && linha_tab < TAMANHO_TABULEIRO &&
                    coluna_tab >= 0 && coluna_tab < TAMANHO_TABULEIRO) {
                    if (tabuleiro[linha_tab][coluna_tab] == AGUA) {
                        tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                    }
                }
            }
        }
    }
    
    printf("Tabuleiro com Habilidade Cone:\n\n");
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == HABILIDADE) {
                tabuleiro[i][j] = AGUA;
            }
        }
    }
    
    int origem_cruz_linha = 5;
    int origem_cruz_coluna = 3;
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (cruz[i][j] == 1) {
                int linha_tab = origem_cruz_linha - centro + i;
                int coluna_tab = origem_cruz_coluna - centro + j;
                
                if (linha_tab >= 0 && linha_tab < TAMANHO_TABULEIRO &&
                    coluna_tab >= 0 && coluna_tab < TAMANHO_TABULEIRO) {
                    if (tabuleiro[linha_tab][coluna_tab] == AGUA) {
                        tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                    }
                }
            }
        }
    }
    
    printf("Tabuleiro com Habilidade Cruz:\n\n");
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == HABILIDADE) {
                tabuleiro[i][j] = AGUA;
            }
        }
    }
    
    int origem_octaedro_linha = 7;
    int origem_octaedro_coluna = 7;
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (octaedro[i][j] == 1) {
                int linha_tab = origem_octaedro_linha - centro + i;
                int coluna_tab = origem_octaedro_coluna - centro + j;
                
                if (linha_tab >= 0 && linha_tab < TAMANHO_TABULEIRO &&
                    coluna_tab >= 0 && coluna_tab < TAMANHO_TABULEIRO) {
                    if (tabuleiro[linha_tab][coluna_tab] == AGUA) {
                        tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                    }
                }
            }
        }
    }
    
    printf("Tabuleiro com Habilidade Octaedro:\n\n");
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}