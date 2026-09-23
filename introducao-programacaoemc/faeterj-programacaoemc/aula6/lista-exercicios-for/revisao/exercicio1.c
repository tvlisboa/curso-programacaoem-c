/**
 * Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
 * a) a idade dessa pessoa em anos;             
 * b) a idade dessa pessoa em meses;            
 * c) a idade dessa pessoa em dias;             
 * d) a idade dessa pessoa em semanas.          
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int anoNascimento;
    int anoAtual;                       // idade em anos
    int idadeUsuario;                   // ano atual - ano nascimento
    int idadeMeses;                     // idadeMeses = idadeUsuario * 12
    int idadesSemanas;                  // idadeSemanas = idadeUsuario * 52
    int idadeDias;                      // idadeDias = idadeUsuario * 365

    printf("******************************** \n");
    printf("* EXERCICIO CONVERSAO DE IDADE * \n");
    printf("******************************** \n");

    printf("* INFORME OS DADOS DO USUARIO A SEGUIR * \n");
    printf("* Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("* Ano atual: ");
    scanf("%d", &anoAtual);

    /* nao aceite o ano de nascimento ser maior que o ano atual */
    while (anoNascimento > anoAtual) {
        printf("Dados informados estão incorretos - tente novamente \n");

        printf("* Ano de nascimento: ");
        scanf("%d", &anoNascimento);

        printf("* Ano atual: ");
        scanf("%d", &anoAtual);

    }
    
    /* calculos da idade do usuario */
    idadeUsuario = anoAtual - anoNascimento;
    idadeMeses = idadeUsuario * 12;
    idadesSemanas = idadeUsuario * 52;
    idadeDias = idadeUsuario * 365;
    
    /* saida de dados */
    printf("******************************** \n");
    printf("Ano de nascimento: %d\n" , anoNascimento);
    printf("Ano atual: %d\n" , anoAtual);
    printf("Idade do usuario: %d\n" , idadeUsuario);
    printf("Idade do usuario em meses: %d\n" , idadeMeses);
    printf("Idade do usuario em semanas: %d\n" , idadesSemanas);
    printf("Idade do usuario em dias: %d\n" , idadeDias);
    printf("******************************** \n");
    system("pause");
    return 0;
 }
 