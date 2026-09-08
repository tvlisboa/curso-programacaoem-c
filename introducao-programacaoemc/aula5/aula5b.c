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
    printf("* NOME DO MOTORISTA: ");
    scanf("%s", nomeMotorista);

    printf("* ANO DE NASCIMENTO DO MOTORISTA: ");
    scanf("%d", &anoNascimento);

    printf("* ANO ATUAL: ");
    scanf("%d", &anoAtual);

    /* nao aceita dados se o ano nascimento for maior que o ano atual*/
    while (anoNascimento >= anoAtual)
    {
        printf("* OS DADOS INFORMADOS ESTAO INCORRETOS - POR FAVOR TENTE NOVAMENTE *\n");
        printf("* ANO DE NASCIMENTO DO MOTORISTA: ");
        scanf("%d", &anoNascimento);

        printf("* ANO ATUAL: ");
        scanf("%d", &anoAtual);
    }

    idadeMOtorista = (anoAtual - anoNascimento);

    if(idadeMOtorista>=18){
        printf("\n");
        printf("Usuario informado - está apto a dirigir \n");
    }else{
        printf("\n");
        printf("Usuario informado - não está apto a dirigir \n");
    }
    
    /* conversao uppercase */
    for(int i = 0; nomeMotorista[i]!=0; i++){
        nomeMotorista[i] = toupper(nomeMotorista[i]);
    }
  
    /* teste de saida de dados do usuario */
    printf("********************************* \n");
    printf("* NOME DO MOTORISTA: %s\n" , nomeMotorista);
    printf("* ANO DE NASCIMENTO: %d\n", anoNascimento);
    printf("* ANO ATUAL: %d\n", anoAtual);
    printf("* IDADE DO MOTORISTA: %d\n " , idadeMOtorista);
    printf("********************************* \n");
    system("pause");
    return 0;
}
