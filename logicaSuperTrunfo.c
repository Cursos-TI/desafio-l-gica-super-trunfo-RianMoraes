#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoCarta01, codigoCarta01[4], nomeCidadeCarta01[50];
    int qntPontoTuristicoCarta01;
    float areaCarta01, pibCarta01, densidadePopCarta01, pibCaptaCarta01, superPoder01;
    unsigned long int populacaoCarta01;

    char carta01[1] = "1";
    char carta02[1] = "2";

    // variaveis da carta 02
    char estadoCarta02, codigoCarta02[4], nomeCidadeCarta02[50];
    int qntPontoTuristicoCarta02;
    float areaCarta02, pibCarta02, densidadePopCarta02, pibCaptaCarta02, superPoder02;
    unsigned long int populacaoCarta02;

    // Escolha de cartas para comparacao
    int escolhaUm, escolhaDois, resultUm, resultDois;
    float escolha1Carta1, escolha1Carta2;
    float escolha2Carta1, escolha2Carta2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite a primeira letra do estado brasileiro da Carta 01: ");
    scanf(" %c", &estadoCarta01);

    printf("Digite o código desejado da Carta 01: ");
    scanf("%s", codigoCarta01);

    printf("Digite o nome da Cidade da Carta 01: ");
    getchar();
    fgets(nomeCidadeCarta01, sizeof(nomeCidadeCarta01), stdin);
    nomeCidadeCarta01[strcspn(nomeCidadeCarta01, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 01: ");
    scanf("%lu", &populacaoCarta01);

    printf("Digite a área da cidade escolhida da Carta 01: ");
    scanf("%f", &areaCarta01);

    printf("Digite o PIB da cidade escolhida da Carta 01: ");
    scanf("%f", &pibCarta01);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 01: ");
    scanf("%d", &qntPontoTuristicoCarta01);

    printf("\n\n");

    // entrada de dados carta02
    printf("Digite a primeira letra do estado brasileiro da Carta 02: ");
    scanf(" %c", &estadoCarta02);

    printf("Digite o código desejado da Carta 02: ");
    scanf("%s", codigoCarta02);

    printf("Digite o nome da Cidade da Carta 02: ");
    getchar();
    fgets(nomeCidadeCarta02, sizeof(nomeCidadeCarta02), stdin);
    nomeCidadeCarta02[strcspn(nomeCidadeCarta02, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 02: ");
    scanf("%lu", &populacaoCarta02);

    printf("Digite a área da cidade escolhida da Carta 02: ");
    scanf("%f", &areaCarta02);

    printf("Digite o PIB da cidade escolhida da Carta 02: ");
    scanf("%f", &pibCarta02);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 02: ");
    scanf("%d", &qntPontoTuristicoCarta02);

    printf("\n\n");

    // calculos
    densidadePopCarta01 = (float)populacaoCarta01 / areaCarta01;
    pibCaptaCarta01 = (pibCarta01 * 1000000000.0f) / populacaoCarta01;

    densidadePopCarta02 = (float)populacaoCarta02 / areaCarta02;
    pibCaptaCarta02 = (pibCarta02 * 1000000000.0f) / populacaoCarta02;

    superPoder01 = (float)populacaoCarta01 +
                   areaCarta01 +
                   pibCarta01 +
                   qntPontoTuristicoCarta01 +
                   pibCaptaCarta01 +
                   (1.0f / densidadePopCarta01);

    superPoder02 = (float)populacaoCarta02 +
                   areaCarta02 +
                   pibCarta02 +
                   qntPontoTuristicoCarta02 +
                   pibCaptaCarta02 +
                   (1.0f / densidadePopCarta02);

    // Comparação de Cartas:
    printf("Digite o Nº da opção do primeiro atributo a ser comparado: \n");
    printf("1- População \n");
    printf("2- Area \n");
    printf("3- PIB \n");
    printf("4- Número de pontos turisticos \n");
    printf("5- Densidade demográfica \n");
    scanf("%d", &escolhaUm);

    // responde a escolha dos atributos
    switch (escolhaUm)
    {
    case 1:
        escolha1Carta1 = populacaoCarta01;
        escolha1Carta2 = populacaoCarta02;
        if (populacaoCarta01 > populacaoCarta02)
        {
            printf("Atributo a ser comparado: População\n");
            printf("Carta 1: %lu   x   Carta 2:  %lu \n", populacaoCarta01, populacaoCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (populacaoCarta01 < populacaoCarta02)
        {
            printf("Atributo a ser comparado: População\n");
            printf("Carta 1: %lu   x   Carta 2:  %lu \n", populacaoCarta01, populacaoCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: População\n");
            printf("Carta 1: %lu   x   Carta 2:  %lu \n", populacaoCarta01, populacaoCarta02);
            printf("Empate!\n\n");
        }
        printf("Digite o Nº da opção do segundo atributo a ser comparado: \n");
        printf("2- Area \n");
        printf("3- PIB \n");
        printf("4- Número de pontos turisticos \n");
        printf("5- Densidade demográfica \n");
        scanf("%d", &escolhaDois);

        break;
    case 2:
        escolha1Carta1 = areaCarta01;
        escolha1Carta2 = areaCarta02;
        if (areaCarta01 > areaCarta02)
        {
            printf("Atributo a ser comparado: Area\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (areaCarta01 < areaCarta02)
        {
            printf("Atributo a ser comparado: Area\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: Area\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Empate!\n\n");
        }
        printf("Digite o Nº da opção do segundo atributo a ser comparado: \n");
        printf("1- População \n");
        printf("3- PIB \n");
        printf("4- Número de pontos turisticos \n");
        printf("5- Densidade demográfica \n");
        scanf("%d", &escolhaDois);

        break;
    case 3:
        escolha1Carta1 = pibCarta01;
        escolha1Carta2 = pibCarta02;
        if (pibCarta01 > pibCarta02)
        {
            printf("Atributo a ser comparado: PIB\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (pibCarta01 < pibCarta02)
        {
            printf("Atributo a ser comparado: PIB\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: PIB\n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Empate!\n\n");
        }
        printf("Digite o Nº da opção do segundo atributo a ser comparado: \n");
        printf("1- População \n");
        printf("2- Area \n");
        printf("4- Número de pontos turisticos \n");
        printf("5- Densidade demográfica \n");
        scanf("%d", &escolhaDois);

        break;
    case 4:
        escolha1Carta1 = qntPontoTuristicoCarta01;
        escolha1Carta2 = qntPontoTuristicoCarta02;
        if (qntPontoTuristicoCarta01 > qntPontoTuristicoCarta02)
        {
            printf("Atributo a ser comparado: nº de pontos turisticos\n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (qntPontoTuristicoCarta01 < qntPontoTuristicoCarta02)
        {
            printf("Atributo a ser comparado: nº de pontos turisticos\n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: nº de pontos turisticos\n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Empate!\n\n");
        }
        printf("Digite o Nº da opção do segundo atributo a ser comparado: \n");
        printf("1- População \n");
        printf("2- Area \n");
        printf("3- PIB \n");
        printf("5- Densidade demográfica \n");
        scanf("%d", &escolhaDois);

        break;
    case 5:
        escolha1Carta1 = densidadePopCarta01;
        escolha1Carta2 = densidadePopCarta02;
        if (densidadePopCarta01 < densidadePopCarta02)
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (densidadePopCarta01 > densidadePopCarta02)
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Empate!\n\n");
        }
        printf("Digite o Nº da opção do segundo atributo a ser comparado: \n");
        printf("1- População \n");
        printf("2- Area \n");
        printf("3- PIB \n");
        printf("4- Número de pontos turisticos \n");
        scanf("%d", &escolhaDois);

        break;
    default:
        printf("Escolha uma opção válida e tente novamente");
        break;
    }

    if (escolhaDois == escolhaUm)
    {
        printf("Você não pode repetir o atributo!\n");
        return 0;
    }

    switch (escolhaDois)
    {
    case 2:
        escolha2Carta2 = areaCarta02;
        escolha2Carta1 = areaCarta01;
        if (areaCarta01 > areaCarta02)
        {
            printf("Atributo a ser comparado: Area \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (areaCarta01 < areaCarta02)
        {
            printf("Atributo a ser comparado: Area \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: Area \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", areaCarta01, areaCarta02);
            printf("Empate!\n\n");
        }
        break;
    case 5:
        escolha2Carta2 = densidadePopCarta02;
        escolha2Carta1 = densidadePopCarta01;
        if (densidadePopCarta01 < densidadePopCarta02)
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (densidadePopCarta01 > densidadePopCarta02)
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: Densidade \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", densidadePopCarta01, densidadePopCarta02);
            printf("Empate!\n\n");
        }
        break;
    case 3:
        escolha2Carta2 = pibCarta02;
        escolha2Carta1 = pibCarta01;
        if (pibCarta01 > pibCarta02)
        {
            printf("Atributo a ser comparado: PIB \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (pibCarta01 < pibCarta02)
        {
            printf("Atributo a ser comparado: PIB \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: PIB \n");
            printf("Carta 1: %.2f   x   Carta 2:  %.2f \n", pibCarta01, pibCarta02);
            printf("Empate!\n\n");
        }
        break;
    case 4:
        escolha2Carta2 = qntPontoTuristicoCarta02;
        escolha2Carta1 = qntPontoTuristicoCarta01;
        if (qntPontoTuristicoCarta01 > qntPontoTuristicoCarta02)
        {
            printf("Atributo a ser comparado: nº de pontos turisticos \n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Carta 1 VENCE a primeira comparação\n\n");
        }
        else if (qntPontoTuristicoCarta01 < qntPontoTuristicoCarta02)
        {
            printf("Atributo a ser comparado: nº de pontos turisticos\n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Carta 2 VENCE a primeira comparação\n\n");
        }
        else
        {
            printf("Atributo a ser comparado: nº de pontos turisticos\n");
            printf("Carta 1: %d   x   Carta 2:  %d \n", qntPontoTuristicoCarta01, qntPontoTuristicoCarta02);
            printf("Empate!");
        }
        break;

    default:
        printf("Escolha uma opção válida e tente novamente\n");
        break;
    }

    float somaCarta1 = escolha1Carta1 + escolha2Carta1;
    float somaCarta2 = escolha1Carta2 + escolha2Carta2;

    printf("Comparação de Cartas:\n");
    printf("Carta 1:\n");
    printf("População: %lu \n", populacaoCarta01);
    printf("Área: %.2f\n", areaCarta01);
    printf("PIB: %.2f\n", pibCarta01);
    printf("Número de Pontos Turísticos: %d\n", qntPontoTuristicoCarta01);
    printf("Densidade Populacional: %.2f\n", densidadePopCarta01);
    printf("PIB per Capita: %.2f\n", pibCaptaCarta01);
    printf("superpoder: %.2f\n\n", superPoder01);

    printf("Carta 2:\n");
    printf("População: %lu \n", populacaoCarta02);
    printf("Área: %.2f\n", areaCarta02);
    printf("PIB: %.2f\n", pibCarta02);
    printf("Número de Pontos Turísticos: %d\n", qntPontoTuristicoCarta02);
    printf("Densidade Populacional: %.2f\n", densidadePopCarta02);
    printf("PIB per Capita: %.2f\n", pibCaptaCarta02);
    printf("superpoder: %.2f\n\n", superPoder02);

    printf("Soma dos atributos selecionados Carta1: %.2f\n", somaCarta1);
    printf("Soma dos atributos selecionados Carta2: %.2f\n", somaCarta2);

    return 0;
}
