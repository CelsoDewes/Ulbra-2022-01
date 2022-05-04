//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba o valor do salário minimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salarios minimos que esse funcionario ganha.

    float salariominimo, salario, quantossalarios;

    printf("Informe seu salario\n");
    scanf("%f%*c", &salario);

    printf("Informe o salario minimo\n");
    scanf("%f%*c", &salariominimo);

    quantossalarios=salario/salariominimo;

    printf("Seu salario equivale a %.2f salarios minimos", quantossalarios);
}