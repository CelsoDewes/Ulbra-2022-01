//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba dois numeros maiores que zero, calcule e mostre um elevado ao outro.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor1, valor2, elevado1, elevado2;

    printf("Informe valor positivo e maior que zero:\n");
    scanf("%f%*c", &valor1);

    printf("Informe novo valor positivo e maior que zero:\n");
    scanf("%f%*c", &valor2);

    elevado1= pow(valor1,valor2);
    elevado2= pow(valor2,valor1);

    printf("Valor 01 elevado ao Valor 02: %.2f\n", elevado1);
    printf("Valor 02 elevado ao Valor 01: %.2f\n", elevado2);
}