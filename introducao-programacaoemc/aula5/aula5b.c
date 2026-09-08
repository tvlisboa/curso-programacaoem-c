/*
* Crie um algoritmo onde verifique a idade do usuario
* Solicite o nome do usuario
* ano de nascimento - ano atual
* calcule sua idade e mostre na tela
* apto e inapto a dirigir
* nao aceite ano de nascimento maior que o ano atual
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char name[100];
    char placaCarro[9];
    int anoNascimento;
    int anoAtual;
    int idadeUsuario;

    /* entrada de dados do usuario */
    printf("********************************* \n");
    printf("* SISTEMA DE TRANSITO UNIFICADO * \n");
    printf("********************************* \n");
    printf("\n");
    
    printf("* Insira as informações do motorista a seguir * \n");
    printf("* Nome do motorista: ");
    scanf("%s", name);

    printf("Ano de nascimento do motorista: ");
    scanf("%d", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    while (anoNascimento >= anoAtual)
    {
        printf("Os dados informados estao incorretos - tente novamente \n");
        
        printf("Ano de nascimento do motorista: ");
        scanf("%d", &anoNascimento);

        printf("Ano atual: ");
        scanf("%d", &anoAtual);
    }
    

    



    /* teste de saida de dados do usuario */
    printf("Nome do motorista: %s\n" , name);
    printf("Ano de nascimento: %d\n", anoNascimento);
    printf("Ano atual: %d\n", anoAtual);
    system("pause");
    return 0;
}
