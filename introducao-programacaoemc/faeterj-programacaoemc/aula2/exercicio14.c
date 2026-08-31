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

 //char marca[50]            - usando switch-case colocar 5 marcas distintas para o usuario escolher - [1] - BYD / [2] - FORD /[3] - VW / [4] - FIAT / [5] - CHEVROLET               
 //char modelo[100]          - usando switch-case colocar dentro de cada marca - 5 modelos para usuario escolher e 1 opcao inserir novo veiculo - 0 sair / 9 mais informacoes
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
    char tipoDeCombustivel[50];
    int anoFabricacao;
    double cilindradas;
    double quilometrosRodados;
    double litrosCombustivel;
    double valorCombustivel;

    printf("************************************** \n");
    printf("*     SISTEMA DE COSUMO VEICULAR     * \n");
    printf("*   INSIRA AS INFORMACOES A SEGUIR:  * \n");
    printf("* DADOS DO VEICULO * \n");
    printf("* Marca do veiculo: ");
    scanf("%s", marcaVeiculo);

    printf("* Modelo do veiculo: ");
    scanf("%s", modeloVeiculo);

    printf("* Ano de fabricao: ");
    scanf("%d", &anoFabricacao);

    printf("* Cilindradas do veiculo: ");
    scanf("%lf", &cilindradas);

    printf("* Combustivel usado");
    scanf("%s", tipoDeCombustivel);

    printf("* DADOS DA VIAGEM * \n");
    printf("* Quilometros rodados: ");
    scanf("%lf",quilometrosRodados);

    printf("* Valor do combustivel: *");
    scanf("%lf", valorCombustivel);

    double consumoMedio = (quilometrosRodados / litrosCombustivel);              //calculo de consumo médio
    double gastoTotal = 

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
 