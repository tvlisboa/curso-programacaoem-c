/**
 * Exercicio 1 - Escreva um programa em C que leia o nome de uma pessoa, 
 * sua idade e escreva o nome da pessoa e a idade que ela terá daqui 5 anos. (2,0)
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nome[50];
    int idade;
    int idadeFutura;

    printf("**************************** \n");
    printf("* EXERCICIO - IDADE FUTURA * \n");
    printf("**************************** \n");
    printf("* Informe o nome do usuario: \n");
    scanf("%s" , nome);

    printf("* Idade: ");
    scanf("%d" , &idade);

    idadeFutura = idade + 5;

    printf("************************ \n");
    printf("*   DADOS INFORMADOS   * \n");
    printf("************************ \n");
    printf("* Nome do usuario: %s\n" , nome);
    printf("* Idade atual: %d\n" , idade);
    printf("* Idade futura: %d\n" , idadeFutura);
    system("pause");
    return 0;
 }