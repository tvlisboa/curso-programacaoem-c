#include <stdio.h>
#include <stdbool.h>

int main(){

    char nome[] = "Thiago";
    int idade = 32;
    float altura = 1.75;
    float peso = 75.0;
    double salario = 2750;
    char sexo = 'M';
    bool casado = false;

    /* saida de dados */
    printf("Nome : %s\n", nome);
    printf("Idade : %d\n", idade);
    printf("Altura : %f\n" , altura);
    printf("Peso : %f\n", peso);
    printf("Salario informado : %lf\n" , salario);
    printf("Sexo : %c\n" , sexo);
    printf("Casado : %d\n" , casado);
    return 0;
}