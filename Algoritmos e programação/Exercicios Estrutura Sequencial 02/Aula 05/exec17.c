//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
//Faça um programa que receba o raio, calcule e mostre:
//a) o comprimento de uma esfera; sabe-se que C=2* pi R³
//b) a área de uma esfera; sabe-se que A= pi R²
//c) o volume de uma esfera; sabe-se que V=3/4  * pi R³

float raio, comprimento, area, volume;

printf("Informe o raio da esfera\n");
scanf("%f%*c", &raio);

comprimento = 2* pi * raio;
area = 4 * pi * (raio*raio);
volume = 4/3 * pi * (raio*raio*raio)/3;

printf("A esfera tem um comprimento de %.2f\n", comprimento);
printf("A esfera tem uma área de %.2f\n", area);
printf("A esfera tem um volume de %.2f\n", volume);

}