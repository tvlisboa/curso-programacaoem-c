/**
 * Exemplo 7
 * Solicite ao usuario um numero para calcular seu fatorial
 * Utilize tambem a estrutura do_while 
 * Para decidir ate quando quer continuar a conta
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(){

    int numero1;            //numero informado pelo usuario
    int contador;           //limite de contagem do looping
    int fatorial;           
    char resposta[2];       //quando usuario deseja continuar ou nao

    do {

        printf("Informe um numero a seguir, maior que 0; ");
        scanf("%d" , &numero1);

            contador = numero1;
            fatorial = 1;

        if(numero1<0){

            printf("Não existem fatoriais - para numero negativos! \n");

        }else if (numero1 == 0){

            fatorial = 1;

        }else{

            do{

                fatorial = fatorial * contador;
                contador = contador - 1;

            }while(contador>=1);
            
        }

        if(numero1>=0){

            printf("O valor do fatorial de %d é igual a %d\n" , numero1 , fatorial);

        }
        
        printf("Deseja continuar - informe [S/N]? ");
        scanf("%s" , resposta);

    } while (strcmp(resposta, "N") != 0);

    system("pause");
    return 0;
 }