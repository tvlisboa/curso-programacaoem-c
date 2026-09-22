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
    printf("* INSIRA OS DADOS DO USUARIO A SEGUIR *\n");
    printf("* ANO ATUAL: ");
    scanf("%d", &anoAtual);

    printf("* ANO DE NASCIMENTO: ");
    scanf("%d", &anoNascimento);

    /* nao aceita dados menores que o ano atual */
    while (anoNascimento > anoAtual){
        printf("* DADOS INFORMADOS INCORRETOS - TENTE NOVAMENTE * \n");
        printf("* INSIRA OS DADOS DO USUARIO A SEGUIR *\n");

        printf("* ANO ATUAL: ");
        scanf("%d", &anoAtual);

         printf("* ANO DE NASCIMENTO: ");
        scanf("%d", &anoNascimento);
    }

    /* calculo da idade */
    int idadeUsuario = anoAtual - anoNascimento;

    /* utilizacao do ternario - substituicao do if-else aninhado */
    printf("%s" , 
    idadeUsuario >= 60 ? "Usuario informado é Idoso !" :
    idadeUsuario >= 18 ? "Usuario informado é Adulto !" :
    idadeUsuario >= 16 ? "Usuario informado é Adolescente." : "Usuario informado é Crianca !");

    /* saida de dados do usuario */
    printf("\n*******************************");
    printf("\nAno de nascimento: %d", anoNascimento);
    printf("\nAno atual informado: %d", anoAtual);
    printf("\nIdade do usuario: %d", idadeUsuario);
    printf("\n*******************************");
    return 0;
 }
 