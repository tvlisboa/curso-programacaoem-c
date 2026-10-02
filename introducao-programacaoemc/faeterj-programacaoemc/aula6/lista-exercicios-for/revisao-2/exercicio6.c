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

    int quantidadeNotas = 0;
    double nota;
    double soma , media;

    printf("********************* \n");
    printf("* EXERCICIO - NOTAS * \n");
    printf("********************* \n");
    printf("* Quantas notas deseja calcular ? ");
    scanf("%d" , &quantidadeNotas);

    printf("* A SEGUIR - INFORME AS NOTAS * \n");

    for (int i = 1; i <=quantidadeNotas; i++) {

      printf("Nota: ");
      scanf("%lf" , &nota);

      soma = soma + nota;
      media = soma / i;
    }

    if(media>=7){
      printf("*************************************** \n");
      printf("Media informada %.2lf, é considerada BOA! \n" , media);
      printf("*************************************** \n");
   }else if (media>=6){
      printf("*************************************** \n");
      printf("Media informada %.2lf, é considerada REGULAR! \n" , media);
      printf("*************************************** \n");
   }else{
      printf("*************************************** \n");
      printf("Media informada %.2lf, é considerada RUIM! \n" , media);
      printf("*************************************** \n");
   }
    
    system("pause");
    return 0;
 }