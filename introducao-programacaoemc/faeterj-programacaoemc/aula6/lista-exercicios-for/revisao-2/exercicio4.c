/**
 * Exercicio 4 - Elabore um programa em C que leia:
 * Nome e idade de um nadador e classifique segundo as categorias (2,0)
 * INFANTIL A = 5 – 7 ANOS
 * INFANTIL B = 8-10 ANOS
 * JUVENIL A = 11-13 ANOS
 * JUVENIL B = 14-17 ANOS
 * ADULTOS = MAIORES QUE 18
 * Seu programa deve informar a Frase:  
 * Olá XXXX, você está na categoria XXXXX
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nomeNadador[100];
    int idadeNadador;

    printf("************************* \n");
    printf("* EXERCICIO - NADADORES * \n");
    printf("************************* \n");

    printf("* Insira as informacoes a seguir * \n");
    printf("* Nome: ");
    scanf("%s", nomeNadador);

    printf("* Idade: ");
    scanf("%d" , &idadeNadador);

        while (idadeNadador<=0)
        {
            printf("************************* \n");
            printf(" Dados informados estao incorretos - tente novamente \n");
                
            printf("* Idade: ");
            scanf("%d" , &idadeNadador);
        }
        

    if(idadeNadador>=18){
        printf("Olá %s, sua categoria atual: ADULTO. \n" , nomeNadador);
        printf("Idade informada: %d\n" , idadeNadador);
    }else if(idadeNadador>=14){
        printf("Olá %s , sua categoria atual: JUVENIL B. \n" , nomeNadador);
        printf("Idade informada: %d\n" , idadeNadador);
    }else if(idadeNadador>=11){
        printf("Olá %s , sua categoria atual: JUVENIL A. \n" , nomeNadador);
        printf("Idade informada: %d\n" , idadeNadador);
    }else if(idadeNadador>=8){
        printf("Olá %s , sua categoria atual: INFANTIL B. \n" , nomeNadador);
        printf("Idade informada: %d\n" , idadeNadador);
    }else{
        printf("Olá %s , sua categoria atual: INFANTIL A. \n" , nomeNadador);
        printf("Idade informada: %d\n" , idadeNadador);
    }

    system("pause");
    return 0;
 }