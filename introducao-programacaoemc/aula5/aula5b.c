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
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char nomeMotorista[100];
    char placaCarro[9];
    int anoNascimento;
    int anoAtual;
    int idadeMOtorista;

    /* entrada de dados do usuario */
    printf("********************************* \n");
    printf("* SISTEMA DE TRANSITO UNIFICADO * \n");
    printf("********************************* \n");
    printf("\n");
    
    printf("* Insira as informações do motorista a seguir * \n");
    printf("* Nome do motorista: ");
    scanf("%s", nomeMotorista);

    printf("Ano de nascimento do motorista: ");
    scanf("%d", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    /* nao aceita dados se o ano nascimento for maior que o ano atual*/
    while (anoNascimento >= anoAtual)
    {
        printf("Os dados informados estao incorretos - tente novamente \n");
        
        printf("Ano de nascimento do motorista: ");
        scanf("%d", &anoNascimento);

        printf("Ano atual: ");
        scanf("%d", &anoAtual);
    }

    idadeMOtorista = (anoAtual - anoNascimento);

    if(idadeMOtorista>=18){
        printf("Usuario informado - está apto a dirigir \n");
    }else{
        printf("Usuario informado - não está apto a dirigir \n");
    }
    
    /* conversao uppercase */
    for(int i = 0; nomeMotorista[i]!=0; i++){
        nomeMotorista[i] = toupper(nomeMotorista[i]);
    }
  
    /* teste de saida de dados do usuario */
    printf("********************************* \n");
    printf("Nome do motorista: %s\n" , nomeMotorista);
    printf("Ano de nascimento: %d\n", anoNascimento);
    printf("Ano atual: %d\n", anoAtual);
    printf("Idade do motorista: %d\n " , idadeMOtorista);
    printf("********************************* \n");
    system("pause");
    return 0;
}
