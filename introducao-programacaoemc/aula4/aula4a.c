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

    while (anoAtual<anoNascimento) {
        printf("Dados informados estao incorretos - tente novamente \n");

        printf("* Ano de nascimento : ");
        scanf("%d", &anoNascimento);

        printf("* Ano atual : ");
        scanf("%d", &anoAtual);
    }

    idade = anoAtual - anoNascimento;

    if (idade>=60) {
        printf("Ano de nascimento do usuario: %d", anoNascimento);
        printf("\n");
        printf("Ano atual: %d", anoAtual);
        printf("\n");
        printf("Idade do usuário: %d", idade);
        printf("\n");
        printf("Usuário informado é idoso \n");
    }else if(idade>=18){
        printf("Ano de nascimento do usuario: %d", anoNascimento);
        printf("\n");
        printf("Ano atual: %d", anoAtual);
        printf("\n");
        printf("Idade do usuário: %d", idade);
        printf("\n");
        printf("Usuário informado é adulto \n");
    }else if(idade>=16){
        printf("Ano de nascimento do usuario: %d", anoNascimento);
        printf("\n");
        printf("Ano atual: %d", anoAtual);
        printf("\n");
        printf("Idade do usuário: %d", idade);
        printf("\n");
        printf("Usuário informado é adolescente \n");
    }else{
        printf("Ano de nascimento do usuario: %d", anoNascimento);
        printf("\n");
        printf("Ano atual: %d", anoAtual);
        printf("\n");
        printf("Idade do usuário: %d", idade);
        printf("\n");
        printf("Usuário informado é crianca \n");
    }

    system("pause");
    return 0;
}
