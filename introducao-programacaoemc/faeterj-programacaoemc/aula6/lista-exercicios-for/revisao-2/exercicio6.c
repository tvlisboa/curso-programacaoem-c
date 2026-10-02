/**
 * Exercicio 6 - Faça um programa em C 
 * Que leia as notas de uma turma de 15 alunos. 
 * Ao final informe a media da turma e se a turma é:
 * Boa > 7
 * Regular  =<7 e >=6 
 * Ruim <6
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    double nota;
    double soma , media;

    printf("********************* \n");
    printf("* EXERCICIO - NOTAS * \n");
    printf("********************* \n");
    printf("* INSIRA AS NOTAS DO ALUNO A SEGUIR * \n");

    for (int i = 1; i <=4; i++) {

      printf("Nota: ");
      scanf("%lf" , &nota);

      soma = soma + nota;
      media = soma / i;
    }

    if(media>=7){
      printf("*************************************** \n");
      printf("Media informada %.lf, é considerada BOA! \n" , media);
      printf("*************************************** \n");
   }else if (media>=6){
      printf("*************************************** \n");
      printf("Media informada %.lf, é considerada REGULAR! \n" , media);
      printf("*************************************** \n");
   }else{
      printf("*************************************** \n");
      printf("Media informada %.lf, é considerada RUIM! \n" , media);
      printf("*************************************** \n");
   }
    
    system("pause");
    return 0;
 }