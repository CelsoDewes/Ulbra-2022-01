//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

//Faça um programa que receba a medida do ângulo(em graus) formado por uma escada apoiada no chão e encostada na parede
// e a altura da parede onde erstá a ponta da escada. Calcule e mostre a medida dessa escada
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float angulo, altura, escada, radiano;

    printf("Informe o angulo da escada com chão:\n");
    scanf("%f%*c", &angulo);

    printf("Informe a altura que a escada será apoiada:\n");
    scanf("%f%*c", &altura);

    radiano= angulo * pi /180;
    escada = altura / radiano;

    printf("A altura necessária da escada deverá ser de %.0f", escada);
    
}