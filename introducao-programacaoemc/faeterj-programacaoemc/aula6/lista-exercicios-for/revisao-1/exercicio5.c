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
    int opcao;
    char mensagem[50];

    printf("****************************************************** \n");
    printf("*                COMPETICAO CORPO E AGUA             * \n");
    printf("*   INSIRA AS INFORMACOES DOS COMPETIDORES ABAIXO    * \n");
    printf("****************************************************** \n");

    do {
        printf("* Informe a idade: ");
        scanf("%d", &idadeCompetidor);

        if(idadeCompetidor >=18){
        strcpy(mensagem , "Categoria selecionada: Sênior. \n");
        }
            else if (idadeCompetidor >=14) {
            strcpy(mensagem , "Categoria selecionada: Juvenil B. \n");
        }
            else if(idadeCompetidor >= 11){
            strcpy(mensagem , "Categoria selecionada: Juvenil A. \n");
        }
            else if(idadeCompetidor >=7){
            strcpy(mensagem , "Categoria selecionada: Infantil C. \n");
        }
            else if(idadeCompetidor >=5){
            strcpy(mensagem , "Categoria selecionada: Infantil B. \n");
        }
            else{
            strcpy(mensagem , "Categoria selecionada: Infantil A. \n");
        }

        printf("* Idade do competidor: %d\n" , idadeCompetidor);
        printf("* Categoria selecionada: %s\n", mensagem);

        printf("* PARA SAIR - APERTE 0 * \n");
        scanf("%d", &opcao);

    } while (opcao!=0);
    
    printf("* FIM DO ALGORITMO * \n");
    system("pause");
    return 0;
 }
 