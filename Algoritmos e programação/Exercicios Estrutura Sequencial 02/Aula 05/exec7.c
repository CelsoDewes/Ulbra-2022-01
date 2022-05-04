//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso, se a pessoa engordar 15% sobre o o peso digitado
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado

float pesoatual, pesoengorda, pesoemagrece;

printf("Informe o peso atual:");
scanf("%f%*c", &pesoatual);

pesoengorda= pesoatual+pesoatual*15/100;
pesoemagrece= (pesoatual-(pesoatual * 20/100));

printf("Peso com adicional de 15%% do peso atual: %.2f\n", pesoengorda);
printf("Peso com o emagrecimento de 20%% do peso atual: %.2f", pesoemagrece);

}