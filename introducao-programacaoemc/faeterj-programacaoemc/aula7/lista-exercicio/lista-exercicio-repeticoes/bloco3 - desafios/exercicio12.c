/**
 * Exercicio 12 - Numeros primos
 * Faça um programa que leia um número inteiro 
 * maior que 1 e informe se ele é primo ou não.
 * Um número primo possui exatamente dois divisores positivos: 1 e ele mesmo.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero;
    int contador = 1;
    int contDiv = 0;

    printf("Exercicio - 8 - Numeros primos \n");
    printf("Informe um numero a seguir: ");
    scanf("%d" , &numero);

    do {

       if(numero % contador == 0){
            contDiv++;

       }

       contador++;

    } while (contador<=numero);

        if(contDiv == 2){

            printf("O numero %d , e primo \n" , numero);

        }else{

            printf("O numero %d , nao e primo \n" , numero);

        }

    system("pause");
    return 0;
 }