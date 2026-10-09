/**
 * Exercicio 2 - Verificar numero
 * Crie uma funcao chamada - int ehPar(int numero)
 * A funcao deve verificar se o numero informado pelo usuario e par ou impar
 * Dentro do main faca a solicitacao de entrada do numero inteiro
 */

 int ehPar(int numero1){
    if(numero1 % 2 == 0){
        return 1;
    }else{
        return 0;
    }
 }

 #include <stdio.h>
 #include <stdio.h>

 int main(int argc, char const *argv[]) {

    int numero1;

    printf("************************** \n");
    printf("* EXERCICIO - NUMERO PAR * \n");
    printf("* Informe um numero: ");
    scanf("%d" , &numero1);

    while (numero1 <0) {
        printf("Dados informados estao invalidos - tente novamente \n");

        printf("* Informe um numero: ");
        scanf("%d" , &numero1); 
    }

    if(ehPar(numero1)){
        printf("Numero informado %d e par ! \n" , numero1);
    }else{
        printf("Numero informado %d e impar ! \n" , numero1);
    }

    system("pause");
    system("cls");
    return 0;
 }
 