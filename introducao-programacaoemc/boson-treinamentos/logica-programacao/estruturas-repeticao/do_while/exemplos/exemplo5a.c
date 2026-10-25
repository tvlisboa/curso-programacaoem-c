/**
 * Exemplo 5 
 * Quantos numeros sao negativos
 * Utilizando a estrutura - do_while
 * Solicite ao usuario quantos numeros deseja informar
 * Verifique quantos deles sao negativos
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int qtdNum;
    int num;
    int cont = 1;
    int totNegativo = 0;
    int totPositivo = 0;
    int somaNegativo = 0;
    int somaPositivo = 0;

    printf("************************* \n");
    printf(" EXEMPLO 5 - NEGATIVOS  * \n");
    printf("************************* \n");

    printf("Quantos numeros deseja informar ? ");
    scanf("%d" , &qtdNum);

    do{

        printf("Digite: ");
        scanf("%d" , &num);

        if(num < 0){

            totNegativo++;
            somaNegativo = somaNegativo + num;  

        }else{

            totPositivo++;
            somaPositivo = somaPositivo + num;
        }

        cont++;
        
    }while(cont<=qtdNum);

    printf("Quantidade de numeros informados: %d\n" , qtdNum);
    printf("Total de numeros negativos: %d\n" , totNegativo);
    printf("Soma dos negativos: %d\n" , somaNegativo);
    printf("Total de numeros positivos: %d\n" , totPositivo);
    printf("Soma dos positivos: %d\n" , somaPositivo);
    system("pause");
    system("cls");
    return 0;
 }