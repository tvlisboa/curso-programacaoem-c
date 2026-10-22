/**
 * Exercicio 3
 * Solicite ao usuario para digitar 10 numeros
 * 
 * Nao aceite que informe numeros menores que 1 - mostre erro na tela
 * 
 * Mostre na tela quantos estao entre 1 e 10
 * 
 * Mostre na tela o total de numeros entre 1 e 10 
 * 
 * E quantos numeros informados sao pares e impares e 
 * seus respectivos totais
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int num;
    int cont = 0;
    int totEntreDez = 0;
    int somaDez = 0;
    int totPar = 0;
    int totImpar = 0;

    printf("****************************** \n");
    printf("*   EXERCICIO - SOMATORIO    * \n");
    printf("* Digite 10 numeros a seguir * \n");
    printf("****************************** \n");

    for(int i = 1; i <=10 ; i++){

        printf("Digite: ");
        scanf("%d" , &num);

        /* nao aceita numeros menores que 0*/
        while (num<1) {
            
            printf("Dados informados estao incorretos - tente novamente \n");
                
            printf("Digite: ");
            scanf("%d" , &num);

            cont++;
        }

        if((num>=1) && (num<=10)){
            printf("%d\n" ,num);
            
            /* quantos numeros estao entre 1 e 10 */
            totEntreDez = totEntreDez++;

            /* soma total dos numeros entre 1 e 10 */
            somaDez = somaDez + num;

            /* verifica se o numero informado e par ou impar
             * sendo par ele ira entrar no contador
             * e mostrar o total no final
            */

            if(num % 2 == 0){

                printf("Numero informado %d  é PAR! \n" , num);
                totPar = totPar++;

            }else{

                printf("Numero informado %d  é IMPAR! \n" , num);
                totImpar = totImpar++;

            }

        }
        

    }

    printf("Total de numeros entre 1 e 10 %d\n" , totEntreDez);
    printf("Soma dos numeros entre 1 e 10 %d\n" , somaDez);
    printf("Total de numeros pares: %d\n" , totPar);
    printf("Total de numeros impares: %d\n" , totImpar);
    system("pause");
    system("cls");
    return 0;
 }