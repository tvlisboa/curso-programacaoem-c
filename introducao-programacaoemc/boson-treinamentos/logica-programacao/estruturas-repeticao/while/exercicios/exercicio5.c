/**
 * Exercicio 5 - Contagem estatisticas
 * Solicite o usuario os numeros de inicio e fim
 * O programa devera percorrer esse intervalo
 * independente da direcao e apresentar na tela
 * Os numeros do intervalo
 * A quantidade total de numeros percorridos
 * A quantidade total de numeros pares e impares
 * E a soma de todos os numeros percorridos
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int inicioContagem;
    int fimContagem;
    int contador;
    int totNumeros = 0;
    int totPar = 0;
    int totImpar = 0;
    int soma = 0;

    printf("********************************* \n");
    printf("* EXERCICIO 5 - TOTAL CONTAGENS * \n");
    printf("********************************* \n");

    /* numero de inicio da contagem */
    printf("Informe a seguir o inicio da contagem: ");
    scanf("%d" , &inicioContagem);

    /* numero do fim da contagem */
    printf("Informe a seguir o fim da contagem: ");
    scanf("%d" , &fimContagem);

    contador = inicioContagem;

    if(inicioContagem <  fimContagem){

        while ( contador < fimContagem) {

            printf("%d\n" , contador);
            totNumeros = totNumeros + 1;

            if(contador % 2 == 0){

                printf("%d\n" , contador);
                totPar = totPar + 1;

            }else{

                printf("%d\n" , contador);
                totImpar = totImpar + 1;

            }

            soma = totImpar + totPar;
            contador++;

        }

    }else if(inicioContagem > fimContagem){

        while ( contador > fimContagem) {

            printf("%d\n" , contador);
            totNumeros = totNumeros + 1;

            if(contador % 2 == 0){

                printf("%d\n" , contador);
                totPar = totPar + 1;

            }else{

                printf("%d\n" , contador);
                totImpar = totImpar + 1;
            }

        }
        

    }

    system("pause");
    return 0;

}