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

    double notas;
    double media;
    double soma = 0;

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

         /* aproveitamento da turma
          * Acima de 7 = aproveitamento bom
          * Acima de 5 = aproveitamento regular
          * Abaixo de 5 = aproveitamento ruim
         */

         if(media >=7 ){

            printf("*********************** \n");
            printf("Media final da turma: %lf\n" , media);
            printf("Aproveitamento da turma foi bom - Parabéns \n");
            printf("*********************** \n");

         }else if(media >=5){
            
            printf("*********************** \n");
            printf("Media final da turma: %lf\n" , media);
            printf("Aproveitamento da turma foi regular - Precisa ser melhorado \n");
            printf("*********************** \n");

         }else{

            printf("*********************** \n");
            printf("Media final da turma: %lf\n" , media);
            printf("Aproveitamento da turma foi ruim - Precisa ser revisto conteudo \n");
            printf("*********************** \n");

         }

    system("pause");
    return 0;

 }