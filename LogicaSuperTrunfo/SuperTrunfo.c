#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main () {
    //Atributos
    char nome1[20], codigo1[10], nome2 [20], codigo2 [10];
    float area1, pib1, area2, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, ppc1, ppc2;
    unsigned long int populacao1, populacao2;
    double poder1,poder2;
    int opcao, opcao2;
    int resultado1, resultado2;

    //Dados cidade 1:
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", nome1);

    printf("Digite o código da cidade 1:\n");
    scanf("%s", codigo1);

    printf("Digite a area em km² da cidade 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib1);

    printf("Digite a população da cidade 1:\n");
    scanf("%lu", &populacao1);

    printf("Digite o numero de pontos turisticos da cidade 1:\n");
    scanf("%i", &turistico1);


    //Dados cidade 2:
    printf("Digite o nome da cidade 2:\n");
    scanf("%s", nome2);

    printf("Digite o código da cidade 2:\n");
    scanf("%s", codigo2);

    printf("Digite a area em km² da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite a população da cidade 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite o numero de pontos turisticos da cidade 2:\n");
    scanf("%i", &turistico2);

    //Densidade populacional e PIB per capita:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    ppc1= populacao1 / pib1;
    ppc2= populacao2 / pib2;

    //Calculo Super poder:
    poder1 = (float)(populacao1 + area1 + pib1 + turistico1 + ppc1)/ densidade1 ;
    poder2 = (float)(populacao2 + area2 + pib2 + turistico2 + ppc2)/ densidade2 ;
    // Exibição dos Dados das Cartas:
   
    //Exibe Cidade 1:
    printf("Cidade 1:\n");
    printf("Nome da cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("Área:%.3f\n", area1);
    printf("PIB:%.3f\n", pib1);
    printf("Populaçao:%lu\n", populacao1);
    printf("Pontos turisticos:%i\n", turistico1);
    printf("Densidade populacional:%.2f\n",densidade1);
    printf("PIB per capita:%.2f\n", ppc1);
    printf("Poder:%.3f\n", poder1);

    //Exibe Cidade 2:
    printf ("Cidade 2:\n");
    printf("Nome da cidade:%s\n", nome2 );
    printf("Codigo:%2s\n", codigo2) ;
    printf("Área:%.3f\n", area2);
    printf("PIB:%.3f\n", pib2);
    printf("Populaçao:%lu\n", populacao2);
    printf("Pontos turisticos:%i\n", turistico2);
    printf("Densidade populacional:%.2f\n",densidade2);
    printf("PIB per capita:%.2f\n", ppc1); 
    printf("Poder:%.3f\n", poder2);

    //Criando o menu
    printf("Digite o primeiro valor a ser comparado:\n");   
    printf("1. Área\n");
    printf("2. PIB\n");
    printf("3. População\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Poder\n");

    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Comparando Área:\n");
            printf("Area cidade 1: %.3f\n", area1);
            printf("Area cidade 2: %.3f\n", area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 2:
            printf("Comparando PIB:\n");
            printf("PIB cidade 1: %.3f\n", pib1);
            printf("PIB cidade 2: %.3f\n", pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 3:
            printf("Comparando População:\n");
            printf("População cidade 1: %lu\n", populacao1);
            printf("População cidade 2: %lu\n", populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 4:
             printf("Comparando Pontos Turísticos:\n");
            printf("Pontos Turísticos cidade 1: %i\n", turistico1);
            printf("Pontos Turísticos cidade 2: %i\n", turistico2);
            resultado1 = turistico1 > turistico2 ? 1 : 0;
            break;
        case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("Densidade Populacional cidade 1: %.3f\n", densidade1);
            printf("Densidade Populacional cidade 2: %.3f\n", densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Comparando Poder:\n");
            printf("Poder cidade 1: %.3f\n", poder1);
            printf("Poder cidade 2: %.3f\n", poder2);
            resultado1 = poder1 > poder2 ? 1 : 0;
            break;
    }
        printf("Escolha o segundo atributo a ser comparado:\n");   
        printf("1. Área\n");
        printf("2. PIB\n");
        printf("3. População\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. Poder\n");

        scanf("%d", &opcao2);

        if (opcao2 == opcao) {
            printf("Atributo já comparado. Escolha outro atributo.\n");
        } else {
            switch (opcao2) {
                case 1:
                    printf("Comparando Área:\n");
                    printf("Area cidade 1: %.3f\n", area1);
                    printf("Area cidade 2: %.3f\n", area2);
                    resultado2 = area1 > area2 ? 1 : 0;
                    break;
                case 2:
                    printf("Comparando PIB:\n");
                    printf("PIB cidade 1: %.3f\n", pib1);
                    printf("PIB cidade 2: %.3f\n", pib2);
                    resultado2 = pib1 > pib2 ? 1 : 0;
                    break;
                case 3:
                    printf("Comparando População:\n");
                    printf("População cidade 1: %lu\n", populacao1);
                    printf("População cidade 2: %lu\n", populacao2);
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                    break;
                case 4:
                     printf("Comparando Pontos Turísticos:\n");
                    printf("Pontos Turísticos cidade 1: %i\n", turistico1);
                    printf("Pontos Turísticos cidade 2: %i\n", turistico2);
                    resultado2 = turistico1 > turistico2 ? 1 : 0;
                    break;
                case 5:
                    printf("Comparando Densidade Populacional:\n");
                    printf("Densidade Populacional cidade 1: %.3f\n", densidade1);
                    printf("Densidade Populacional cidade 2: %.3f\n", densidade2);
                    resultado2 = densidade1 < densidade2 ? 1 : 0;
                    break;
                case 6:
                    printf("Comparando Poder:\n");
                    printf("Poder cidade 1: %.3f\n", poder1);
                    printf("Poder cidade 2: %.3f\n", poder2);
                    resultado2 = poder1 > poder2 ? 1 : 0;
                    break;
            }
        }
            if (resultado1 && resultado2) {
                printf("Cidade 1 vence!\n");
            } else if (!resultado1 != resultado2) {
                printf("Cidade 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
    return 0;
}