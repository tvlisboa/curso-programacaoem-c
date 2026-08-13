
/*
* solicite as informacoes do usuario
* Nome - Ano de Nascimento - Ano atual
* Calcule a idade do usuario
* E usando a estrutura if-else
* Mostre na tela
* Acima de 65 anos - Idoso
* Entre 21 e 65 anos - Adulto
* Entre 18 e 21 - Adolescente
* Abaixo de 18 - Crianca
*/

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char name[50];
    int anoNascimento;
    int anoAtual;
    int idadeUsuario;

    /* entrada de dados do usuario */
    printf("********************************************* \n");
    printf("Entre com as informaçoes do usuario a seguir: \n");
    printf("Nome do usuario: ");
    scanf("%s", &name);

    printf("Ano de nascimento: ");
    scanf("%d\n", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d\n", &anoAtual);

    idadeUsuario = (anoAtual - anoNascimento);

        if (idadeUsuario>=65){
            printf("\nUsuario é idoso \n");
        }else if(idadeUsuario>=21){
            printf("\nUsuario é adulto \n");
        }else if(idadeUsuario>=18){
            printf("\nUsuario é adolescente \n");
        }else{
            printf("\nUsuario é crianca \n");
        }
        
        

    /* saida de dados - usuario */
    printf("Nome do usuario: %s\n" , name);
    printf("Ano de nascimento: %d\n" , anoNascimento);
    printf("Ano atual: %d\n", anoAtual);
    printf("A idade do usuário informado: %d\n", idadeUsuario);
    system("pause");
    return 0;
}
