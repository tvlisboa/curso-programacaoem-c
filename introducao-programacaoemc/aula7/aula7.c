/*
 * Utilização de funcoes dentro da linguagem c
 */

 #include <stdio.h>
 #include <stdlib.h>

 /* campo de declaracao de fnc */
 void teste(void);
 void nomeUsuario(void);
 void idadeUsuario(void);
 void estadoCivil(void);
 void mensagem(void);

 int main(int argc, char const *argv[])
 {

    printf("******************************** \n");
    printf("*  Exemplos de funcoes abaixo  * \n");

    /* funcao 1 - 2 - 3 - 4 - 5*/
    teste();
    nomeUsuario();
    idadeUsuario();
    estadoCivil();
    mensagem();
    system("pause");
    return 0;
 }

 /* inicializacao das fcns */
 void teste(void){
    printf("Bem vindo a linguagem c <3 \n");
 }

 void nomeUsuario(void){
    printf("Roberto Silveira \n");
 }

 void idadeUsuario(void){
    printf(32 , "\n");
 }

 void estadoCivil(void){
    printf("Solteiro ou casado ?");
 }

 void mensagem(void){
    printf("Obrigado por estudar C !! \n");
}
 