//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o numero de horas trabalhadas e o valor do salario minimo, calcule e mostre o salário a receber, seguindo estas regras:
//a hora trabalhada vale a metade do salário minimo
//o salário bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada
//o imposto equivale a 3% do salario bruto
//o salario a receber equivale ao salario bruto menos o imposto
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float horas_trab, salario_min, valor_hora, bruto, liquido, imposto;

    printf("Informe as horas trabalhadas\n");
    scanf("%f%*c", &horas_trab);

    printf("informe o valor do salario minimo\n");
    scanf("%f%*c", &salario_min);

    valor_hora= salario_min/2;
    bruto= valor_hora*horas_trab;
    imposto=bruto*3/100;
    liquido= bruto-imposto;
    printf("O valor das horas trabalhadas da um total de:%.2f\n", liquido);
    return 0;

}