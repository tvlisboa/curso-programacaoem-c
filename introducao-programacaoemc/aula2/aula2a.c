#include <stdio.h>
#include <stdlib.h>

/* biblioteca para configuracao de idioma e acentuacao - caso necessario */
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    printf("Teste de acentuação - Bibliotecas \n");
    system("cls");
    printf("Primeiras aulas - introducao a linguagem C");
    system("pause");
    return 0;
}
