/**
 * Exercicio 6 - Media de uma turma
 * Um professor precisa calcular a média 
 * das notas de uma turma com 10 alunos. 
 * Faça um programa que leia a nota de cada aluno, 
 * calcule a média da turma e mostre o resultado.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    double media;
    double soma = 0;
    double notas;

    printf("*********************** \n");
    printf("* EXERCICIO 6 - MEDIA * \n");
    printf("*********************** \n");

    printf("* INFORME AS NOTAS DOS ALUNOS A SEGUIR * \n");

    for (int i = 1 ; i<=10 ; i++) {

        printf("Digite as notas a seguir: ");
        scanf("%lf" , &notas);

        soma = soma + notas;

    }

         media = soma / 10;

    printf("*********************** \n");
    printf("Media final da turma: %lf\n" , media);
    printf("*********************** \n");
    system("pause");
    return 0;

 }