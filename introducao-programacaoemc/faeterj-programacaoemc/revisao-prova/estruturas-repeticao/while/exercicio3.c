/**
 * Exercicio 3
 * Solicite números ao usuário até que ele digite 0. 
 * Ao final, apresente a soma dos números informados.
 */

 #include <stdio.h>
 #include <stdlib.h>

 /**
  * 
  * REVISAR - EXERCICIO 3
  *  */ 
 int main(){

    int cont = 1;
    int numeros;
    int soma = 0;

    printf("******************************** \n");
    printf("*  EXEMPLO 3 - CONTAR ATE SAIR * \n");
    printf("*      INICIANDO CONTAGEM      * \n");

    do{

        printf("Digite: ");
        scanf("%d" , &numeros);

        soma = soma + numeros;

    }while(cont!=0);

    printf("Total de numeros informados: %d\n" , soma);
    system("pause");
    return 0;
 }