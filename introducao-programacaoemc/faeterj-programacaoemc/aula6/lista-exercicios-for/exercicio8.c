/**
 * Faca um algoritmo que solicite ao usuario as seguintes informacoes
 * Ate qual numero deseja contar
 * Qual e seu incremento
 * A soma dos numeros informados
 * A media dos numeros informados
 * Quantos numeros sao positivos
 * Quantos numeros sao negativos
 * Quantos numeros sao neutros
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int n1 , i;                                             //valor do numero que usuario informou - indice
    int incremento;                                         //valor do incremento
    int soma = 0;                                           //soma todos os numeros que o usuario informou
    double media = 0;                                       //utilizado para calcular a media dos numeros informados e salvos dentro da soma
    int quantidade = 0;                                     //armazena todos os numeros que estao dentro do for
    int totPositivo = 0 , totNegativo = 0, totNeutro = 0;   //receber o valor negativo - positivo ou neutro para calcular o total de cada um

    printf("*************************** \n");
    printf("*       EXERCICIO 8       * \n");
    printf("*    INICIO DA CONTAGEM   * \n");
    printf("Deseja contar ate quanto ? ");
    scanf("%d", &n1);

    printf("Qual valor do incremento ? ");
    scanf("%d", &incremento);

    for (i = 1; i < n1; i+=incremento) {
        printf("%d\n", i);

        if(i>0){
            totPositivo = totPositivo + 1;
        }else if(i<0){
            totNegativo = totNegativo + 1;
        }else{
            totNeutro = totNeutro + 1;
        }

        soma = soma + i;                                    //soma todos os numeros usados dentro do for
        quantidade = quantidade++;                          //guarda a quantidade de numeros que foram verificados dentro do for
    }
    
    /* 
    *  faz o calculo da media dos numeros iformados dentro do for 
    *  utiliza  a variavel soma, que tem todo total dos numeros informados
    *  dividido pela quantidade de numeros que foram digitados dentro do for
    */
    media = (double)soma / quantidade;
    
    printf("A soma dos numeros informados foi: %d\n" , soma);
    printf("A media dos numeros informados foi: %.2lf\n" , media);
    printf("Qtd de numeros positivos informados: %d\n" , totPositivo);
    printf("Qtd de numeros numeros negativos informados: %d\n" , totNegativo);
    printf("Qtd de numeros numeros neutros informados: %d\n" , totNeutro);
    printf("*   FIM DA CONTAGEM  * \n");
    system("pause");
    return 0;
 }
 