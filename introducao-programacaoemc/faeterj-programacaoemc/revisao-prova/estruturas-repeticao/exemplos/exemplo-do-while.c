#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont = 1;

    printf("Exemplo - while \n");
    printf("Iniciando contagem [...] \n");

    do{

        printf("%d\n" , cont);
        cont++;

    }while(cont <=10);

    printf("Fim da contagem...");

}