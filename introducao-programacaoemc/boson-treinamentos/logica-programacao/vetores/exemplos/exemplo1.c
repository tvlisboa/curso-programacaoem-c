/**
 * Exemplo 1 - Vetor ou array em c
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    /**
     * Exemplo de vetores
     * 1 Vetor de 5 posicao do tipo inteiro
     * 1 Vetor de 5 posicao com 10 caracteres cada
     * Para utilização de vetores - devemos usar o for
     */

    int idade[5] = {
        32,
        24,
        14,
        10,
        9,
    };

    for(int i = 0 ; i<=4 ; i ++){

        printf("Idade selecionada: %d\n: " , idade[i]);

    }

    char frutas[5][10] = {
        
        "Mamao",
        "Limao",
        "Abacate",
        "Morango",
        "Tangerina",
        
    };

    for(int i = 0 ; i<=4 ; i++){

        printf("Frutas: %s\n" , frutas[i]);
    }

    char paises[10][100] ={

        "Estados Unidos da Ámerica",
        "Brasil",
        "Alemanha",
        "Bolivia",
        "Japao",
        "China",
        "Tailandia",
        "Nova Zelandia",
        "Espanha",
        "Argentina",
    };

    for(int i = 0 ; i<=9 ; i++){

        printf("Nome do pais: %s\n" , paises[i]);
        
    }

    system("pause");
    return 0;
 }