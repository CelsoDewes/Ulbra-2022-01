//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que receba dois numeros, calcule e mostre a subtração do primeiro numero pelo segundo.

float numero1, numero2, resultado;

    printf("Informe o valor do primeiro numero\n");
    scanf("%f%*c", &numero1);

    printf("Informe o valor do segundo numero\n");
    scanf("%f%*c", &numero2);

    resultado=numero1-numero2;

    printf("O valor da subtração é de %.2f", resultado);

}