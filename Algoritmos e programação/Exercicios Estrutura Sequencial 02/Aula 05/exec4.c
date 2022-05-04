//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define peso1 2
#define peso2 3

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.

    float nota1, nota2, media;

    printf("Informe o valor da nota 1\n");
    scanf("%f%*c", &nota1);

    printf("Informe o valor da nota 2\n");
    scanf("%f%*c", &nota2);

    media=(nota1*peso1+nota2*peso2)/(peso1+peso2);

    printf("A média ponderada das notas é %.2f", media);
}