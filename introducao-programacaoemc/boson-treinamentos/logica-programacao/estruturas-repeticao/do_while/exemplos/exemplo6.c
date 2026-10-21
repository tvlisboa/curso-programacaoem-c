/**
 * Exemplo 6 - Calcule o fatorial de um numero
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>

int main(){

    int contador;                       //RESPONSAVEL PELO LOOPING
    int numero1;                        //DADOS INFORMADOS PELO USUARIO
    int fatorial = 1;                   //CALCULAR O FATORIAL
    char resp;                          //SOLICITA AO USUARIO - SE QUER CONTINUAR OU NAO

    do {
       
        printf("Informe um numero a seguir ");
        scanf("%d", &numero1);

        /* reinicializa o fatorial para poder fazer um novo calculo */
            fatorial = 1;
        
        /* inicializa o contador com o numero que o usuario informar */
            contador = numero1;

        do{

            fatorial = contador * fatorial;
            contador = contador - 1;
        
        }while(contador>=1);

        printf("O valor do fatorial de %d é igual a %d\n" ,
            numero1 , fatorial);

        printf("Deseja informar outro numero ? [S/N] \n");
        scanf(" %c" , &resp);

        /* conversao para uppercase*/
        resp = toupper((unsigned char) resp);

    } while (resp!='N');

    printf("Programa finalizado - Obrigado! \n");
    system("pause");
    return 0;
}


 