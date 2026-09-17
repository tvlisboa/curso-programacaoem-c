/**
 * Situacao do aluno
 * Solicite nome do aluno
 * Nota 1 e nota 2
 * Utilizando o operador ternario - verifique
 * Media acima >= 7 - aprovado
 * Media acima >= 5 - recuperacao
 * Media abaixo <5 - reprovado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    char nomeAluno[100];
    double nota1, nota2;
    double media;
    
    printf("********************************** \n");
    printf("*   SITUAÇÃO APROVACAO ANUAL     * \n");
    printf("********************************** \n");

    printf("* Insira as informacoes a seguir * \n");
    printf("* Nome do aluno: ");
    scanf("%s", nomeAluno);

    printf("* Notas do aluno * \n");
    printf("* Nota 1: ");
    scanf("%lf", &nota1);

    printf("* Notas do aluno * \n");
    printf("* Nota 2: ");
    scanf("%lf", &nota2);

    /* converter nome do usuario para uppercase */
    /* fazer calculo da media do aluno */
    /* implementar validacao - nao aceitar notas menores que 0 ou maiores que 10 */

    /* teste de saida de dados */
    printf("********************************** \n");
    printf("Nome do aluno : %s\n", nomeAluno);
    printf("Notas informadas \n");
    printf("Nota 1 : %2.lf\n" , nota1);
    printf("Nota 2 : %2.lf\n" , nota2);
    system("pause");
    return 0;
 }
 