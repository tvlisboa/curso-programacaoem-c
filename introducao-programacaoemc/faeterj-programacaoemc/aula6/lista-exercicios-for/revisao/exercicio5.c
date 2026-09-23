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
 #include <string.h>

 int main(int argc, char const *argv[])
 {

    int idadeCompetidor;
    char mensagem[50];

    printf("************************************************* \n");
    printf("*             COMPETICAO CORPO E AGUA           * \n");
    printf("* INSIRA AS INFORMACOES DOS COMPETIDORES ABAIXO * \n");
    printf("************************************************* \n");

    printf("* IDADE DO COMPETIDOR: ");
    scanf("%d", idadeCompetidor);

    if(idadeCompetidor >=18){
        strcpy(mensagem , "Sênior. \n");
    }else if (idadeCompetidor >=14) {
        strcpy(mensagem , "Juvenil B. \n");
    }else if(idadeCompetidor >= 11){
        strcpy(mensagem , "Juvenil A. \n");
    }else if(idadeCompetidor >=7){
        strcpy(mensagem , "Infantil C. \n");
    }else if(idadeCompetidor >=5){
        strcpy(mensagem , "Infantil B. \n");
    }else{
        strcpy(mensagem , "Infantil A. \n");
    }
    
    
    /* teste de saida */
    printf("* Idade do competidor: %d\n" , idadeCompetidor);
    printf("* Categoria: %s\n");
    system("pause");
    return 0;
 }
 