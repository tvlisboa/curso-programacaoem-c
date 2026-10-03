/**
 * Exercicio 1 - Escreva um programa em C que leia: 
 * Nome de uma pessoa, 
 * Sua idade e escreva:
 * Nome da pessoa e a idade que ela terá daqui 5 anos. (2,0)
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nome[50];
    int anoNascimento , anoAtual , idade;
    int idadeFutura;

    printf("**************************** \n");
    printf("* EXERCICIO - IDADE FUTURA * \n");
    printf("**************************** \n");
    printf("* Informe o nome do usuario: ");
    scanf("%s" , nome);

    printf("* Informe ano de nascimento do usuario: ");
    scanf("%d" , &anoNascimento);

    printf("* Ano atual: ");
    scanf("%d" , &anoAtual);

    /* calculo da idade e idade futura */
    idade = anoAtual - anoNascimento;
    idadeFutura = idade + 5;

    printf("************************ \n");
    printf("*   DADOS INFORMADOS   * \n");
    printf("************************ \n");
    printf("* Nome do usuario: %s\n" , nome);
    printf("* Ano de nascimento: %d\n" , anoNascimento);
    printf("* Ano atual: %d\n" , anoAtual);
    printf("* Idade atual: %d\n" , idade);
    printf("* Idade futura: %d\n" , idadeFutura);
    system("pause");
    return 0;
 }