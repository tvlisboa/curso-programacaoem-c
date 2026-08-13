/*
 * Aula 7 - Parte 2
 * Utilizando funcoes com passagens de parametros
 * e utilizações de retorno 
 * Solicite ao usuario dois numeros
 * Utilize os menus a seguir
 * 1 - Soma
 * 2 - Subtrair
 * 3 - Multiplicar
 * 4 - Dividir
 * 5 - Media
 * 6 - Porcentagem
 */

 /* declaracao das funcoes */
 double soma(double n1, double n2){
    return n1 + n2;
 }
 double subtrair(double n1, double n2){
    return (n1 - n2);
 }

 double multiplicar(double n1, double n2){
    return (n1 * n2);
 }

 double dividir(double n1, double n2){
    return (n1 / n2);
 }

 double media(double n1 , double n2){
    return (n1 + n2) / 2;
 }

 double calcularPorcentagem(double n1, double n2){
    return (n1 * n2) / 100;
 }

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(int argc, char const *argv[])
 {
    /* inser code here */
    int option;
    double n1, n2, resultado;

    system("pause");
    return 0;
 }
 