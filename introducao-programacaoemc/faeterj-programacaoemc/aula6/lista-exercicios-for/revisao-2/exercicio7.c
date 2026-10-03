/**
 * Exercicio 7 - Idade futura + classificação
 * Escreva um programa em C que leia:
 * Nome de uma pessoa;
 * Idade atual.
 * O programa deverá calcular a idade que essa pessoa terá daqui a 10 anos e informar sua classificação atual:
 * Menor de 12 anos → Criança
 * 12 a 17 anos → Adolescente
 * 18 a 59 anos → Adulto
 * 60 anos ou mais → Idoso
 * Ao final, apresente:
 * 
 * Nome : username
 * Idade atual:
 * Idade futura:
 * Classificacao atual:
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nome[100];
    int idade;

    printf("**************************** \n");
    printf("* EXERCICIO - IDADE FUTURA * \n");
    printf("**************************** \n");

    printf("* INSIRA AS INFORMACOES DO USUARIO A SEGUIR * \n");
    printf("* Nome do usuario: ");
    scanf("%s" , nome);

    printf("* Idade do usuario: ");
    scanf("%d" , &idade);

    int idadeFutura = idade + 10;

    /* classificacao atual do usuario */

    if(idade>=60){

        printf("************************** \n");
        printf("Idade atual: %d\n" , idade);
        printf("Idade futura: %d\n" , idadeFutura);
        printf("Usuario informado é IDOSO! \n");
        printf("************************** \n");

    }else if(idade>=18){

        printf("************************** \n");
        printf("Idade atual: %d\n" , idade);
        printf("Idade futura: %d\n" , idadeFutura);
        printf("Usuario informado é ADULTO! \n");
        printf("************************** \n");
    }else if(idade>=12){

        printf("************************** \n");
        printf("Idade atual: %d\n" , idade);
        printf("Idade futura: %d\n" , idadeFutura);
        printf("Usuario informado é ADOLESCENTE! \n");
        printf("************************** \n");
    }else{

        printf("************************** \n");
        printf("Idade atual: %d\n" , idade);
        printf("Idade futura: %d\n" , idadeFutura);
        printf("Usuario informado é CRIANCA! \n");
        printf("************************** \n");
    }

    system("pause");
    return 0;
 }