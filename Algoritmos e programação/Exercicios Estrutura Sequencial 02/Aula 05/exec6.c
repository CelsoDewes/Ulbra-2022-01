//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, 
//calcule e mostre a comissão e seu salário final.

    float salariofixo, vendas, comissao, salariofinal;

    printf("Informe o salario base\n");
    scanf("%f%*c", &salariofixo);

    printf("Informe o valor total das vendas\n");
    scanf("%f%*c", &vendas);

    comissao= vendas*4/100;
    salariofinal=salariofixo+comissao;

    printf("O salário base com adicional das comissões( R$%.2f ) é um total de:%.2f", comissao, salariofinal);
}