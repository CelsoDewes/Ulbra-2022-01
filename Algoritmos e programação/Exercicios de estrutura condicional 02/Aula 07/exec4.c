//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um programa que receba três numeros e mostre o maior */
    float numero1, numero2, numero3;

    printf("Informe o numero 01\n");
    scanf("%f%*c", &numero1);

    printf("Informe o numero 02\n");
    scanf("%f%*c", &numero2);

    printf("Informe o numero 03\n");
    scanf("%f%*c", &numero3);

    if(numero1>numero2 && numero1>numero3){
        printf("O numero %.0f é maior\n", numero1);
    }else if(numero2>numero1 && numero2>numero3){
        printf("O numero %.0f é maior\n", numero2);
    }else if(numero3>numero1 && numero3>numero2){
        printf("O numero %.0f é maior\n", numero3);
    }
    
    system("pause");
    return 0;
}