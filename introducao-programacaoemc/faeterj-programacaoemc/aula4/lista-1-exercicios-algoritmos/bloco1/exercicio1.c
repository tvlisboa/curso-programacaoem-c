/* 
 * Faca um algoritmo para ler as dimensoes de um terreno
 * Depois exiba as informacoes na tela
 * Como area do terreno - valor por metro e valor total
 */


 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
     double alturaTerreno;
     double comprimentoTerreno;
     double areaTerreno;

     printf("******************************* \n");
     printf("* SISTEMA DE CALCULO DE AREA  * \n");
     printf("******************************* \n");

     printf("* INSIRA AS INFORMACOES DO TERRENO ABAIXO * \n");
     printf("* Altura do terreno : ");
     scanf("%lf", &alturaTerreno);

     printf("* Comprimento do terreno : ");
     scanf("%lf", &comprimentoTerreno);

     areaTerreno = ( alturaTerreno * comprimentoTerreno);

     /* teste de saida de dados */
     printf("\n");
     printf("* Altura do terreno : %.4f" , alturaTerreno);
     printf("\n");

     printf("* Comprimento do terreno : %.4f" , comprimentoTerreno);
     printf("\n");

     printf("* Area total do terreno : %.4f" , areaTerreno);
     printf("\n");

     printf(" * FIM DO ALGORITMO * \n");
     printf("******************************* \n");

    system("pause");
    return 0;
 }
 