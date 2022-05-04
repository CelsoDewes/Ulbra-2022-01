//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit.
    //Sabe-se que F=180*(C+32)/100

    float celsius, fahrenheit;

    printf("Informe a temperatura em celsius:");
    scanf("%f%*c", &celsius);

    fahrenheit= 180*(celsius+32)/100;

    printf("A temperatura em fahrenheit é de %.2f", fahrenheit);

}