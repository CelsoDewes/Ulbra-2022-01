//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //joão recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. 
    //Faça um programa que calcule e mostre quanto restará do salário de joão.

    float salario, conta1, conta2, restosalario;

    printf("Informe seu salario\n");
    scanf("%f%*c", &salario);

    printf("Informe o valor da conta 01 \n");
    scanf("%f%*c", &conta1);

    printf("Informe o valor da conta 02 \n");
    scanf("%f%*c", &conta2);

    restosalario= salario - ((conta1+conta2)*2/100);

    printf("O resto do seu salário é de %.2f", restosalario);

}