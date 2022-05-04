//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba três numeros, calcule e mostre a multiplicação desses numeros.

    float numero1, numero2, numero3, resultado;
    printf("Informe o numero 1\n");
    scanf("%f%*c", &numero1);

    printf("Informe o numero 2\n");
    scanf("%f%*c", &numero2);

    printf("Informe o numero 3\n");
    scanf("%f%*c", &numero3);

    resultado=numero1*numero2*numero3;

    printf("O resultado da multiplicação dos numeros é de: %.2f\n", resultado);
}