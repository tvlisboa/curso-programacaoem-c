/*
 * Faca um algoritmo que receba quantos cavalos ha em um haras 
 * Valor de cada ferradura
 * Quantas ferraduras sao gastas para cada animal
 * E o total gasto para todos os animais do haras
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int option;                         //selecao do menu
    int cavalos;                        //quantidade de cavalos no haras
    double valorFerradura;              //valor de cada ferradura
    int ferradurasAnimal;               //quantas ferraduras cada animal gasta
    int totalFerraduras;                //total gasto de ferraduras por animal
    double valorTotalFerraduras;        //total em dinheiro gasto por ferraduras
    char nomeAnimal[100];               //nome do animal
    int idadeAnimal;                    //anos
    int anoNascimento;                  //data do nascimento do animal
    int anoAtual;                       //ano atual para calclar idade
    char corAnimal;                     //tipos de cores
    double pesoAnimal;              
    double alturaAnimal;
    char sexoAnimal[2];                 //macho ou femea    
    int codigoAnimal;                   //codigo do animal

    printf("***************************************** \n");
    printf("*   HARAS - BOM COMPANHEIRO , BEMVINDO  * \n");
    printf("*     SELECIONE UMA DAS OPCOES ABAIXO   * \n");
    printf("***************************************** \n");
    printf("* [ 1 ] - CONSULTA DE ANIMAIS  * \n");
    printf("* [ 2 ] - CADASTRO DE ANIMAIS  * \n");
    printf("* [ 3 ] - CONSULTA DE ESTOQUE  * \n");
    printf("* [ 4 ] - CADASTRO DE PRODUTOS * \n");
    printf("* [ 5 ] - ORCAMENTOS  * \n");
    printf("* [ 9 ] - MAIS OPCOES * \n");
    printf("* [ 0 ] - SAIR * \n");
    scanf("%d", &option);

    switch (option)
    {

    //consultar animais
    case 1:
        system("cls");
        printf("***************************************** \n");
        printf("* [ 1 ] - OPCAO ESCOLHIDA : CONSULTA DE ANIMAIS * \n");
        printf("* INSIRA AS INFORMACOES DO ANIMAL A SEGUIR: * \n");
        printf("* Codigo do animal :");
        scanf("%d", &codigoAnimal);
        break;
    
    //cadastrar animais
    case 2:
        system("cls");
        printf("***************************************** \n");
        printf("* [ 2 ] - OPCAO ESCOLHIDA : CADASTRO DE ANIMAIS * \n");
        printf("* INSIRA AS INFORMACOES DO ANIMAL A SEGUIR: * \n");

        printf("* Nome do animal: ");
        scanf("%s", nomeAnimal);

        printf("* Ano atual: *");
        scanf("%d", &anoAtual);

        printf("* Ano de nascimento do animal: ");
        scanf("%d", &anoNascimento);

        printf("* Pelagem do animal: ");
        scanf("%s", corAnimal);

        printf("* Altura do animal: ");
        scanf("%lf", &alturaAnimal);

        printf("* Peso do animal: ");
        scanf("%lf", &pesoAnimal);

        printf("* Sexo do animal: ");
        printf("%s", sexoAnimal);

        //calcular idade do animal - nao aceitar anonascimento maior que ano atual
        idadeAnimal = (anoAtual - anoNascimento);

        //fazer as validacoes de idade - animal jovem - adulto - idoso - pronto para criar etc

        /* teste de saida de dados */
        printf("***************************************** \n");
        printf("*   DADOS INFORMADOS PELO VETERINÁRIO:  * \n");
        printf("* Nome: %s" , nomeAnimal);
        printf("\n");
        printf("* Ano de nascimento: %d", anoNascimento);
        printf("\n");
        printf("* Idade: %d", idadeAnimal);
        printf("\n");
        printf("* Pelagem: %s", corAnimal);
        printf("\n");
        printf("* Altura: %lf", alturaAnimal);
        printf("\n");
        printf("* Peso: %lf", pesoAnimal);
        printf("\n");
        printf("* Sexo: %lf", sexoAnimal);
        printf("\n");
        printf("***************************************** \n");
        break;
    
    //consultar estoque de ferraduras
    case 3:
        system("cls");
        printf("* [ 3 ] - OPCAO ESCOLHIDA : CONSULTA DE ESTOQUE * \n");
        break;
    
    //cadastrar estoque de produtos
    case 4:
        system("cls");
        printf("* [ 4 ] - OPCAO ESCOLHIDA : CADASTRO DE PRODUTOS * \n");
        break;

    //opcao de orcamento - podendo cadastrar - excluir - consultar e editar
    case 5:
        system("cls");
        printf("* [ 5 ] - OPCAO ESCOLHIDA : ORCAMENTOS * \n");
        printf("* *");

        /**
         * 1 - NOVO ORCAMENTO
         * 2 - CANCELAR ORCAMENTO
         * 3 - EXCLUIR ORCAMENTO 
         * 4 - EDITAR ORCAMENTO
         * 5 - PESQUISAR 
         * 9 - MAIS OPCOES
         * 0 - SAIR
         */
        
        printf("* Numero de animais disponiveis no haras ? ");
        scanf("%d", &cavalos);

        printf("* Valor da ferradura utilizada: ");
        scanf("%lf", &valorFerradura);

        printf("* Total de ferraduras utilizadas por animal: ");
        scanf("%d", &ferradurasAnimal);

        //valor total de ferraduras gastas por animal
        totalFerraduras = cavalos * ferradurasAnimal;

        break;

    //outras opcoes do aplicativo
    case 9:
        system("cls");
        printf("* [ 9 ] - OPCAO ESCOLHIDA : MAIS OPCOES * \n");
        break;

    //sair do app
    case 0:
        system("cls");
        printf("* [ 0 ] - OPCAO ESCOLHIDA : SAIR DO APP * \n");
        break;
    
    default:
        printf("***************************************** \n");
        printf("* OPCAO ESCOLHIDA É INVÁLIDA * \n");
        printf("***************************************** \n");
        break;
    }

    system("pause");
    return 0;
 }