//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que calcule e mostre a tabuada de um numero digitado pelo usuário.
    int numero, numerox1,numerox2, numerox3,numerox4,numerox5,numerox6,numerox7,numerox8,numerox9,numerox10;
    printf("Informe o numero que deseja ver a tabuada\n");
    scanf("%d%*c", &numero);

    numerox1=numero*1;
    numerox2=numero*2;
    numerox3=numero*3;
    numerox4=numero*4;
    numerox5=numero*5;
    numerox6=numero*6;
    numerox7=numero*7;
    numerox8=numero*8;
    numerox9=numero*9;
    numerox10=numero*10;


    printf("TABUADA\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d\n%dx%d", numero, numerox1, numero,numerox2,numero,numerox3,numero,numerox4,numero,numerox5,numero,numerox6,numero,numerox7,numero,numerox8,numero,numerox9,numero,numerox10);

}