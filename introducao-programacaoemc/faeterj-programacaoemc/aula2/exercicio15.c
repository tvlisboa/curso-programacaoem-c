/*
 * Calculo IMC
 * Faca um algoritmo que leia as seguintes informacoes
 * Nome do usuario - idade do usuario
 * Altura e peso
 * Faca o calculo do imc e utilize os seguintes parametros para classificacao
 * imc = peso / (altura * altura)
 * Classificacao do IMC:
 * Abaixo de 18,5 - Abaixo do peso
 * Entre 18,5 e 24,9 - Peso normal
 * Entre 25,0 e 29,9 - Acima do peso
 * Entre 30,0 e 34,9 - Obesidade grau I
 * Entre 35,0 e 39,9 - Obesidade grau II
 * Acima de 40,0 - Obesidade grau III
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {

    char nomeUsuario[100];
    int idade;
    double altura , peso;

    /* teste entrada de dados */
    printf("**************************************** \n");
    printf("*     SISTEMA  DE  CALCULO DE  IMC     * \n");
    printf("* INFORME OS DADOS DO USUARIO A SEGUIR * \n");

    printf("* Nome do usuario: ");
    scanf("%s", nomeUsuario);

    printf("* Idade do usuario: ");
    scanf("%d", &idade);

    printf("* Altura do usuario: ");
    scanf("%lf", &altura);

    printf("* Peso do usuario: ");
    scanf("%lf", &peso);

    /* teste saida de dados do usuario */
    printf("* Nome do usuario:  %s", nomeUsuario);
    printf("\n");
    printf("* Idade do usuario: %d", idade);
    printf("\n");
    printf("* Altura do usuario: %.2lf", altura);
    printf("\n");
    printf("* Peso do usuario: %.2lf", peso);
    printf("\n");
    system("pause");
    return 0;
 }
 