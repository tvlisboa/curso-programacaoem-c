/**
 * Exercicio 4
 * Solicite uma senha ao usuário. 
 * Enquanto a senha estiver incorreta, solicite novamente.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char usuario[100];
    int senha;

    printf("******************************** \n");
    printf("*   EXEMPLO 4 - SENHA USUARIO  * \n");
    printf("*      INICIANDO CONTAGEM      * \n");

    printf("Digite os dados do usuario a seguir: \n");
    printf("Usuario: ");
    scanf("%s" , usuario);

    printf("Senha: ");
    scanf("%d" , &senha);

    while (senha != 123456) {

        printf("Dados informados estao incorretos - tente novamente \n");

        printf("Usuario: ");
        scanf("%s" , usuario);

        printf("Senha: ");
        scanf("%d" , &senha);

    }

    printf("Bem vindo adm! \n");
    system("");
    return 0;
 }