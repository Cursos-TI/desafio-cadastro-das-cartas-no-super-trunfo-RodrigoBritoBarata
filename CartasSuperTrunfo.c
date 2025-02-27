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

    PpC = PIB / Populaçao; //Por algum motivo só funciona se ambos os numeros tiverem a mesma quantidade de casas decimais.

    DP = Populaçao / Area;

    //Carta 2

    PpCb = PIBb / Populaçaob; ////Por algum motivo só funciona se ambos os numeros tiverem a mesma quantidade de casas decimais.

    DPb = Populaçaob / Areab;

    //Soma Superpoder

    SPoder = PIB + Area + PpC + 1 / DP + Populaçao + NPT;
    SPoderb = PIBb + Areab + PpCb + 1 / DPb + Populaçaob + NPTb;

    //Resultado completo.
    printf("\n Nome da cidade: %s \n Estado: %s \n Código da Carta: %s \n Área: %f km² (%d) \n PIB: %f bilhões de reais (%d) \n População: %d (%d) \n Número de pontos turísticos: %d (%d) \n PIB per Capital: %.2f (%d) \n Densidade Populacional: %.2f hab/km² (%d) \n Super Poder: %f (%d) \n", nome, Estado, CDC, Area, (Area > Areab), PIB, (PIB > PIBb), Populaçao, (Populaçao > Populaçaob), NPT, (NPT > NPTb), PpC, (PpC > PpCb), DP, (DP < DPb), SPoder, (SPoder > SPoderb));

    //Resultado completo.
    printf("\n Nome da cidade: %s \n Estado: %s \n Código da Carta: %s \n Área: %f km² (%d) \n PIB: %f bilhões de reais (%d) \n População: %d (%d) \n Número de pontos turísticos: %d (%d) \n PIB per Capita: %.2f (%d) \n Densidade Populacional: %.2f hab/km² (%d) \n Super Poder: %f (%d) \n", nomeb, Estadob, CDCb, Areab, (Areab > Area), PIBb, (PIBb > PIB), Populaçaob, (Populaçaob > Populaçao), NPTb, (NPTb > NPT), PpCb, (PpCb > PpC), DPb, (DPb < DP), SPoderb, (SPoderb > SPoder));

    return 0;
}


    return 0;
}
