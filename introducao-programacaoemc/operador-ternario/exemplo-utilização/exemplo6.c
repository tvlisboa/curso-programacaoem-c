/**
 * Classificacao de idade do usuario
 * Solicite o ano de nascimento - ano atual do usuario
 * Valide - ano de nascimento nao pode ser maior que ano atual
 * Calcule a sua idade
 * Classifique utilizando o operador ternario
 * 0 ate 12 - crianca
 * 13 ate 17 - adolescente
 * 18 ate 59 - adulto
 * 60 ou mais - idoso
 * Utilizacao de ternarios aninhados
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int anoNascimento, anoAtual;
    int idadeUsuario;

    printf("****************************** \n");
    printf("*  CALCULO IDADE - TERNARIO  * \n");
    printf("****************************** \n");

    printf("* INSIRA AS INFORMACOES DO USUARIO A SEGUIR * \n");
    printf("* ANO DE NASCIMENTO : ");
    scanf("%d", &anoNascimento);

    printf("* ANO ATUAL : ");
    scanf("%d", &anoAtual);

    /* calculo da idade e validacao */
    idadeUsuario = anoAtual - anoNascimento;

    /* teste de saida de dados */
    printf("********************************************* \n");
    printf("* ANO ATUAL: %d" , anoAtual);
    printf("\n");
    printf("* ANO DE NASCIMENTO: %d" , anoNascimento);
    printf("\n");
    printf("* IDADE DO USUARIO: %d" , idadeUsuario);
    printf("\n");
    printf("********************************************* \n");
    system("pause");
    return 0;
 }
 