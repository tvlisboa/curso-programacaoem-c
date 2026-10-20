/**
 * Exemplo - 4
 * Solicite ao usuario 10 numeros distintos
 * E verifique quantos entao entre 1 e 10
 * Faca seu total e mostre na tela
 */

 #include <stdlib.h>
 #include <stdio.h>

 int main(){

    int n1;
    int tot10 = 0;
    int somaImpar = 0;

    printf(" Informe 10 numeros a seguir \n");

    for (int i = 1 ; i<=10 ; i++) {
        
        printf("Digite: ");
        scanf("%d" , &n1);

        if ((n1>=1) && (n1<=10)) {

            tot10 = tot10 + 1;

            if (n1 % 2 == 1) {
                
                somaImpar = somaImpar + n1;

            }
            
        }
        
    }

    printf("Soma dos numeros impares: %d\n" , somaImpar);
    printf("Total de numeros entre 1 e 10: %d\n" , tot10);
    system("pause");
    return 0;
 }