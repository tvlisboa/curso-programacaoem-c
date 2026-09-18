/**
 * Situacao do aluno - media escolar
 * Solicite nome do aluno - converta para uppercase
 * Solicite materia cadastrada - converta para uppercase
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
    char materiaAluno[50];
    double nota1, nota2;
    double media;
    
    printf("********************************** \n");
    printf("*   SITUAÇÃO APROVACAO ANUAL     * \n");
    printf("********************************** \n");

    printf("* Insira as informacoes a seguir * \n");
    printf("* Nome do aluno: ");
    scanf("%s", nomeAluno);

    /* conversao para uppercase */
     for (int i = 0; nomeAluno[i] != '\0' ; i++) {
        nomeAluno[i] = toupper(nomeAluno[i]);
     }

     printf("* Materia matriculada: ");
     scanf("%s", materiaAluno);

     /* conversao para uppercase */
     for (int i = 0; materiaAluno[i] !='\0'; i++){
        materiaAluno[i] = toupper(materiaAluno[i]);
     }

    printf("* Notas do aluno * \n");
    printf("* Nota 1: ");
    scanf("%lf", &nota1);

    printf("* Nota 2: ");
    scanf("%lf", &nota2);

    /* implementar validacao - nao aceitar notas menores que 0 ou maiores que 10 */
    while ((nota1<0 || nota1>10) || (nota2<0 || nota2>10)) {
        printf("* Dados informados são invalidos - tente novamente * \n");
        printf("* Notas do aluno * \n");
        printf("* Nota 1: ");
        scanf("%lf" , &nota1);

        printf("* Nota 2: ");
        scanf("%lf" , &nota2);
    }

    /* fazer calculo da media do aluno */
    media = (nota1 + nota2) /2;

    media >= 7 ? printf("Aluno informado, esta aprovado. \n"):
    media >= 5 ? printf("Aluno informado, esta em recuperacao.\n") :
                 printf("Aluno informado, esta reprovado.\n");
     
    /* teste de saida de dados */
    printf("********************************** \n");
    printf("Nome do aluno : %s\n", nomeAluno);
    printf("Materia matriculada: %s\n", materiaAluno);
    printf("Notas informadas \n");
    printf("Nota 1 : %.2lf\n" , nota1);
    printf("Nota 2 : %.2lf\n" , nota2);
    printf("* Media final do aluno : %.2lf\n" , media);
    printf("********************************** \n");
    system("pause");
    return 0;
 }
 