//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um programa que receba dois numeros e mostre o menor */
    float numero1, numero2;

    printf("Informe o numero 01\n");
    scanf("%f%*c", &numero1);

    printf("Informe o numero 02\n");
    scanf("%f%*c", &numero2);

    if(numero1<numero2){
        printf("O numero %.0f é menor\n", numero1);
    }else if(numero1>numero2){
        printf("O numero %.0f é menor\n", numero2);
    }
    
    system("pause");
    return 0;
}