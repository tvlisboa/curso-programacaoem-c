/**
 * Exemplo 4
 * Solicite ao usuario alguns numeros e informe quantos 
 * Sao pares
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){

    int numero1;
    int contador = 0;
    int totPar = 0;

    printf("Até quanto deseja contar: ");
    scanf("%d" , &numero1);

    printf("*     inicio da contagem      * \n");

    do{

        if(contador %2 == 0){
            printf("Numero informado é par %d\n" , contador);
            totPar = totPar + 1;
        }

        contador++;
    }while(contador<= numero1);

    printf("*     fim da contagem      * \n");
    printf("Quantidade de numeros pares: %d\n" , totPar);
    system("pause");
    return 0;
 }