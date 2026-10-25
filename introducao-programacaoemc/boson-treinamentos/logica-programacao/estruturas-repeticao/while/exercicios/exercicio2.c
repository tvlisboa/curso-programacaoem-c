/**
 * Exercicio 2 - While
 * Melhor aluno da turma
 * Pergunte quantos alunos a turma tem
 * Solicite seu nome
 * Solicite as suas 4 notas - array
 * Calcule a media e mostre no final a melhor media e o nome do aluno
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int qtdAlunos;
    int cont = 1;
    char nomeALuno[100];
    double notas[4];
    double soma = 0;
    double media;

    printf("****************************** \n");
    printf("* EXERCICIO - MELHOR ALUNO   * \n");
    printf("****************************** \n");

    printf("Numero de alunos da turma: ");
    scanf("%d" , &qtdAlunos);

    printf("Digite as informações a seguir * \n");

        while(cont <=  qtdAlunos){

            printf("Digite nome do aluno: ");
            scanf("%s" , nomeALuno);

            printf("Digite as 4 notas do aluno a seguir.");

            for(int i = 1 ; i<=4 ; i++){

                printf("Nota 1:");
                scanf("%lf", &notas);

                soma = soma  + notas[i];
                media = soma / notas[i];

            }



        }





    system("pause");
    return 0;
 }