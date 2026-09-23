/**
 * Faça um algoritmo que leia o nome do aluno 
 * Suas três notas de um aluno.
 * Sua materia e a seguir faca: 
 * O algoritmo deve mostrar o nome, a matéria, a média e a situação
 * (Aprovado, Recuperação ou Reprovado) de cada aluno.
 * Para ser aprovado o aluno deve possuir a média igual ou superior a 6.
 * Para estar reprovado o aluno deve possuir média inferior a 4.
 * Para outra média ele está de recuperação.
 * Nao aceite notas acima de 10 ou abaixo de 0
 * Mostre as informações na tela
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main (){

    char nomeAluno[100];
    char materia[50];
    char mensagem[30];
    double n1, n2, n3;
    double media;

    printf("*************************************** \n");
    printf("* SISTEMA DE CADASTRO DE ALUNOS - SCA * \n");
    printf("*************************************** \n");

    printf("* Insira as informacoes do aluno a seguir * \n");
    printf("* Nome do aluno: ");
    scanf("%99s", nomeAluno);

    printf("* Insira os dados da materia e suas notas * \n");
    printf("* Materia: ");
    scanf("%49s", materia);

    printf("* Insira as notas do aluno a seguir * \n");

    do {

        printf("* Nota 1: ");
        scanf("%lf", &n1);

        printf("* Nota 2: ");
        scanf("%lf", &n2);

        printf("* Nota 3: ");
        scanf("%lf", &n3);

        /* verifica se as notas estao invalidas - caso estejam informa o erro */
        if ((n1 < 0 || n1 > 10)  || 
             (n2 < 0 || n2 > 10) ||
             (n3 < 0 || n3 > 10))
        {
            printf("* Dados informados - estão incorretos, tente novamente! \n");
        }
        
        /* nao aceita nenhuma nota fora do intervalo 0 ate 10 */
    } while ((n1 < 0 || n1 > 10) || 
             (n2 < 0 || n2 > 10) ||
             (n3 < 0 || n3 > 10));

    /* calculo da media */
    media = (n1 + n2 + n3)/ 3;

    if (media>=7.0) {
        strcpy(mensagem , "Aluno informado esta aprovado \n"); 
    }else if (media>=5.0) {
        strcpy(mensagem , "Aluno informado esta em recuperacao \n");
    }else{
        strcpy(mensagem , "Aluno informado esta reprovado \n");
    }

    /* teste de saida de dados */
    printf("*************************************** \n");
    printf("*   DADOS INFORMADOS PELO PROFESSOR   * \n");
    printf("* Nome: %s\n" , nomeAluno);
    printf("* Materia: %s\n\n" , materia);
    printf("*       NOTAS INFORMADAS    * \n");
    printf("* Nota 1: %.2lf\n", n1);
    printf("* Nota 2: %.2lf\n", n2);
    printf("* Nota 3: %.2lf\n", n3);
    printf("* Media final : %.2lf\n", media);
    printf("* Situação do aluno : %s\n", mensagem);
    printf("*************************************** \n");
    system("pause");
    return 0;
 }