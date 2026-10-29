/**
 * Exercicio - Melhor aluno da turma
 * Crie um algoritmo que receba
 * Quantidade de alunos da turma
 * As notas dos alunos - n1 /  n2 / n3 / n4
 * Calcule a media dos alunos
 * E mostre na tela as seguintes informacoes
 * Nome do aluno com maior media 
 * E sua media
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int qtdAlunos;
    int cont = 1;
    double notas[4];
    double media[4];
    char nomeAluno;

    printf("******************** \n");
    printf("*  EXEMPLO - NOTAS * \n");
    printf("******************** \n");

    printf("* Insira os dados da turma a seguir * \n");
    printf("* Quantidade de alunos? ");
    scanf("%d" , &qtdAlunos);

    while(cont<=qtdAlunos){

        printf("Digite o nome dos alunos a seguir");
        scanf("%s" , nomeAluno);

        /* array para armazenar as notas dos alunos */
        printf("Informe as notas dos alunos a seguir ");

        for(int i = 1 ; i<=4 ; i++){

            printf("Digite a %d nota: \n" , cont);
            scanf("%d\n" , notas[i]);    

        }



        cont++;

    }



    system("pause");
    return 0;
 }