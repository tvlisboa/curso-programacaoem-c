#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int numero1, soma = 0;
    char resposta[1];

    do {

        printf("Informe um valor a seguir: ");
        scanf("%d" , &numero1);

        soma = soma + numero1;

        /* conversao uppercase resposta */
        for (int i = 0; resposta[i] !='\0'; i++) {
            resposta[i] = toupper(resposta[i]);
        }
        
        printf("Deseja continuar a operacao ? [S/N]");
        scanf("%s" , resposta);

    } while ("%s\n " , resposta);

    printf("A soma dos numeros informados foi: %d\n" , soma);
    system("pause");
    return 0;
}