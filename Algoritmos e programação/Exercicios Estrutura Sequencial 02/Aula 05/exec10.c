//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que calcule e mostre a area de um quadrado. sabe-se que: A= lado*lado.

    float lado, area;

    printf("Informe a medida do lado do quadrado:\n");
    scanf("%f%*c", &lado);

    area=lado*lado;

    printf("A área do quadrado é de:%.2f", area);
}