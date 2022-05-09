//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. 
    Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento */

    float salario, aumento;

    printf("Informe seu salário\n");
    scanf("%f%*c", &salario);

    if (salario>=500){
        printf("Você não tem direito ao aumento\n");
    }else if(salario<500){
        aumento= salario+salario* 30/100;
        printf("O salario reajsutado é R$ %.2f\n", aumento);
    }
    
    system("pause");
    return 0;
}