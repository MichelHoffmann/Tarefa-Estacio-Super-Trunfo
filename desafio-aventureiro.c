#include <stdio.h>
#include <string.h>

int main() {
    char letra1[4], letra2[4], codigo1[10], codigo2[10], nome1[50], nome2[50];
    int pontos1, pontos2, opcao1, opcao2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pibabv1, pibabv2, densidade1, densidade2, pibpc1, pibpc2, poder1, poder2, inv_densidade1, inv_densidade2;

    printf("╔════════════════════════════════════════════════╗\n");
    printf("║   ███████╗██╗   ██╗██████╗ ███████╗ ██████╗    ║\n");
    printf("║   ██╔════╝██║   ██║██╔══██╗██╔════╝ ██╔══██╗   ║\n");
    printf("║   ███████╗██║   ██║██████╔╝█████╗   █████╔═╝   ║\n");
    printf("║   ╚════██║██║   ██║██╔═══╝ ██╔══╝   ██║ ██║    ║\n");
    printf("║   ███████║╚██████╔╝██║     ███████╗ ██║  ██║   ║\n");
    printf("║   ╚══════╝ ╚═════╝ ╚═╝     ╚══════╝ ╚═╝  ╚═╝   ║\n");
    printf("╠════════════════════════════════════════════════╣\n");
    printf("║         Super Trunfo — Estados & Cidades       ║\n");
    printf("║            Tema 3 — Lógica (2 cartas)          ║\n");
    printf("╚════════════════════════════════════════════════╝\n");
    printf("\n");

    printf("### CADASTRE SUA PRIMEIRA CARTA ###\n");
    printf("Qual a letra da primeira carta?\n");
    scanf("%s", letra1);
    strcpy(codigo1, letra1);
    strcat(codigo1, "01");
    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]%*c", nome1);
    printf("Qual a população dessa cidade?\n");
    scanf("%lu", &populacao1);
    printf("Qual a area dessa cidade?\n");
    scanf("%f", &area1);
    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pibabv1);
    pib1 = 1000000000 * pibabv1;
    printf("Quantos pontos turisticos ela tem?\n");
    scanf("%d", &pontos1);
    densidade1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    inv_densidade1 = 1.0 / populacao1;
    poder1 = pontos1 + populacao1 + area1 + pib1 + pibpc1 + inv_densidade1;
    
    printf("\n\n## Agora vamos para a segunda carta! ##\n");
    printf("Qual a letra dessa carta?\n");
    scanf("%s", letra2);
    strcpy(codigo2, letra2);
    strcat(codigo2, "02");
    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]%*c", nome2);
    printf("Qual a população dessa cidade?\n");
    scanf("%lu", &populacao2);
    printf("Qual a area dessa cidade?\n");
    scanf("%f", &area2);
    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pibabv2);
    pib2 = 1000000000 * pibabv2;
    printf("Quantos pontos turisticos ela tem?\n");
    scanf("%d", &pontos2);
    densidade2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    inv_densidade2 = 1.0 / populacao2;
    poder2 = pontos2 + populacao2 + area2 + pib2 + pibpc2 + inv_densidade2;
    
    printf("\nQual atributo você deseja usar na comparação?\n\n");
    printf("\n1. População\n");
    printf("\n2. Área\n");
    printf("\n3. PIB\n");
    printf("\n4. Número de pontos turísticos\n");
    printf("\n5. Densidade demográfica\n");
    scanf("%d", &opcao1);
    
    printf("Escolha o segundo atributo:\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Número de pontos turísticos\n");
    if (opcao1 != 5) printf("4 - Densidade demográfica\n");
    scanf("%d", &opcao2);
    
    
    switch(opcao) {
        case 1:
            printf("\n\nComparação de Cartas: (Atributo: População)\n\n");
            if(populacao1 > populacao2) {
                printf("Carta 1 - %s (%s): %lu\n", nome1, letra1, populacao1);
                printf("Carta 2 - %s (%s): %lu\n", nome2, letra2, populacao2);
                printf("Resultado: Carta 1 (%s) venceu!", letra1);
            } else if (populacao1 == populacao2) {
                printf("Carta 1 - %s (%s): %lu\n", nome1, letra1, populacao1);
                printf("Carta 2 - %s (%s): %lu\n", nome2, letra2, populacao2);
                printf("Resultado: Empate!");
            } else {
                printf("Carta 1 - %s (%s): %lu\n", nome1, letra1, populacao1);
                printf("Carta 2 - %s (%s): %lu\n", nome2, letra2, populacao2);
                printf("Resultado: Carta 2 (%s) venceu!", letra2);
            }
            break;
        case 2:
            printf("\n\nComparação de Cartas: (Atributo: Área)\n\n");
            if(area1 > area2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, area1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, area2);
                printf("Resultado: Carta 1 (%s) venceu!", letra1);
            } else if (area1 == area2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, area1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, area2);
                printf("Resultado: Empate!");
            } else {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, area1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, area2);
                printf("Resultado: Carta 2 (%s) venceu!", letra2);
            }
            break;
        case 3:
            printf("\n\nComparação de Cartas: (Atributo: PIB)\n\n");
            if(pib1 > pib2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, pib1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, pib2);
                printf("Resultado: Carta 1 (%s) venceu!", letra1);
            } else if (pib1 == pib2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, pib1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, pib2);
                printf("Resultado: Empate!");
            } else {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, pib1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, pib2);
                printf("Resultado: Carta 2 (%s) venceu!", letra2);
            }
            break;
        case 4:
            printf("\n\nComparação de Cartas: (Atributo: Pontos Turísticos)\n\n");
            if(pontos1 > pontos2) {
                printf("Carta 1 - %s (%s): %d\n", nome1, letra1, pontos1);
                printf("Carta 2 - %s (%s): %d\n", nome2, letra2, pontos2);
                printf("Resultado: Carta 1 (%s) venceu!", letra1);
            } else if (pontos1 == pontos2) {
                printf("Carta 1 - %s (%s): %d\n", nome1, letra1, pontos1);
                printf("Carta 2 - %s (%s): %d\n", nome2, letra2, pontos2);
                printf("Resultado: Empate!");
            } else {
                printf("Carta 1 - %s (%s): %d\n", nome1, letra1, pontos1);
                printf("Carta 2 - %s (%s): %d\n", nome2, letra2, pontos2);
                printf("Resultado: Carta 2 (%s) venceu!", letra2);
            }
            break;
        case 5:
            printf("\n\nComparação de Cartas: (Atributo: Densidade demográfica)\n\n");
            if(densidade1 > densidade2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, densidade1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, densidade2);
                printf("Resultado: Carta 1 (%s) venceu!", letra1);
            } else if (densidade1 == densidade2) {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, densidade1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, densidade2);
                printf("Resultado: Empate!");
            } else {
                printf("Carta 1 - %s (%s): %f\n", nome1, letra1, densidade1);
                printf("Carta 2 - %s (%s): %f\n", nome2, letra2, densidade2);
                printf("Resultado: Carta 2 (%s) venceu!", letra2);
            }
            break;
        default:
            printf("Opção invalida");
            break;
    };

    return 0;
}
