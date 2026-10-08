/**
 * Exercicio 1 - Funcao somar
 * Crie uma funcao chamada - somar
 * A funcao deve receber dois numeros inteiros - int somar (int a , int b)
 * A funcao deve receber dois numeros inteiros e fazer a soma
 * Mostre o resultado na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 /**
  * Declaracao de funcoes e parametros 
  */

  double somar(double n1 , double n2){
    return(n1 + n2);
  }

 int main(){

    double n1;
    double n2;
    double resultado;

    printf("******************************************* \n");
    printf("*         EXERCICIO 1 - SOMATORIO         * \n");
    printf("*      INSIRA DOIS NUMEROS A SEGUIR       * \n");
    printf("* Numero 1: ");
    scanf("%lf" , &n1);

    printf("* Numero 2: ");
    scanf("%lf" , &n2);

    /* nao aceita numeros menores que zero */
    while (n1<0 || n2<0) {
        printf("Dados informados invalidos - tente novamente \n");
        
        printf("* Numero 1: ");
        scanf("%lf" , &n1);

        printf("* Numero 2: ");
        scanf("%lf" , &n2);
    }
    

    resultado = somar(n1 , n2);

    printf("* Resultado: %.1lf\n" , resultado);
    system("pause");
    system("cls");
    return 0;
 }