//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario, gratifica, impost, novosal;
    printf("Informe seu salario: \n");
    scanf("%f%*c", &salario);
    
    impost= salario * 7/100;
    gratifica= salario *5/100;
    
    novosal=salario + gratifica - impost;
    
    printf("Salario liquido = %.2f\n", novosal);

}