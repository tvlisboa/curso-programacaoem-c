/**
 * Exemplo 1 - Detector de Pesados
 * Utilizando funcoes ou procedimentos
 * Faca um algoritmo que solicite
 * O nome do usuario
 * Seu peso e a idade
 * Mostre na tela o maior peso informado - nome do usuario e sua idade
 */

 #include <stdio.h>
 #include <stdlib.h>


/**
 * Declaracao das funcoes
 */

 void procedimentoTopo(){

    system("cls");
    printf("******************************* \n");
    printf("*  EXEMPLO 1 - SOMA DE PESOS  * \n");
    printf("* O maior peso informado foi: * \n");
    printf("* O maior peso informado foi: * \n");

 }

  int main(){

    int idade;
    int cont;
    char nomeUsuario[100];
    int qtdUsuario;
    char usuarioMaisPesado[100];
    char sexoUsuario[2];
    double peso;
    double maisPesado = 0;

    printf("Informe a seguir as informacoes do usuario \n");
    printf("Informe a quantidade de usuarios: ");
    scanf("%d" , &qtdUsuario);

    /* pede as informacoes de 5 usuarios */
    for(cont = 1 ; cont<= qtdUsuario ; cont++){

        printf("************************* \n");
        printf("Digite nome do usuario: ");
        scanf("%s" , nomeUsuario);

        printf("Digite a idade do usuario: ");
        scanf("%d" , &idade);

        printf("Digite o peso do usuario: ");
        scanf("%lf" , &peso);

        if(peso > maisPesado){

            maisPesado = peso;
    
        }

    }



    return 0;
 }