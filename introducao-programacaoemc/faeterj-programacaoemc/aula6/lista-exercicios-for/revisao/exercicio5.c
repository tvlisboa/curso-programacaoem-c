/**
 * Em uma competição de natação, as categorias são determinadas segundo a idade dos competidores.
 * Categorias:
 * Infantil A: até 4 anos;
 * Infantil B: 5 e 6 anos;
 * Infantil C: 7 a 10 anos;
 * Juvenil A: 11 a 13 anos;
 * Juvenil B: 14 a 17 anos;
 * Sênior: 18 ou mais anos.
 * Escreva um algoritmo completo para apresentar a categoria de um nadador dada sua idade.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int idadeCompetidor;

    printf("************************************************* \n");
    printf("*             COMPETICAO CORPO E AGUA           * \n");
    printf("* INSIRA AS INFORMACOES DOS COMPETIDORES ABAIXO * \n");
    printf("************************************************* \n");

    printf("* IDADE DO COMPETIDOR: ");
    scanf("%d", idadeCompetidor);
    

    /* teste de saida */
    printf("* Idade do competidor: %d\n" , idadeCompetidor);
    printf("* Categoria: %s\n");
    system("pause");
    return 0;
 }
 