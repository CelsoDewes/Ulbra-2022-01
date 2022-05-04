//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario, percent, aumento, novosal;
    printf("Inclua salario atual:\n");
    scanf("%f%*c", &salario );

    printf("Inclua percentual de aumento:\n");
    scanf("%f%*c", &percent );

    aumento = salario *percent/100;
    printf("Aumento salarial = %.2f\n", aumento);

    novosal = salario + aumento;
    printf("Novo salario = %.2f\n", novosal);
} 