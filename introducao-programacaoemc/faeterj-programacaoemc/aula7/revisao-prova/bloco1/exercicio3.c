/**
 * Exercicio 3
 * Aprovacao do aluno
 * Leia o nome do aluno
 * Solicite duas notas - calcule sua media e mostre na tela
 * Se for maior que 7 = aprovado
 * Se for maior que 5 = recuperacao
 * Se nao reprovado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nome[100];
    double nota1, nota2;
    double media;

    printf("******************************** \n");
    printf("*     EXERCICIO - APROVACAO    * \n");
    printf("* INSIRA AS INFORMACOES ABAIXO * \n");
    printf("******************************** \n");

    printf("Nome do aluno: ");
    scanf("%s" , nome);

    printf("Notas do aluno a seguir. \n");
    printf("Nota 1: ");
    scanf("%lf" , &nota1);

    printf("Nota 2: ");
    scanf("%lf" , &nota2);

    media = (nota1 + nota2)/2;

                if(media>=7){
                    printf("Aluno aprovado - Parabens! \n");
                    printf("Media atingida: %.2lf\n" , media);
                }else if(media>=5){
                    printf("Aluno em recuperacao - Precisa estudar mais! \n");
                    printf("Media atingida: %.2lf\n" , media);
                }else{
                    printf("Aluno Reprovado - Burrao! \n");
                    printf("Media atingida: %.2lf\n" , media);
                }

    system("pause");
    return 0;
 }