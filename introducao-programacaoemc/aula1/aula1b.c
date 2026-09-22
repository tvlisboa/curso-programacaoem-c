#include <stdio.h>
#include <stdlib.h>

/* solicite ao usuario dois numeros inteiros 
 * faca as seguintes acoes
 * soma - subtracao - multiplicacao - divisao
 * Mostre as informacoes na tela
*/

int main(int argc, char const *argv[])
{
    int num1 , num2;

    printf("********************************* \n");
    printf("* INTRODUCAO A PROGRAMACAO EM C * \n");
    printf("********************************* \n");

    printf("* INFORME DOIS NUMEROS A SEGUIR * \n");
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    /* funcoes matematicas basicas */
    int soma = (num1 + num2);
    int subracao = (num1 - num2);
    int divisao = (num1 / num2);
    int multiplicacao = (num1 * num2);
    int resto = (num1 % num2);

    /* teste de saida de dados */
    printf("********************************* \n");
    printf("Numeros informados pelo usuario: \n");
    printf("Numero 1: %d" , num1);
    printf("\n");
    printf("Numero 2: %d" , num2);
    printf("\n");
    printf("********************************* \n");
    printf("********************************* \n");
    printf("* FUNCOES MATEMATICAS BASICAS * \n");
    printf("* Soma: %d" , soma);
    printf("\n");
    printf("* Subtracao: %d" , subracao);
    printf("\n");
    printf("* Multiplicacao: %d" , multiplicacao);
    printf("\n");
    printf("* Divisao: %d" , divisao);
    printf("\n");
    printf("* Resto: %d" , resto);
    printf("\n");
    system("pause");
    return 0;
}
