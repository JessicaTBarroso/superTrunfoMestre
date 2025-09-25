#include<stdio.h>


int main (){        
    char letraDoEstado [1];
    char codigoDaCarta [3];
    char nomeDaCidade [20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;

    char letraDoEstado_2 [1];
    char codigoDaCarta_2 [3];
    char nomeDaCidade_2 [20];
    int populacao_2;
    float area_2;
    float pib_2;
    int numerodepontosturisticos_2;


    printf("********************************************************\n");
    printf("                JOGO SUPER TRUMFO\n");
    printf("********************************************************\n\n");



    printf(">>>>>>>>>>>>>>>>>>>>>>Dados Carta 1<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
 
    printf("1º Digite uma letra entre 'A - H' que representara um dos oitos estados -> " );
    scanf("%s", &letraDoEstado);
    printf("2° Digite um numero com dois digitos de '01 - 04' -> ");
    scanf("%s", &codigoDaCarta);
    printf("3° Digite o nome da cidade que deseja -> ");
    scanf("%s", &nomeDaCidade);
    printf("4° Digite o numero de habitantes da cidade -> ");
    scanf("%d", &populacao);
    printf("5° Digite a area da cidade -> ");
    scanf("%f", &area);
    printf("6° Digite o Produto Interno Bruto da cidade -> ");
    scanf("%f", &pib);
    printf("7° Digite a quantidade de pontos turisticos da cidade -> ");
    scanf("%d", &numerodepontosturisticos); 


    printf("\n\n");
    printf(">>>>>>>>>>>>>>>>>>>>>>Dados Carta 2<<<<<<<<<<<<<<<<<<<<<<<<\n\n");

    printf("1º Digite uma letra entre 'A - H' que representara um dos oitos estados -> " );
    scanf("%s", &letraDoEstado_2);
    printf("2° Digite um numero com dois digitos de '01 - 04' -> ");
    scanf("%s", &codigoDaCarta_2);
    printf("3° Digite o nome da cidade que deseja -> ");
    scanf("%s", &nomeDaCidade_2);
    printf("4° Digite o numero de habitantes da cidade -> ");
    scanf("%d", &populacao_2);
    printf("5° Digite a area da cidade -> ");
    scanf("%f²", &area_2);
    printf("6° Digite o Produto Interno Bruto da cidade -> ");
    scanf("%f", &pib_2);
    printf("7° Digite a quantidade de pontos turisticos da cidade -> ");
    scanf("%d", &numerodepontosturisticos_2);


    printf("\n\n");
    printf(">>>>>>>>>>>>>>>>>>>>>> RESULTADOS <<<<<<<<<<<<<<<<<<<<<<<<\n\n");

    printf("***** CARTA 1 *******\n");
    printf("Estado:%s\n", letraDoEstado);
    printf("Codigo:%s%s\n", letraDoEstado, codigoDaCarta);
    printf("Nome da Cidade:%s\n", nomeDaCidade);
    printf("Populacao:%d\n", populacao);
    printf("Area:%f km²\n", area);
    printf("PIB:%f\n", pib);
    printf("Numero de pontos turisticos:%d\n", numerodepontosturisticos);


    printf("\n\n");
       
   printf("***** CARTA 2 *******\n");
    printf("Estado:%s\n", letraDoEstado_2);
    printf("Codigo:%s%s\n", letraDoEstado_2, codigoDaCarta_2);
    printf("Nome da Cidade:%s\n", nomeDaCidade_2);
    printf("Populacao:%d\n", populacao_2);
    printf("Area:%f km²\n", area_2);
    printf("PIB:%f\n", pib_2);
    printf("Numero de pontos turisticos:%d\n", numerodepontosturisticos_2);


    printf("\n\n");




}
