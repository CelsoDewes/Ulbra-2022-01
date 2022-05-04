//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba o valor dos catetos de um triangulo, calcule e mostre o valor da hipotenusa.

    float cateto1, cateto2, hipotenusa;

    printf("Informe o valor do cateto 1\n");
    scanf("%f%*c", &cateto1);

    printf("Informe o valor do cateto 2\n");
    scanf("%f%*c", &cateto2);

    hipotenusa= cateto1*cateto1+cateto2*cateto2;

    printf("O valor da hipotenusa é de %.2f", hipotenusa);

}