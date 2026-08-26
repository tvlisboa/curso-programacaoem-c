/*
 * Faca um algoritmo que leia o ano atual e o 
 * ano de nascimento do usuario, 
 * calcule a idade e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int anoAtual;
    int anoNascimento;

    printf("******************************* \n");
    printf("* CALCULO DE IDADE DO USUARIO * \n");
    printf("******************************* \n");

    /* entrada de dados do usuario*/
    printf("Informe o ano atual a seguir:");
    scanf("%d", &anoAtual);

    printf("Informe o ano de nascimento a seguir:");
    scanf("%d", &anoNascimento);

    /* nao aceita dados menores que o ano atual */
    while (anoNascimento > anoAtual){
        printf("Dados informados estao incorretos - tente novamente \n");

        printf("Informe o ano atual a seguir:");
        scanf("%d", &anoAtual);

        printf("Informe o ano de nascimento a seguir:");
        scanf("%d", &anoNascimento);
    }

    /* calculo da idade */
    int idadeUsuario = anoAtual - anoNascimento;

        /* validacao de idade - idoso - adulto - adolescente e crianca*/
        if(idadeUsuario>= 60){
            printf("\nUsuario informado é considerado idoso!");
        }else if(idadeUsuario>=18){
            printf("\nUsuario informado é considerado adulto!");
        }else if(idadeUsuario>=16){
            printf("\nUsuario informado é considerado adolescente!");
        }else{
            printf("\nUsuario informado é considerado criança!");
        }

    /* saida de dados do usuario */
    printf("\nAno de nascimento; %d", anoNascimento);
    printf("\nAno atual informado: %d", anoAtual);
    printf("\nIdade do usuario: %d", idadeUsuario);
    return 0;
 }
 