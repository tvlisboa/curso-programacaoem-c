/**
 * Exemplo 1
 * Utilizacao de matriz
 * Preencha uma matriz 3x3 com valores 
 * Informados pelo usuario
 */

 /* rever conteudo de vetores e matrizes  */
 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int mat1[3][3];
    int line, column;

    for(line = 0 ; line <3 ; line++){

        for(column = 0 ; column <3 ; column++ ){

            printf("Insira um valor: \n");
            scanf("%d\n", &mat1[line][column]);

        }

    }

    system("pause");
    return 0;
 }