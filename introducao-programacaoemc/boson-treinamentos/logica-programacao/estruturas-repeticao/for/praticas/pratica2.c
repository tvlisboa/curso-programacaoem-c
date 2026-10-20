/**
 * Exemplo 2 
 * Solicite ao usuario 5 numeros
 * Faca sua soma e mostre o resultado na tela
 */

 #include <stdio.h>
 #include <stdlib.h>
 

 int main(){

    int n1;
    int soma = 0;

    printf("Digite a seguir 5 numeros inteiros \n");

    for (int i = 1 ; i<=5 ; i++) {
        printf("Digite: ");
        scanf("%d" , &n1);

        soma = soma+ n1;
    }
    
    printf("Soma dos numeros informados: %d\n" , soma);
    system("pause");
    system("cls");
    return 0;
 }