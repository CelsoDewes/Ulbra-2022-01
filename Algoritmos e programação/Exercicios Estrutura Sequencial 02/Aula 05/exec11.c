//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A=(diagonal maior*diagonal menor)/2

float diagonalmaior, diagonalmenor, area;

printf("Informe a medida da diagonal maior do losango\n");
scanf("%f%*c", &diagonalmaior);

printf("Informe a medida da diagonal menor do losango\n");
scanf("%f%*c", &diagonalmenor);

area=(diagonalmaior*diagonalmenor)/2;

printf("A área do losango é de:%.2f", area);
}