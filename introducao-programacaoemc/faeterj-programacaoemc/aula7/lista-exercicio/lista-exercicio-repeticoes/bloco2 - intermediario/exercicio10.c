/**
 * Exercicio 10 - Pesquisa de satisfação
 * Uma empresa realizou uma pesquisa com 20 clientes. 
 * Cada cliente atribuiu uma nota de 1 a 5 para o atendimento. 
 * Faça um programa que leia as notas e informe quantos clientes 
 * deram nota 5 e quantos deram nota menor ou igual a 3.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int nota = 0;
    int totalNotas = 0;
    int totalMaior = 0;
    int totalMenor = 0;

    printf("************************************** \n");
    printf("* EXERCICIO 10 - PESQUISA SATISFACAO * \n");
    printf("************************************** \n");
    printf("*   Insira as informacoes abaixo     * \n");
    printf("* Informe a avalicao entre 1 e 5 a seguir * \n");


    /* numero de entradas */
    for (int i = 1 ; i <=20 ; i++) {

        printf("Digite: ");
        scanf("%d", &nota);
        
        if(nota>=5){

            totalMaior = totalMaior + 1;

        }else if(nota <= 3){

            totalMenor = totalMenor + 1;

        }

    }

    totalNotas = totalMaior + totalMenor;
    
    printf("************************************** \n");
    printf("Avaliação acima de 5: %d\n" , totalMaior);
    printf("Avaliacao abaixo de 3: %d\n" , totalMenor);
    printf("Total avaliacoes: %d\n" , totalNotas);
    printf("************************************** \n");
    system("pause");
    return 0;
 }

