/**
 * Exemplo - 5 
 * Solicite alguns numeros
 * Verifique quantos sao negativos
 * Utilizando a estrutura do_while
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int quantidade;
    int numero1;
    int contador = 1;
    int totNegativo = 0;

    printf("Exercicio - Numeros negativos \n");
    printf("Deseja contar ate quanto ? ");
    scanf("%d" , &quantidade);

    do{

        printf("Digite a seguir: ");
        scanf("%d" , &numero1);

        if (numero1 < 0) {

            totNegativo = totNegativo + 1;
            
        }
        
        contador++;
    }while(contador<=quantidade);

    printf("Total de numeros negativos: %d\n" , totNegativo);
    system("pause");
    return 0;
 }