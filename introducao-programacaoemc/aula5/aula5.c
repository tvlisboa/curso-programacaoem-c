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

    float n1, n2, n3, n4;
    float media;

    /* dados do aluno */
    printf("Informe as 4 notas do aluno a seguir: \n");
    printf("Nota 1: ");
    scanf("%f" , &n1);

    printf("Nota 2: ");
    scanf("%f" , &n2);

    printf("Nota 3: ");
    scanf("%f" , &n3);

    printf("Nota 4: ");
    scanf("%f" , &n4);

    media = (n1 + n2 + n3 + n4) /4;
    printf("Media final do aluno: %f\n" , media);

    /* verificar a media - aprovado ou reprovado */
    if(media>=7){
        printf("\nAluno aprovado. \n");
    }else{
        printf("Aluno reprovado. \n");
    }

    system("pause");
    return 0;
}