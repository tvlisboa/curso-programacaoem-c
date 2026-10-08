/*
 * Curso básico de linguagem c - Aula 7
 * Trabalhando com funcoes 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 void testeFuncao(void);            //declaracao da funcao
 void soma(void);

 int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de funcao em C\n\n");
    testeFuncao();                  //utilizando a funcao na tela
    soma();
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

void soma(void){
    printf("************************* \n");
    printf("* UTILIZACAO DE FUNCOES * \n");
    printf("************************* \n");
}
 