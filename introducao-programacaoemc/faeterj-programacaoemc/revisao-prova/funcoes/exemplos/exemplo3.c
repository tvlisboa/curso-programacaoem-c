/**
 * Exemplo 3
 * Utilizando função
 * Crie um algoritmo para calcular o fatorial
 * de um numero inteiro
 */

 #include <stdio.h>3
 #include <stdlib.h>

 int calcularFatorial(int numero1){

    int cont;
    int resultado = 1;

    for(cont = 1 ; cont<=numero1 ; cont++){

        resultado = resultado * cont;
    }

    return resultado;

 }

 int main (){

    int n1;
    int fatorial;

    printf("************************ \n");
    printf("* EXEMPLO 3 - FATORIAL * \n");
    printf("************************ \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &n1);

    while(n1<=0){

        printf("Não e possivel calcular fatorial negativo - tente novamente \n");
        
        printf("Digite um numero a seguir: ");
        scanf("%d" , &n1);

    }

    fatorial = calcularFatorial(n1);

    printf("O fatorial de %d é igual a %d\n" , n1 , fatorial);
    system("pause");
    system("cls");
    return 0;
 }