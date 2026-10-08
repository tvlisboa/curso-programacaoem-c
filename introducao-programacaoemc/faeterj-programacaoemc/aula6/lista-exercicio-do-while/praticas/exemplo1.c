/**
 * Exemplo 1 - Conte ate 10 utilizando a estrutura do_while
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int contador = 1;

    do {

        printf("%d\n" , contador);
        contador++;

    } while (contador<10);
    
    system("pause");
    system("cls");
    return 0;
 }
 