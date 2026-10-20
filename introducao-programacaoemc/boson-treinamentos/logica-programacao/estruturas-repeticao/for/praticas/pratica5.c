/**
 * Exemplo 5 - Combinacoes
 * Utilizacao de for aninhado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador1;
    int contador2;
    int contador3;

        for(contador1 = 1 ; contador1<=3 ;contador1++){

            for(contador2 = 1 ; contador2 <=3 ; contador2++){

                for (contador3 = 1 ; contador3 <=3 ; contador3++) {

                    printf("%d %d\n" , contador1 , contador2);

                }
            }
        }

    system("pause");
    system("cls");
    return 0;
 }