#include<stdio.h>


int main (){        
    char letraDoEstado;
    char codigoDaCarta [3];
    char nomeDaCidade [20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
    float densidadepopulacional;
    float pibpercapita;
    float SuperPoder;
    float inversodadensidadepopulacional;
  
 
    
    char letraDoEstado_2;
    char codigoDaCarta_2 [3];
    char nomeDaCidade_2 [20];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int numerodepontosturisticos_2;
    float densidadepopulacional_2;
    float pibpercapita_2;
    float SuperPoder_2;
    float inversodadensidadepopulacional_2;



    printf("********************************************************\n");
    printf("                JOGO SUPER TRUMFO\n");
    printf("********************************************************\n\n");



    printf(">>>>>>>>>>>>>>>>>>>>>>Dados Carta 1<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
 
    printf("1º Digite uma letra entre 'A - H' que representara um dos oitos estados -> " );
    scanf(" %c", &letraDoEstado);
    printf("2° Digite um numero com dois digitos de '01 - 04' -> ");
    scanf("%s", codigoDaCarta);
    printf("3° Digite o nome da cidade que deseja -> ");
    scanf("%s", nomeDaCidade);
    printf("4° Digite o numero de habitantes da cidade -> ");
    scanf("%lu", &populacao);
    printf("5° Digite a area da cidade -> ");
    scanf("%f", &area);
    printf("6° Digite o Produto Interno Bruto da cidade -> ");
    scanf("%f", &pib);
    printf("7° Digite a quantidade de pontos turisticos da cidade -> ");
    scanf("%d", &numeroPontosTuristicos);
    

    
    printf("\n\n");
    printf(">>>>>>>>>>>>>>>>>>>>>>Dados Carta 2<<<<<<<<<<<<<<<<<<<<<<<<\n\n");

    printf("1º Digite uma letra entre 'A - H' que representara um dos oitos estados -> " );
    scanf(" %c", &letraDoEstado_2);
    printf("2° Digite um numero com dois digitos de '01 - 04' -> ");
    scanf("%s", codigoDaCarta_2);
    printf("3° Digite o nome da cidade que deseja -> ");
    scanf("%s", nomeDaCidade_2);
    printf("4° Digite o numero de habitantes da cidade -> ");
    scanf("%lu", &populacao_2);
    printf("5° Digite a area da cidade -> ");
    scanf("%f", &area_2);
    printf("6° Digite o Produto Interno Bruto da cidade -> ");
    scanf("%f", &pib_2);
    printf("7° Digite a quantidade de pontos turisticos da cidade -> ");
    scanf("%d", &numerodepontosturisticos_2);


    densidadepopulacional = populacao / area;
    densidadepopulacional_2 = populacao_2 / area_2;

    pibpercapita = (pib * 1000000000) / populacao;
    pibpercapita_2 = (pib_2 * 1000000000) / populacao_2;

    SuperPoder = (area / populacao) + populacao + area + pib + numeroPontosTuristicos + pibpercapita;
    SuperPoder_2 = (area_2 / populacao_2) + populacao_2 + area_2 + pib_2 + numerodepontosturisticos_2 + pibpercapita_2;


    printf("\n\n");
    printf(">>>>>>>>>>>>>>>>>>>>>> RESULTADOS <<<<<<<<<<<<<<<<<<<<<<<<\n\n");

    printf("***** CARTA 1 *******\n");
    printf("Estado:%c\n", letraDoEstado);
    printf("Codigo:%c%s\n", letraDoEstado, codigoDaCarta);
    printf("Nome da Cidade:%s\n", nomeDaCidade);
    printf("Populacao:%lu\n", populacao);
    printf("Area:%.2f km²\n", area);
    printf("PIB:%.2f bilhões de reais\n", pib);
    printf("Numero de pontos turisticos:%d\n", numeroPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("Superpoder:%.2f\n ",SuperPoder);
    

    printf("\n\n");
       
    printf("***** CARTA 2 *******\n");
    printf("Estado:%c\n", letraDoEstado_2);
    printf("Codigo:%c%s\n", letraDoEstado_2, codigoDaCarta_2);
    printf("Nome da Cidade:%s\n", nomeDaCidade_2);
    printf("Populacao:%lu\n", populacao_2);
    printf("Area:%.2f km²\n", area_2);
    printf("PIB:%.2f bilhões de reais\n", pib_2);
    printf("Numero de pontos turisticos:%d\n", numerodepontosturisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita_2);
    printf("Superpoder:%.2f\n ",SuperPoder_2);

      printf("\n\n");


    unsigned long int ResultadoPopulacao;
    ResultadoPopulacao = (populacao > populacao_2);

    float ResultadoArea;
    ResultadoArea = ( area > area_2);

    float ResultadoPib;
    ResultadoPib = ( pib > pib_2);

    int ResultadosNumeroDePontosTuristicos;
    ResultadosNumeroDePontosTuristicos = (numeroPontosTuristicos > numerodepontosturisticos_2);

    float ResultadoDensidadePopulacional;
    ResultadoDensidadePopulacional = (densidadepopulacional> densidadepopulacional_2);

    float ResultadoPibpercapta;
    ResultadoPibpercapta = (pibpercapita > pibpercapita_2);

    float ResultadoSuperPoder;
    ResultadoSuperPoder = (SuperPoder > SuperPoder_2);
    
 
       
    printf("***** RESULTADO DAS COMPARAÇÕES *******\n");

    printf("População: %lu\n", ResultadoPopulacao);
    printf("Area: %.f\n", ResultadoArea);
    printf("PIB: %.f\n", ResultadoPib);
    printf("Pontos turisticos: %d\n", ResultadosNumeroDePontosTuristicos);
    printf("Densidade Populacional: %.f\n", ResultadoDensidadePopulacional);
    printf("Pib per capita: %.f\n", ResultadoPibpercapta);
    printf("Super Poder: %.f\n", ResultadoSuperPoder);
    



     
      };
      
      
   



  





