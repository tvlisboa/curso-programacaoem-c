/*
 *  A padaria Hotpão vende uma certa quantidade de 
 *  pães franceses e uma quantidade de broas a cada dia.
 *  Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50.
 *  Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), 
 *  e quanto deve guardar numa conta de poupança (10% do total arrecadado). 
 *  Você foi contratado para fazer os cálculos para o dono. 
 *  Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas,
 *  e depois calcular os dados solicitados. 
 */

 // pao frances - 0.12
 // broinhas - 1.50
 // vendatotal de pao frances
 // vendatotal de broinhas
 // vendageral = valortotal pao frances + valortotal de broinhas    //valor geral no final do dia itens juntos
 // poupanca = (vendasGeral*10) / 100                               //porcentagem poupanca

 // 1 - Valor do pao frances
 // 2 - Valor da broinha
 // 3 - Quantidade de pao frances
 // 4 - Quantidade de broinha

 /**
  * Implementacao de menus futuros
  * 1 - Controle de estoque
  * 2 - Caixa
  * 3 - Pedidos
  * 4 - Entrada de mercadorias
  * 5 - Baixa de estoque
  * 9 - Mais opcoes
  * 0 - Sair
  */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    double valorPaoFrances;
    double quantidadePaoFrances;
    double valorBroinha;
    double quantidadeBroinha;
  
    printf("************************* \n");
    printf("*    PADARIA  HOTPAO    * \n");
    printf("*   SITEMA DE ESTOQUE   * \n");
    printf("************************* \n");

    printf("* INFORME O VALOR DOS PRODUTOS A SEGUIR * \n");
    printf("* PAO FRANCES UNIDADE : ");
    scanf("%lf" , &valorPaoFrances);

    printf("* QUANTIDADE DE PRODUTOS * \n");
    printf("* PAO FRANCES: ");
    scanf("%lf", quantidadePaoFrances);

    printf("* BROINHA DE MILHO UNIDADE: * ");
    scanf("%lf" , &valorBroinha);

    printf("* QUANTIDADE DE PRODUTOS * \n");
    printf("* BROINHA DE MILHO: ");
    scanf("%lf", &quantidadeBroinha);

    /* teste de saida de dados */
    printf("Pao frances: %lf" , valorPaoFrances);
    printf("\n");
    printf("Broinha: %lf" , valorBroinha);
    printf("\n");
    system("pause");
    return 0;
 }
 