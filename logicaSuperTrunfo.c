#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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
        
    //calculos
    densidadePopCarta01 = (float) populacaoCarta01/areaCarta01;
    pibCaptaCarta01 = (pibCarta01 * 1000000000.0f) / populacaoCarta01;
    
    densidadePopCarta02 = (float) populacaoCarta02 / areaCarta02;
    pibCaptaCarta02 = (pibCarta02 * 1000000000.0f) / populacaoCarta02;

    superPoder01 = (float)populacaoCarta01 + 
                          areaCarta01  + 
                          pibCarta01 + 
                          qntPontoTuristicoCarta01 + 
                          pibCaptaCarta01 + 
                          (1.0f / densidadePopCarta01);

    superPoder02 = (float)populacaoCarta02 + 
                          areaCarta02  + 
                          pibCarta02 + 
                          qntPontoTuristicoCarta02 + 
                          pibCaptaCarta02 + 
                          (1.0f / densidadePopCarta02);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.


    // Exemplo:
     if (populacaoCarta01 > populacaoCarta02) {
         printf("Carta 1 : %s tem maior população: %lu \n\n",nomeCidadeCarta01,populacaoCarta01);
     } else {
         printf("Carta 2 : %s tem maior população: %lu \n\n",nomeCidadeCarta02,populacaoCarta02);
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("Comparação de Cartas:\n");
    printf("Carta 1:\n");
    printf("População: %lu \n", populacaoCarta01 );
    printf("Área: %.2f\n", areaCarta01);
    printf("PIB: %.2f\n", pibCarta01 );
    printf("Número de Pontos Turísticos: %d\n", qntPontoTuristicoCarta01);
    printf("Densidade Populacional: %.2f\n", densidadePopCarta01);
    printf("PIB per Capita: %.2f\n", pibCaptaCarta01);
    printf("superpoder: %.2f\n\n", superPoder01);

    printf("Carta 2:\n");
    printf("População: %lu \n", populacaoCarta02 );
    printf("Área: %.2f\n", areaCarta02);
    printf("PIB: %.2f\n", pibCarta02 );
    printf("Número de Pontos Turísticos: %d\n", qntPontoTuristicoCarta02);
    printf("Densidade Populacional: %.2f\n", densidadePopCarta02);
    printf("PIB per Capita: %.2f\n", pibCaptaCarta02);
    printf("superpoder: %.2f\n", superPoder02);

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
