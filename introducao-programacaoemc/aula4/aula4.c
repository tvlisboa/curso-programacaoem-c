/* utilizacao da variavel int - numeros inteiros*/

/*
* solicite ao usuario a sua idade
* e verifique se e menor ou maior de idade
* mostre na tela as informacoes
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int age;
    
    printf("Informe a sua idade: \n");
    scanf("%d\n" , &age);

    printf("Idade do usuario : %d\n" , age);

    /* estrutura de decisao */
    if (age>=18)
    {
        printf("\n Maior de idade \n");
    }
    if (age<18)
    {
        printf("Menor de idade \n");
    }
    
    return 0;
}