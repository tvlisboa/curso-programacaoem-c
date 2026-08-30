/*
 * Faca um algoritmo que leia as seguintes informacoes
 * Marca do veiculo, ano de fabricacao e cilindradas
 * Solicite ao usuario a quilometragem percorrida pelo veiculo
 * O preco do litro do combustivel
 * Calcule e exiba na tela o consumo medio do veiculo
 * e o total gasto
 * consumomedio = quilometragem / litros 
 */

 #include <stdio.h>
 #include <stdlib.h>

 //char marca[50]
 //char modelo[100]
 //int ano de fabricacao
 //double cilindradas
 //char tipoCombustivel[100] - usando switchcase [1] - gasolina / [2] - alcool / [3] - flex / [4] - gas / [5] - hibrido / [6] - eletrico
 //int formapagamento - usando switchcase        [1] - cartao / [2] - dinheiro /[3] - pix
 //double quilometragem de rodagem               quantos km foi a viagem
 //double preco do combustivel                
 //double consumo medio                          quanto de gasto de combustivel foi gasto na viagem - kilometragem / litrosgastos
 //double total gasto                            precodocombustivel * cosumo medio

 int main(int argc, char const *argv[])
 {

    char marcaVeiculo[50];
    char modeloVeiculo[50];
    char combustivel[50];
    int anoFabricacao;
    double cilindradas;

    printf("************************************** \n");
    printf("*     SISTEMA DE COSUMO VEICULAR     * \n");
    printf("*   INSIRA AS INFORMACOES A SEGUIR:  * \n");
    printf("* Marca do veiculo: ");
    scanf("%s", marcaVeiculo);

    printf("* Modelo do veiculo: ");
    scanf("%s", modeloVeiculo);

    printf("* Ano de fabricao: ");
    scanf("%d", &anoFabricacao);

    printf("* Cilindradas do veiculo: ");
    scanf("%lf", &cilindradas);

    printf("* Combustivel usado");
    scanf("%s", combustivel);

    /* teste de saida de dados informados*/
    printf("**************************************");
    printf("\n*    DADOS INFORMADOS PELO USUARIO   *");
    printf("\n* Marca do veiculo: %s", marcaVeiculo);
    printf("\n* Modelo do veiculo: %s", marcaVeiculo);
    printf("\n* Ano de fabricacao: %d", anoFabricacao);
    printf("\n* Cilindradas: %.2lf", cilindradas);
    printf("\n**************************************");
    return 0;
 }
 