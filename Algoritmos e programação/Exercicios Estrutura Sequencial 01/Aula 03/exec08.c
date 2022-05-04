//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float depos, taxa, rendi, totalrend;

    printf("Informe o deposito: \n");
    scanf("%f%*c", &depos);

    printf("Informe taxa de juros: \n");
    scanf("%f%*c", &taxa);

    rendi = depos * taxa/100;
    totalrend = depos + rendi;

    printf("Deposito atual: R$ %.2f \n", totalrend);
    printf("Você obteve R$ %.2f de rendimentos \n", rendi);
}