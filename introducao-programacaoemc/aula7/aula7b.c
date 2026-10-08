/**
 * Aula 7 - Introducao a funcoes
 * Reaproveitamento de codigo e evitando repeticoes
 * Facilitando a leitura do codigo fonte
 */

 /*
  * Area da declaracao das funcoes
  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  void imprimirNome(void);
  void consultarSaldo(void);

 int main(int argc, char const *argv[])
 {

    printf("Exemplo de utilização de funcoes \n");
    /* chamando a funcao e sua utilização */
    imprimirNome();
    consultarSaldo();
    system("pause");
    return 0;
 }

 /**
  * Explicita a funcao e seu bloco de codigo
  */

  void imprimirNome(void){
    printf("Nome do usuario - Thiago Duarte \n");
  }

  void consultarSaldo(void){
    printf("Saldo disponivel - 1250,00 \n");
  }
 