/*
 * Crie um algoritmo onde informe 
 * Nome do aluno
 * Nome da materia
 * Suas respectivas notas
 * Calcule sua media e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {

    char nome[100];
    char materia[100];
    double n1, n2, n3, n4;
    double media;

    printf("************************************** \n");
    printf("* Informe os dados do aluno a seguir * \n");
    printf("* Nome do aluno: ");
    scanf("%s", nome);

    printf("* Nome da materia: ");
    scanf("%s", materia);

    /* utilizacao do do_while para validacao das notas */
    do {
        printf("* Informe as 4 notas do aluno: \n");

        printf("* Nota 1: ");
        scanf("%lf", &n1);

        printf("* Nota 2: ");
        scanf("%lf", &n2);

        printf("* Nota 3: ");
        scanf("%lf", &n3);

        printf("* Nota 4: ");
        scanf("%lf", &n4);

        if((n1 < 0 || n1 > 10) ||
           (n2 < 0 || n2 > 10) ||
           (n3 < 0 || n3 > 10) ||
           (n4 < 0 || n4 > 10)) {

            printf("Notas informas - sao invalidas. Tente novamente \n");

           }

    } while ((n1 < 0 || n1 > 10) ||
             (n2 < 0 || n2 > 10) ||
             (n3 < 0 || n3 > 10) ||
             (n4 < 0 || n4 > 10));

    /* calculo da media */
    media = (n1 + n2 + n3 + n4)/4;

    /* validacao de aprovacao */
    if(media>=7){
        printf("Aluno aprovado com sucesso - Parabens! %.2lf", media);
    }else if(media>=5){
        printf("Aluno em recuperacao - Precisa estudar mais! %.2lf", media);
    }else{
        printf("Aluno reprovado - Nos vemos ano que vem! %.2lf", media);
    }

    printf("\n");
    printf("********************************* \n");
    printf("* Dados informados pelo usuario *\n");
    printf("* Nome do usuario: %s", nome);
    printf("\n* Nome da materia: %s", materia);
    printf("\n* Nota 1: %.2lf\n", n1);
    printf("* Nota 2: %.2lf\n", n2);
    printf("* Nota 3: %.2lf\n", n3);
    printf("* Nota 4: %.2lf\n", n4);
    printf("* Media final: %.2lf\n", media);
    printf("********************************* \n");
    return 0;
 }
 