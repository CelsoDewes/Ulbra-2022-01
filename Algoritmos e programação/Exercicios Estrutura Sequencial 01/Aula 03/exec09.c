//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base*altura)/2.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float base, altura, area;
    
    printf("Base do triangulo: \n");
    scanf("%f%*c", &base);

    printf("Altura do triangulo: \n");
    scanf("%f%*c", &altura);

    area = base * altura /2;
    printf("Area do triangulo: %.2f\n", area);   
}