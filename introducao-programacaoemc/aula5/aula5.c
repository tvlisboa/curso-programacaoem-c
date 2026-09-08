/*
* solicite ao usuario para entrar com 4 notas
* calcule a sua media
* e utilize if - else para
* media >=7 aprovado
* media <7 reprovado
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4;                                           //declaracao de variaveis na mesma linha
    float media;

    /* dados do aluno */
    printf("Informe as 4 notas do aluno a seguir: \n");
        printf("Nota 1: ");
        scanf("%f" , &n1);                                          //utilização do "%f" - pois estamos lidando com um tipo de variavel float

        printf("Nota 2: ");
        scanf("%f" , &n2);

        printf("Nota 3: ");
        scanf("%f" , &n3);

        printf("Nota 4: ");
        scanf("%f" , &n4);

    media = (n1 + n2 + n3 + n4) /4;

    printf("Media final do aluno: %.2f\n" , media);                 // utilizando %.2f\n - formata com duas casas decimais apos a virgula - como usamos o tipo de variavel float - precisamos utilizar "%.2f\n"

        /* verificar a media - aprovado - recuperacao ou reprovado */
        if(media>=7){
            printf("\nAluno aprovado. \n");
        }else if(media>=5){
            printf("Aluno em recuperacao. \n");
        }else{
            printf("Aluno em reprovado. \n");
        }

    system("pause");
    return 0;
}