/**
 * Exercicio 2 - Escreva um programa em c para ler o 
 * Número total de eleitores de um município, 
 * Números de votos brancos
 * Numeros de votos nulos
 * Numeros de votos válidos. 
 * Calcular e escrever o percentual que cada um representa em relação ao total de eleitores. (2,0)
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int totEleitores;
    int votosBrancos;
    int votosNulos;
    int votosValidos;

    printf("********************************** \n");
    printf("*       EXERCICIO - VOTACAO      * \n");
    printf("********************************** \n");

    printf("* INSIRA AS INFORMACOES A SEGUIR * \n");
    printf("* Total de eleitores: ");
    scanf("%d" , &totEleitores);

    printf("* Total de votos em branco: ");
    scanf("%d" , &votosBrancos);

    printf("* Total de votos nulos: ");
    scanf("%d" , &votosNulos);

    votosValidos = totEleitores - votosBrancos - votosNulos;

    /* calculo de porcentagem*/
    double porcentValidos = ((double) votosValidos / totEleitores) * 100;
    double porcentBrancos = ((double)votosBrancos /totEleitores) * 100;
    double porcentNulos = ((double)votosNulos /totEleitores) * 100;

    /* teste de saida de dados*/
    printf("********************************** \n");
    printf("*  DADOS INFORMADOS PELO ELEITOR * \n");
    printf("Total de eleitores: %d\n" , totEleitores);
    printf("Total de votos brancos: %d\n" , votosBrancos);
    printf("Porcentagem de votos brancos: %.1lf\n" , porcentBrancos);
    printf("Total de votos nulos: %d\n" , votosNulos);
    printf("Porcentagem de votos nulos: %.1lf\n" , porcentNulos);
    printf("Total de votos validos: %d\n" , votosValidos);
    printf("Porcentagem de votos validos: %.1lf\n" , porcentValidos);
    printf("********************************** \n");
    system("pause");
    return 0;
 }