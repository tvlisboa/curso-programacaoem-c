/**
 * Exemplo 4
 * Utilizando funcao
 * Calcule a forma de fibonacci 
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

    int i;
    int t1;
    int t2;
    int t3;
 
int calculoFibonacci(int n1, int n2){

    int n3;

    n3 = n1 + n2;
    printf("%d\n" , n3);

    n1 = n2;
    n2 = n3;

    return n3;

}

 int main(){

    printf("************************* \n");
    printf("* EXEMPLO 4 - FIBONACCI * \n");
    printf("************************* \n");

    t1 = 0;
    printf("%d\n" , t1);

    t2 = 1;
    printf("%d\n" , t2);

    for(i = 3 ; i<=10 ; i++){

        t3 = calculoFibonacci(t1 , t2);
        printf("%d\n" , t3);

    }

    system("pause");
    return 0;
 }