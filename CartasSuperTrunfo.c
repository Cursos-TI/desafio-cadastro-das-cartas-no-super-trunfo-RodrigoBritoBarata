#include <stdio.h>

int main(){

    //Valores.

    int Populaçao, NPT, Populaçaob, NPTb; 
    float PIB, Area, PIBb, Areab, DP, PpC, DPb, PpCb, SPoder, SPoderb; 
    char Estado[50], CDC[50], nome[50], Estadob[50], CDCb[50], nomeb[50];

    //Cadastro da carta.

    //Pergunta:
    printf("Coloque o Código da carta: \n");
    scanf(" %s", &CDC);

    //Resposta:
    printf("\n Código da carta: %s \n", CDC);

    //Pergunta:
    printf("\n Coloque o Estado: \n");
    scanf("%s", &Estado);

    //Resposta:
    printf("\n Estado: %s \n", Estado);

    //Pergunta:
    printf("\n Coloque a Área: \n");
    scanf("%f", &Area);

    //Resposta:
    printf("\n Área: %f km² \n", Area);

    //Pergunta:
    printf("\n Coloque o Número de pontos turísticos: \n");
    scanf("%d", &NPT);

    //Resposta:
    printf("\n Número de pontos turísticos: %d \n", NPT);

    //Pergunta:
    printf("\n Coloque o PIB: \n");
    scanf("%f", &PIB);

    //Resposta:
    printf("\n PIB: %f bilhões de reais \n", PIB);

    //Pergunta:
    printf("\n Coloque o Nome da Cidade: \n");
    scanf("%s", &nome);

    //Resposta:
    printf("\n Nome da Cidade: %s \n", nome);

    //Pergunta:
    printf("\n Coloque a População: \n");
    scanf("%d", &Populaçao);

    //Resposta:
    printf("\n População: %d \n", Populaçao);

    //Carta 2

    //Pergunta:
    printf("Coloque o Código da carta: \n");
    scanf(" %s", &CDCb);

    //Resposta:
    printf("\n Código da carta: %s \n", CDCb);

    //Pergunta:
    printf("\n Coloque o Estado: \n");
    scanf(" %s", &Estadob);

    //Resposta:
    printf("\n Estado: %s \n", Estadob);

    //Pergunta:
    printf("\n Coloque a Área: \n");
    scanf("%f", &Areab);

    //Resposta:
    printf("\n Área: %f km² \n", Areab);

    //Pergunta:
    printf("\n Coloque o Número de pontos turísticos: \n");
    scanf("%d", &NPTb);

    //Resposta:
    printf("\n Número de pontos turísticos: %d \n", NPTb);

    //Pergunta:
    printf("\n Coloque o PIB: \n");
    scanf("%f", &PIBb);

    //Resposta:
    printf("\n PIB: %f bilhões de reais \n", PIBb);

    //Pergunta:
    printf("\n Coloque o Nome da Cidade: \n");
    scanf("%s", &nomeb);

    //Resposta:
    printf("\n Nome da Cidade: %s \n", nomeb);

    //Pergunta:
    printf("\n Coloque a População: \n");
    scanf("%d", &Populaçaob);

    //Resposta:
    printf("\n População: %d \n", Populaçaob);

    
    //Calculando Densidade Populacional e PIB per Capita


    //Carta1 

    PpC = PIB / Populaçao;

    DP = Populaçao / Area;

    //Carta 2

    PpCb = PIBb / Populaçaob;

    DPb = Populaçaob / Areab;

    //Soma Superpoder

    SPoder = PIB + Area + PpC + DP + Populaçao + NPT;
    SPoderb = PIBb + Areab + PpCb + DPb + Populaçaob + NPTb;

    //Resultado completo.
    printf("\n Nome da cidade: %s \n Estado: %s \n Código da Carta: %s \n Área: %f km² \n PIB: %f bilhões de reais \n População: %d \n Número de pontos turísticos: %d \n PIB per Capital: %.2f \n Densidade Populacional: %.2f hab/km² \n Super Poder: %f \n", nome, Estado, CDC, Area, PIB, Populaçao, NPT, PpC, DP, SPoder);

    //Resultado completo.
    printf("\n Nome da cidade: %s \n Estado: %s \n Código da Carta: %s \n Área: %f km² \n PIB: %f bilhões de reais \n População: %d \n Número de pontos turísticos: %d \n PIB per Capita: %.2f \n Densidade Populacional: %.2f hab/km² \n Super Poder: %f \n", nomeb, Estadob, CDCb, Areab, PIBb, Populaçaob, NPTb, PpCb, DPb, SPoderb);

    //Comparações entre os valores total dos produtos.

    printf("\n População da Carta A é maior que a de Carta B? \n");
        printf("\n Resultado: (%d): \n", Populaçao > Populaçaob);
        printf("Area da Carta A é maior que a de Carta B? \n");
        printf("\n resultado(%d): \n", Area > Areab);
            printf("PIB da Carta A é maior que a de Carta B? \n");
                printf("\n Resultado: (%d) \n", PIB > PIBb);
                printf("Numero de Pontos turisticos da Carta A é maior que a de Carta B? \n");
                    printf("\n Resultado: (%d) \n", NPT > NPTb);
                    printf("Densidade Populacional da carta A de é menor que a de Carta B? \n");
                        printf("\n Resultado: (%d) \n", DP < DPb);
                        printf("PIB Per Capta de Carta A é maior que a de Carta B? \n");
                            printf("\n Resultado: (%d) \n", PpC > PpCb);
                                printf("Super Poder de Carta A é maior que a de Carta B?");
                                    printf("\n Resultado: (%d) \n", SPoder > SPoderb);


    return 0;
}
