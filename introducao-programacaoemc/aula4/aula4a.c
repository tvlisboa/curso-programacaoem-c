/**
 * Utilização da variavel idade
 * Calcule a idade do usuario a seguir
 * Solicite ao usuario ano de nascimento - ano atual
 * Calcule sua idade e verifique na tela
 * Se for maior de 60 anos - idoso
 * Se for maior de 18 anos - adulto
 * Se for maior de 16 anos adolescente
 * Caso ao contrario crianca
 * Nao aceite ano de nascimento ser maior do ano atual
 * Mostre as informações na tela
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int anoNascimento;
    int anoAtual;
    int idade;
    
    printf("************************************* \n");
    printf("*   EXERCICIO  CALCULADORA  IDADE   * \n");
    printf("************************************* \n");

    printf("* INSIRA OS DADOS DO USUARIO ABAIXO * \n");
    printf("* Ano de nascimento : ");
    scanf("%d", &anoNascimento);

    printf("* Ano atual : ");
    scanf("%d", &anoAtual);

    while (anoNascimento>anoAtual) {
        printf("Dados informados estao incorretos - tente novamente \n");

        printf("* Ano de nascimento : ");
        scanf("%d", &anoNascimento);

        printf("* Ano atual : ");
        scanf("%d", &anoAtual);
    }

    idade = anoAtual - anoNascimento;

    /* teste de saida de dados */
    printf("Ano de nascimento %d", anoNascimento);
    printf("\n");
    printf("Ano atual %d", anoAtual);
    printf("\n");

    system("pause");
    return 0;
}
