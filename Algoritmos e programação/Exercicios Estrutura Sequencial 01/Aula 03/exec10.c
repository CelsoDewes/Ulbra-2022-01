//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área=π*R².
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float area, raio;
    printf("Raio do circulo: \n");
    scanf("%f%*c", &raio);

    area= pi * (raio*raio);

    printf("Area do circulo: %.2f \n", area);
}