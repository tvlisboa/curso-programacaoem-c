/*
 * Valor total da compra
 * Faca um algoritmo que leia
 * Nome do produto
 * Quantidade comprada
 * Valor unitario do produto
 * Calcule o valor total da compra e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {

    char produto[100];
    int quantidade;
    double preco;

    printf("************************ \n");
    printf("* CONSULTA DE PRODUTOS * \n");
    printf("************************ \n");

    printf("Nome do produto: ");
    scanf("%s", produto);

    printf("Preco do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    /* calculo de valor total */
    double valorTotal = (quantidade * preco);

    /* saida de dados */
    printf("\nNome do produto: %s", produto);
    printf("\nPreco unitario: %.2f", preco);
    printf("\nQuantidade: %d", quantidade);
    printf("\nValor total da compra: %.2f", valorTotal);

    system("\npause");
    return 0;
}
 