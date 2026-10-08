/**
 * Exercicio 8
 * Contador de positivos
 * Solicite ao usuario 10 numeros
 * No final informe: Quantidade de numeros positivos
 * Quantidade de numeros negativos
 * Quantidade de numeros neutros
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero;
    int contador = 1;
    int qtdPositivos = 0 , qtdNegativos = 0, qtdNeutros = 0;

    printf("********************************** \n");
    printf("* EXERCICIO - POS - NEG E NEUTRO * \n");
    printf("*  INFORME 10 NUMEROS A SEGUIR   * \n");
    printf("********************************** \n");

    while (contador <=10) {
        printf("Digite: ");
        scanf("%d" , &numero);

        if(numero>1){
            qtdPositivos = qtdPositivos + 1;
        }else if(numero < 0){
            qtdNegativos = qtdNegativos + 1;
        }else{
            qtdNeutros = qtdNeutros + 1;
        }

        contador++;
    }
    printf("Quantidade de numeros positivos: %d\n" , qtdPositivos);
    printf("Quantidade de numeros negativos: %d\n" , qtdNegativos);
    printf("Quantidade de numeros neutros: %d\n" , qtdNeutros);
    system("pause");
    system("cls");
    return 0;
 }