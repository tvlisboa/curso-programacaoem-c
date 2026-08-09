/* lendo as informacoes do teclado*/
#include <stdio.h>


int main(){

    char name[50];
    char profissao[100];
    int idade;
    float altura;
    double peso;
    double salario;
    
    /* entrada de dados do usuario */
    printf("Informe seu nome a seguir : ");
    scanf("%49s\n", name);

    printf("Informe a sua idade a seguir : ");
    scanf("%d\n", idade);

    printf("Informe sua altura a seguir : ");
    scanf("%f\n", altura);

    printf("Informe seu peso a seguir : ");
    scanf("%lf\n", peso);

    printf("Profissao: ");
    scanf("%99s\n", profissao);

    printf("Informe o seu salario a seguir: ");
    scanf("%lf\n", salario);


    /* saida de dados do usuario */
    printf("\nNome do usuario : %s\n", name);
    printf("Idade do usuario : %d\n" , idade);
    printf("Altura do usuario : %f\n" , altura);
    printf("Peso do usuario : %lf\n" , peso);
    printf("Profissao informada : %s\n", profissao);
    printf("Salario do usuario: %lf\n" , salario);

    return 0;
}