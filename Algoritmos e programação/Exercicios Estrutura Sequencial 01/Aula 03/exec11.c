//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a)o numero digitado ao quadrado
//b)o numero digitado ao cubo
//c)a raiz quadrada do numero digitado
//d)a raiz cúbico do numero digitado
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor, quadrado, cubo, r2, r3;

    printf("Informe valor positivo e maior que zero:\n");
    scanf("%f%*c", &valor);

    quadrado = valor*valor;
    cubo = valor*valor*valor;
    r2 = sqrt (valor);
    r3= cbrt (valor);

    printf("Valor informado, ao quadrado: %.2f\n", quadrado);
    printf("Valor informado, ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada do valor informado: %.2f\n", r2);
    printf("Raiz ao cubo do valor informado: %.2f\n", r3);
    
}