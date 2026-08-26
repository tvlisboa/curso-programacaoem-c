/*
 * Dobro e triplo
 * Solicite ao usuario um numero inteiro
 * Mostre na tela o seu dobro e triplo
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
  
    int n1;
    int dobro;
    int triplo;

    printf("********************* \n");
    printf("* DOBRO OU TRIPLO ? * \n");
    printf("********************* \n");

    printf("Digite um numero a seguir: ");
    scanf("%d", &n1);

    /* nao aceita numero menor do que 0*/
    while (n1<0){
        printf("Numero informado e invalido - tente novamente! \n");
        printf("Digite um numero a seguir: ");
        scanf("%d", &n1);
    }
    
    /* verifica se o numero informado e par ou impar*/
    if(n1 % 2 == 0){
        printf("Numero informado é par");
    }else{
        printf("Numero informado é impar");
    }

    dobro = (n1 * 2);
    triplo = (n1 * 3);

    printf("\n*****************************************");
    printf("\nNumero informado pelo usuario: %d",n1);
    printf("\nDobro do numero informado: %d", dobro);
    printf("\nTriplo do numero informado: %d", triplo);
    system("\npause");
    return 0;
 }
 