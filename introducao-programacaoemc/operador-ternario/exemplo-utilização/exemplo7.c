/**
 * Classificacao de produto - criacao de um pequeno sistema
 * Solicite nome do produto
 * Preco do produto
 * Utilizando o operador ternario - classifique o preco do produto de acordo com:
 * Ate 50 - Barato
 * Entre 51 e 100 - Preco normal
 * Acima de 100 ate 500 - caro
 * Acima de 500 - Produto premium
 * Depois mostre na tela as informacoes - nome do produto / preco atribuido e sua classificacao
 * Nao aceite valores inferior a 0
 */

 #include <stdio.h>
 #include <stdio.h>

 int main(int argc, char const *argv[])
 {

    char name[100];
    double price;

    printf("************************************* \n");
    printf("* SIG - SISTEMA INTEGRADO DE GESTAO * \n");
    printf("************************************* \n");

    printf("* INSIRA AS INFORMAÇOES DOS PRODUTOS A SEGUIR: \n");
    printf("* Nome do produto : ");
    scanf("%s", name);

    printf("* Preco unitario: ");
    scanf("%lf", &price);

    /* nao aceite valores menores que zero - utilizando o while */
    while (price<=0) {
      printf("Dados do produtos estão incorretos - por favor verifique e tente novamente \n");
      printf("* Preco unitario: ");
      scanf("%lf", &price);
    }

   /* operador ternario 
      n1 >= 10 ? n1++ : n1--;
   */

   // price>=50 ? printf("* Produto, está com preco normal");

    /* saida das informacoes na tela do usuario*/
    printf("************************************* \n");
    printf("*   DADOS INFORMADOS PELO USUARIO   * \n");
    printf("* Produto informado: %s\n ", name);
    printf("* Preco do produto: %.2lf\n ", price);
    printf("************************************* \n");
    system("pause");
    return 0;
 }
 