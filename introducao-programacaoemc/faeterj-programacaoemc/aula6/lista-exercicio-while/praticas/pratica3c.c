/**
 * Pratica 3 - Contador
 * Solicite ao usuario as seguintes informacoes
 * Ate quanto deseja contar
 * Qual valor do incremente
 * E qual e o inicio da contagem
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int n1;
    int incremento;
    int inicio;

    printf("************************* \n");
    printf("* PRATICA 3 - CONTAGENS * \n");
    printf("************************* \n");
    printf("* Qual o inicio da contagem? ");
    scanf("%d" , &inicio);

    printf("* Ate quanto deseja contar? ");
    scanf("%d" , &n1);

    printf("* Qual valor do incremento? ");
    scanf("%d" , &incremento);

    while (inicio<=n1) {
        printf("%d\n" , inicio);
        inicio = inicio + incremento; 
    }
    
    system("pause");
    return 0;
 }