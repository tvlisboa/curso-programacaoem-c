/**
 * Exemplo 6 
 * Utilizando a estrutura while
 * Solicite ao usuario 10 numeros inteiros
 * Faca a sua soma - mostre na tela 
 * Verifique e mostre tambem o maior numero informado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero;
    int soma = 0;
    int cont = 1;
    int numeroMaior = 0;

    printf("************************ \n");
    printf("* EXEMPLO - 6 SOMADOR  * \n");

    printf("Informe 10 numeros a seguir \n");

    while (cont<=10) {

        printf("Digite: ");
        scanf("%d" , &numero);

        soma = soma + numero;

        if(numero > numeroMaior){

            numeroMaior =  numero;

        }

        cont++;

    }

    printf("************************ \n");
    printf("Soma dos numeros informados: %d\n " , soma);
    printf("Maior numero informado: %d\n " , numeroMaior);
    system("pause");
    return 0;
 }