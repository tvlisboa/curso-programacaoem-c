#include<stdio.h>

int main(){

    int numero =10;
    float altura = 1.75;
    double salario = 2750.00;
    char letra ='a';
    char name[50] = "Thiago";

    /* impressoes */
    printf("%d", numero);
    printf("\n");
    printf("%.2f", altura);
    printf("\n");
    printf("%.2lf", salario);
    printf("\n");
    printf("%c", letra);
    printf("\n");
    printf("%s", name);
    return 0;
}