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
 #include <ctype.h>                 //responsável por converter os dados string em uppercase

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

    /* implementar validacao - nao aceitar notas menores que 0 ou maiores que 10 */
    while ((nota1<0 || nota1>10) && (nota2<0 || nota2>10)) {
        printf("* Dados informados são invalidos - tente novamente * \n");
        printf("* Notas do aluno * \n");
        printf("* Nota 1: ");
        scanf("%lf" , &nota1);

        printf("* Nota 2: ");
        scanf("%lf" , &nota2);
    }

    /* fazer calculo da media do aluno */
    media = (nota1 + nota2) /2;

    
    /**
     * converter nome do usuario para uppercase 
       for (int i= 0; i < count; i++){
       }
     */
    
    
    
    

    /* teste de saida de dados */
    printf("********************************** \n");
    printf("Nome do aluno : %s\n", nomeAluno);
    printf("Notas informadas \n");
    printf("Nota 1 : %.2lf\n" , nota1);
    printf("Nota 2 : %.2lf\n" , nota2);
    printf("* Media final do aluno : %.2lf" , media);
    system("pause");
    return 0;
 }
 