/**
 * Faça um algoritmo que leia o nome do aluno 
 * Suas três notas de um aluno.
 * Sua materia e a seguir faca: 
 * O algoritmo deve mostrar o nome, a matéria, a média e a situação
 * (Aprovado, Recuperação ou Reprovado) de cada aluno.
 * Para ser aprovado o aluno deve possuir a média igual ou superior a 6.
 * Para estar reprovado o aluno deve possuir média inferior a 4.
 * Para outra média ele está de recuperação.
 * Nao aceite notas acima de 10 ou abaixo de 0
 * Mostre as informações na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    char nomeAluno[100];
    char materia[50];

    printf("*************************************** \n");
    printf("* SISTEMA DE CADASTRO DE ALUNOS - SCA * \n");
    printf("*************************************** \n");

    printf("* Insira as informacoes do aluno a seguir * \n");
    printf("* Nome do aluno: ");
    scanf("%s", nomeAluno);

    printf("* Insira os dados da materia e suas notas * \n");
    printf("* Materia: ");
    scanf("%s", materia);




    /* teste de saida de dados */
    printf("** Dados informados pelo professor ** \n");
    printf("* Nome do aluno: %s\n" , nomeAluno);
    printf("* Materia: %s\n" , materia);
    system("pause");
    return 0;
 }