/**
 * Exemplo 1 - Utilizacao de funcoes
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>

 /**
  * Declaracao de funcao
  */

  void nomeUsuario(void);
  void idadeUsuario(void);
  void pesoUsuario(void);
  void alturaUsuario(void);

 int main(){

    printf("******************** \n");
    printf("* EXEMPLO - FUNCAO * \n");

    /* utilizacao das funcoes */
    nomeUsuario();
    idadeUsuario();
    pesoUsuario();
    alturaUsuario();

    system("pause");
    return 0;
 }

 /* funcoes inicializadas */
 void nomeUsuario(void){

    printf("Nome do aluno: \n"); 

 }

 void idadeUsuario(void){

    printf("Idade do aluno: \n");

 }

 void pesoUsuario(void){

    printf("Peso do usuario: ");

 }

 void alturaUsuario(void){

    printf("Altura do usuario: \n");

 }