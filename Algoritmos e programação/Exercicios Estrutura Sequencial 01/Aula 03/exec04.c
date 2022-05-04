//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario, novosal;
    printf("Inclua salario atual:\n");
    scanf("%f%*c", &salario );

    novosal = salario + salario * 25/100;

    printf("Salario ajustado = %.2f\n", novosal);
} 