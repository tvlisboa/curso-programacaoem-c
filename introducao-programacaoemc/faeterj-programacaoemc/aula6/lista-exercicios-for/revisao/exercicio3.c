/*
 * Faça um programa em C que leia um numero e informe se ele é par ou impar.  
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int n1;

    printf("**************************** \n");
    printf("* EXERCICIO - IMPAR OU PAR * \n");
    printf("**************************** \n");

    printf("* Informe um numero a seguir: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0) {
        printf("Numero informado %d é par. \n" , n1);
    }else{
        printf("Numero informado %d é impar. \n" , n1);
    }

    system("pause");
    return 0;
 }
 