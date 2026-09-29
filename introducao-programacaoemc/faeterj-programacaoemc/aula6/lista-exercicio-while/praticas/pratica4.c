/**
 * Pratica 4
 * Solicite ao usuario ate que numero deseja contar
 * E o valor do seu incremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int incremento = 1;
    int numero1;
    
    printf("************************* \n");
    printf("*  EXERCICIO INCREMENTO * \n");
    printf("************************* \n");

    printf("Ate quanto deseja contar? ");
    scanf("%d" , &numero1);

    printf("Qual valor do incremento ? ");
    scanf("%d" , &incremento);

    while (contador<=numero1)
    {
        printf("%d\n", contador);
        contador = contador + incremento;
    }
    
    system("pause");
    return 0;
 }


