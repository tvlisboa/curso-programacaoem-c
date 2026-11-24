/**
 * Exemplo 5
 * Solicite ao usuario o nome de 5 alunos
 * Solicite suas 4 notas
 * Calcule sua media
 * Mostre na tela as seguintes informacoes
 * Aluno aprovado >= 7
 * Aluno em recuperacao >=5
 * Aluno reprovado <5
 * Nao aceite notas menores que zero ou maiores que 10
 * Calcule a media da turma e mostre quais alunos estao acima da media
 * E armazene os dados em vetores
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nomes[4][100];
    double notas1[4];
    double notas2[4];
    double notas3[4];
    double notas4[4];
    double media[4];
    int i;

    printf("******************************** \n");
    printf("* EXEMPLO 5 - NOTAS ESCOLARES  * \n");
    printf("******************************** \n");


    printf("INSIRA AS INFORMACOES DOS ALUNOS A SEGUIR \n");

    for(i = 0 ; i<4 ; i++){

        printf("Nome do aluno: ");
        scanf(" %99[^\n]" , nomes[i]);

        printf("Primeira Nota: ");
        scanf("%d" , &notas1[i]);

        printf("Segunda Nota: ");
        scanf("%d" , &notas2[i]);

        printf("Terceira Nota: ");
        scanf("%d" , &notas3[i]);

        printf("Quarta Nota: ");
        scanf("%d" , &notas4[i]);

        media[i] = (notas1[i] + notas2[i] + notas3[i] + notas4[i]) /4;
        
    }

    /**
     * calculo e aprovacao do aluno
     */

     if(media[i] >= 7){

        printf("Alunos aprovados %s , media final %d\n" , nomes[i] , media[i]);

     }else if(media[i] >= 5){

        printf("Alunos em recuperacao %s , media final %d\n" , nomes[i] , media[i]);

     }else{

        printf("Alunos reprovados %s , media final %d\n" , nomes[i] , media[i]);
        
     }

    printf("* NOME DOS ALUNOS INFORMADOS * \n");
    for(i=0 ; i<4 ; i++){

        printf("Aluno %d:  %s, ficou com a media final: %2.lf\n" , i ,  nomes[i] , media[i]);

    }


    return 0;
 }