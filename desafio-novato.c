#include <stdio.h>
#include <string.h>

int main() {
    char sigla_estado_carta1[1];
    char codigo_carta1[5];
    char nome_cidade_carta1[50];
    int população_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    char sigla_estado_carta2[1];
    char codigo_carta2[5];
    char nome_cidade_carta2[20];
    int população_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    printf("╔════════════════════════════════════════════════╗\n");
    printf("║   ███████╗██╗   ██╗██████╗ ███████╗ ██████╗    ║\n");
    printf("║   ██╔════╝██║   ██║██╔══██╗██╔════╝ ██╔══██╗   ║\n");
    printf("║   ███████╗██║   ██║██████╔╝█████╗   █████╔═╝   ║\n");
    printf("║   ╚════██║██║   ██║██╔═══╝ ██╔══╝   ██║ ██║    ║\n");
    printf("║   ███████║╚██████╔╝██║     ███████╗ ██║  ██║   ║\n");
    printf("║   ╚══════╝ ╚═════╝ ╚═╝     ╚══════╝ ╚═╝  ╚═╝   ║\n");
    printf("╠════════════════════════════════════════════════╣\n");
    printf("║         Super Trunfo — Estados & Cidades       ║\n");
    printf("║          Módulo 1 — Terminal (2 cartas)        ║\n");
    printf("╚════════════════════════════════════════════════╝\n");
    printf("\n \n \n");

    printf("### CADASTRE SUA PRIMEIRA CARTA ###\n");
    printf("Qual a primeira letra da sigla do estado desta carta?\n");
    scanf("%s", sigla_estado_carta1); // estado = A
    strcpy(codigo_carta1, sigla_estado_carta1);
    strcat(codigo_carta1, "01");
    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade_carta1);
    printf("Quantos habitantes tem nessa cidade?\n");
    scanf("%d", &população_carta1);
    printf("Qual o tamanho em km²?\n");
    scanf("%f", &area_carta1);
    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pib_carta1);
    printf("Quantos pontos turísticos tem essa cidade?\n");
    scanf("%d", &pontos_turisticos_carta1);

    printf("\n \n");

    printf("### AGORA CADASTRE SUA SEGUNDA CARTA ###\n");
    printf("Qual a primeira letra da sigla do estado desta carta?\n");
    scanf("%s", sigla_estado_carta2);
    strcpy(codigo_carta2, sigla_estado_carta2);
    strcat(codigo_carta2, "02");
    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade_carta2);
    printf("Quantos habitantes tem nessa cidade?\n");
    scanf("%d", &população_carta2);
    printf("Qual o tamanho em km²?\n");
    scanf("%f", &area_carta2);
    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pib_carta2);
    printf("Quantos pontos turísticos tem essa cidade?\n");
    scanf("%d", &pontos_turisticos_carta2);
    

    printf("Carta 1:\n");
    printf("Estado: %s\n", sigla_estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("População: %d\n", população_carta1);
    printf("Área: %f\n", area_carta1);
    printf("PIB: %f\n", pib_carta1);
    printf("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos_carta1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", sigla_estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("População: %d\n", população_carta2);
    printf("Área: %f\n", area_carta2);
    printf("PIB: %f\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    return 0;
}