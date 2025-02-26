#include <stdio.h>

int main(){
    int Populaçao, NPT; float PIB, Area; char Estado[50], CDC[50], nome[50];

    //Pergunta:
    printf("Coloque o Código da carta: \n");
    scanf("%s", &CDC);

    //Resposta:
    printf("\n Código da carta: %s \n", CDC);

    //Pergunta:
    printf("\n Coloque o Estado: \n");
    scanf(" %s", &Estado);

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

    //Resultado completo.
    printf("\n Nome da cidade: %s \n Estado: %s \n Código da Carta: %s \n Área: %f km² \n PIB: %f bilhões de reais \n População: %d \n Número de pontos turísticos: %d \n", nome, Estado, CDC, Area, PIB, Populaçao, NPT);

    return 0;
}
