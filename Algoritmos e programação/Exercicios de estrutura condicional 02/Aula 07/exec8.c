//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento encontra-se na tabela a seguir
    Salário            // percentual de aumento
    até R$ 300,00      //  35%
    acima de R$ 300,00 //  15% */

    float salario, aumento;

    printf("Informe seu salario atual\n");
    scanf("%f%*c", &salario);

    if(salario<=300){
        aumento= salario+salario* 35/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }else if(salario>300){
        aumento= salario+salario* 15/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }
    
    system("pause");
    return 0;
}