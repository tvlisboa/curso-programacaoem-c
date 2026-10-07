/**
 * Exercicio 5
 * Caixa eletronico 
 * Solicite tambem ao usuario o saldo dele
 * Solicite ao usuario que informe o valor que deseja sacar
 * Utilize if-else e verifique
 * Ate 100 - saque permitido
 * Entre 101 ate 500 - saque permitido - com mensagem de atencao
 * Acima de 500 - saque nao permitido
 * Exiba o valor na tela e a situacao
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    double saldoAnterior, saldoAtualizado;
    double valorSaque;

    printf("*********************** \n");
    printf("* EXERCICIO - 5 SALDO * \n");
    printf("* Digite as informacoes a seguir * \n");
    printf("********************* \n");

    printf("Informe seu saldo: ");
    scanf("%lf" , &saldoAnterior);

    printf("Informe o valor do saque: ");
    scanf("%lf" , &valorSaque);

    while(valorSaque > saldoAnterior){
        printf("Opcao deseja é invalida - tente novamente \n");

            printf("Informe seu saldo: ");
            scanf("%lf" , &saldoAnterior);

            printf("Informe o valor do saque: ");
            scanf("%lf" , &valorSaque);
    }

    /* calcular saldo - caso aprove */
    saldoAtualizado = saldoAnterior - valorSaque;

    if(valorSaque > 500){
        printf("Saque nao permitido - procure uma de nossas agencias \n");
        printf("Saldo anterior: %.2lf\n" , saldoAnterior);
        printf("Saldo atual: %.2lf\n" , saldoAtualizado);
    }else if(valorSaque > 100){
        printf("Saque autorizado com sucesso - valores descritos abaixo. \n");
        printf("Saldo anterior: %.2lf\n" , saldoAnterior);
        printf("Valor solicitado: %.2lf" , valorSaque);
        printf("Saldo atual : %.2lf\n" , saldoAtualizado);
    }else{
        printf("Saque autorizado. \n");
        printf("Saldo anterior: %.2lf\n" , saldoAnterior);
        printf("Valor solicitado: %.2lf" , valorSaque);
        printf("Saldo atual : %.2lf\n" , saldoAtualizado);
    }

    system("pause");
    system("cls");
    return 0;
 }