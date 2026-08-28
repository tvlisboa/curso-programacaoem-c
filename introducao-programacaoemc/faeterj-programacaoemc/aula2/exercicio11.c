/*
 * Conversao de medidas
 * Faca um algoritmo  que leia as medidas de um terreno 
 * em metros e converta a medida para centimetros
 * Mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 double comprimento;          //comprimento em metros;
 double largura;              //largura em metros;       
 double comprimentoCmt;       //comprimento em centimetros;       comprimentoCmt = comprimento * 100;
 double larguraCmt;           //largura em centimetros;           larguraCmt = largura * 100;
 double areaTotal;            //area total em metros;             areaTotal = comprimento * largura
 double areaTotalCmt;         //area total em centimentros;       areaTotalCmt = areaTotal * 100;
 double valorMedioMt;         //preco por metro quadrado
 double valorTotal;           //preco total da area               valorTotal = (areaTotal * valorMedioMt)

 int main(int argc, char const *argv[])
 {

   /* entrada de dados do usuario */
    printf("************************ \n");
    printf("* CONVERSAO DE MEDIDAS * \n");
    printf("************************ \n");

    printf("Informe as medidas do terreno: \n");
    printf("Comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Largura do terreno: ");
    scanf("%lf", &largura);

    printf("Valor medio do metro quadrado");
    printf("%lf", &valorMedioMt);

    areaTotal = comprimento * largura;        //calculo area total do terreno
    areaTotalCmt = areaTotal * 100;           //conversao de metros para centimetros
    comprimentoCmt = comprimento * 100;       //calculo e conversoes para centimetros
    larguraCmt = largura * 100;               //calculo e conversoes para centimetros
    valorTotal = (areaTotal * valorMedioMt);  //calculo valor total do terreno
    
    /* teste de saida */
    printf("\n* Dados informados pelo usuario * ");
    printf("\n* Comprimento do terreno %.2lf: ", comprimento);
    printf("\n* Comprimento do terreno em cmt %.2lf: ", comprimentoCmt);
    printf("\n* Largura do terreno %.2lf: ", largura);
    printf("\n* Largura do terreno em cmt %.2lf: ", larguraCmt);
    printf("\n* Valor médio em mt² %.2lf: ", valorMedioMt);
    printf("\n* Area total do terreno em mt²: %.2lf", areaTotal);
    printf("\n* Area total do terreno em cmt: %.2lf", areaTotalCmt);
    printf("\n* Valor total do terreno: %.2lf", valorTotal);
    printf("\n");
    system("pause");
    return 0;
 }
 