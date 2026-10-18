/**
 * Exercicio 8 - Numeros positivos e negativos
 * Faça um programa que leia 15 números inteiros. 
 * Ao final, informe quantos números são positivos, 
 * quantos são negativos e quantos são iguais a zero.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero;
    int totPositivo = 0;
    int totNegativo = 0;
    int totNeutro = 0;

    printf("************************************* \n");
    printf("* EXERCICIO 8 - POSITIVO E NEGATIVO * \n");
    printf("************************************* \n");

    printf("Digite 15 numeros a seguir \n");

    for (int i = 1 ; i <= 15 ; i++) {
        
        printf("Digite: ");
        scanf("%d" , &numero);

        if(numero > 0){
            
            printf("Numero informado %d é positivo \n" , numero);
            totPositivo = totPositivo + 1;

        }else if(numero == 0){

            printf("Numero informado %d é neutro \n" , numero);
            totNeutro = totNeutro + 1;

        }else{

            printf("Numero informado %d é negativo \n" , numero);
            totNegativo = totNegativo + 1;

        }

    }

    printf("************************************* \n");
    printf("Total de numeros positivos: %d\n" , totPositivo);
    printf("Total de numeros negativos: %d\n" , totNegativo);
    printf("Total de numeros neutros: %d\n" , totNeutro);
    printf("************************************* \n");
    system("pause");
    return 0;
 }