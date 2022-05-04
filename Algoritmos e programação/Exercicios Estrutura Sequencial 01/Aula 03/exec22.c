//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Sabe-se que o quilowatt de energia custa um quinto do salário minimo. Faça um programa que receba o valor do salário minimo
// e a quantidade de quilowatts consumida por uma residencia. Calcule e mostre:
//a) o valor de cada quilowatt
//b) o valor a ser pago por essa residencia
//c) o valor a ser pago com desconto de 15%
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor_salario, quantidade_quilowatt, valor_quilowatt, real_quilowatt, desconto, valor_desconto;

    printf("Informe o salário minimo\n");
    scanf("%f%*c",&valor_salario);

    printf("Informe quantos quilowatts foram consumidos\n");
    scanf("%f%*c", &quantidade_quilowatt);

    valor_quilowatt= valor_salario/5;
    real_quilowatt=valor_quilowatt*quantidade_quilowatt;
    desconto= (real_quilowatt*15) / 100;
    valor_desconto= real_quilowatt-desconto;

    printf("Considerando que o valor do Quilowatt é de %.2f, o valor a ser pago pela residencia seria de %.2f com um desconto de 15% fica o total de %.2f", valor_quilowatt, real_quilowatt, valor_desconto);
}