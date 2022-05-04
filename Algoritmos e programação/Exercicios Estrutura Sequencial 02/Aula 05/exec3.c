//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que receba dois numeros, calcule e mostre a divisão do primeiro numero pelo segundo. 
//sabe-se que o segundo numero não pode ser zero, portanto, não é necessário se preocupar com validações.

    float numero1, numero2, resultado;

    printf("Informe o valor do numero 1\n");
    scanf("%f%*c", &numero1);

    printf("Informe o valor do numero 2\n");
    scanf("%f%*c", &numero2);

    resultado=numero1/numero2;

    printf("Resultado da divisão dos valores é de: %.2f", resultado);
}