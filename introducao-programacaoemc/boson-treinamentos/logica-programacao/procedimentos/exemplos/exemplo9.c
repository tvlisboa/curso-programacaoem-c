/**
 * Exemplo 9
 * Utilizando funcao
 * Crie um algoritmo que solicite o ano de nascimento do usuario
 * Ano atual e calcule a sua idade
 * Valide da seguinte maneira
 * >= 65 idoso
 * >= 21 adulto
 * >= 16 adolescente
 * >=12 pre adolescente
 * crianca
 * Mostre as informacoes na tela
 * Deseja continuar ? [S/N]
 */

 #include <stdio.h>
 #include <stdlib.h>

 char idadeUsuario(int idade){

    if(idade>=65){

        printf("Usuario informado é Idoso \n");

    }else if(idade>=21){

        printf("Usuario informado é Adulto \n");

    }else if(idade>=16){

        printf("Usuario informado é Adolescente \n");

    }else{

        printf("Usuario informado é Criança \n");

    }

 }

 int main(){

    int anoNascimento;
    int anoAtual;
    int idade;
    int resposta;

    printf("**************************** \n");
    printf("*     EXEMPLO - IDADE      * \n");
    printf("**************************** \n");

    printf("**************************** \n");
    printf("* INSIRA OS DADOS DO USUARIO * \n");

    printf("Ano de nascimento: ");
    scanf("%d" , &anoNascimento);

    printf("Ano atual: ");
    scanf("%d" , &anoAtual);

    /* nao aceita o ano de nascimento ser maior que o atual */
    while(anoNascimento >= anoAtual){

        printf("Dados informados estão invalidos - tente novamente ! \n");

        printf("Ano de nascimento: ");
        scanf("%d" , &anoNascimento);

        printf("Ano atual: ");
        scanf("%d" , &anoAtual);
        
    }

    idade = (anoAtual - anoNascimento);
    resposta = idadeUsuario(idade);

    printf("%d\n", resposta);
    printf("Idade do usuario: %d\n" , idade);
    system("pause");
    system("cls");
    return 0;
 }
