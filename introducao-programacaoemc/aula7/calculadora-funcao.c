/**
 * Aula 7 - PT 2
 * Funcoes com passagem de parametros e retorno
 * Crie uma calculadora utilizando funcoes
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 /* funcoes com seus parametros e retorno*/
double somar(double num1, double num2){
   return (num1 + num2);
}

double subtrair(double num1, double num2){
   return (num1 - num2);
}

double multiplicar(double num1, double num2){
   return (num1 * num2);  
}

double dividir(double num1, double num2){
   return (num1 / num2);
}

double porcentagem(double num1 , double num2){
   return (num1 * num2) / 100;
}

 int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    double num1, num2 , resultado;

    printf("******************************************* \n");
    printf("*         EXERCICIO - CALCULADORA         * \n");
    printf("*      INSIRA DOIS NUMEROS A SEGUIR       * \n");
    printf("*  Numero 1: ");
    scanf("%lf" , &num1);

    printf("*  Numero 2: ");
    scanf("%lf" , &num2);
    
    printf("*     SELECIONE UMA DAS OPCOES ABAIXO     * \n");
    printf("******************************************* \n");
    printf(" [ 1 ] - SOMAR \n");
    printf(" [ 2 ] - SUBTRARIR \n");
    printf(" [ 3 ] - MULTIPLICAR \n");
    printf(" [ 4 ] - DIVIDIR \n");
    printf(" [ 5 ] - PORCENTAGEM \n");
    printf(" [ 9 ] - MAIS OPCOES \n");
    printf(" [ 0 ] - SAIR \n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    /* utilizacao do menu */
    switch (opcao) {

    case 1:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 1 ] - SOMAR * \n");

         resultado = somar(num1 , num2);

      printf("A soma dos numeros informados: %.2lf\n" , resultado);
      printf("******************************************* \n");
      break;

   case 2:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 2 ] - SUBTRAIR * \n");

         resultado = subtrair(num1 , num2);

      printf("A subtracao dos numeros informados: %.2lf\n" , resultado);
      printf("******************************************* \n");
      break;

   case 3:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 3 ] - MULTIPLICAR * \n");

         resultado = multiplicar(num1 , num2);
      
      printf("A multiplicacao dos numeros informados: %.2lf\n" , resultado);
      printf("******************************************* \n");
      break;

   case 4:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 4 ] - DIVIDIR * \n");

      /* nao permitir divisao por zero - se for !=0 ira fazer a divisao normalmente */
      if(num1 == 0){
         printf("Nao e possivel a divisão por zero - tente novamente \n");
      }else{
         resultado = dividir(num1 , num2);
      }
      
      printf("A divisao dos numeros informados: %.2lf\n" , resultado);
      printf("******************************************* \n");
      break;

   case 5:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 5 ] - PORCENTAGEM * \n");

        resultado = porcentagem(num1 , num2);
      
      printf("A porcentagem dos numeros informados: %.2lf\n" , resultado);
      printf("******************************************* \n");
      break;

   case 9:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 9 ] - MAIS OPCOES * \n");
      break;

   case 0:
      printf("******************************************* \n");
      printf("*  OPCAO ESCOLHIDA [ 0 ] - SAIR DO APP * \n");
      break;
    
    default:
      printf("************************************************* \n");
      printf("*  OPCAO INFORMADA E INVALIDA - TENTE NOVAMENTE * \n");
      printf("************************************************* \n");
      break;
    }
 
    system("pause");
    system("cls");
    return 0;
 }
 