//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

    float pesoquilos, pesogramas;

    printf("Informe seu peso em quilos\n");
    scanf("%f%*c", &pesoquilos);

    pesogramas= pesoquilos*1000;

    printf("Seu peso em gramas é de:%.0f", pesogramas);

}