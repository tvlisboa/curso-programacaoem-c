/*
 * Curso básico de linguagem c - Aula 7
 * Trabalhando com funcoes 
 */

 #include <stdio.h>
 #include <stdlib.h>

 void testeFuncao(void);            //declaracao da funcao

 int main(int argc, char const *argv[])
 {

    printf("Exemplo de funcao em C\n\n");
    testeFuncao();                  //utilizando a fundcao na tela
    printf("\nFim do algoritmo!");
    system("pause");
    return 0;
 }

void testeFuncao(void){             //inicializando a funcao
    printf("******************************************************* \n");
    printf("* ----- Iniciando os trabalhos com funcoes em C ----- * \n");
    printf("* ---------- Nos vemos nas proximas aulas -----------*  \n");
    printf("******************************************************* \n");
}                                    
 