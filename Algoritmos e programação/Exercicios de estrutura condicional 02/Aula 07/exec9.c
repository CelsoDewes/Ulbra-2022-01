//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Um branco concederá um crédito especial aos seus clientes, de acordo com o  saldo médio do ultimo ano.
    Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. 
    Mostre o saldo médio e o valor do crédito
    SALDO MÉDIO    //  PERCENTUAL
    acima de R$400,00 // 30% do saldo médio
    R$400 -- R$300  //  25% do saldo médio
    R$300 -- 200  // 20% do saldo médio
    até R$200   // 10% do saldo médio */
    
    float salario, aumento;

    printf("Informe seu salario atual\n");
    scanf("%f%*c", &salario);

    if(salario>400){
        aumento= salario+salario* 30/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }else if(salario<=400 && salario>300){
        aumento= salario+salario* 25/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }else if(salario<=300 && salario>200){
        aumento= salario+salario* 20/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }else if(salario<=200){
        aumento= salario+salario* 10/100;
        printf("Seu salário reajustado é R$ %.2f\n", aumento);
    }
    
    system("pause");
    return 0;
}