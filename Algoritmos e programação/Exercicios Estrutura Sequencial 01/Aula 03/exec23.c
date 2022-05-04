//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba um numero real, encontre e mostre
//a) a parte inteira desse numero
//b) a aprte fracionária desse numero
//c) o arredondamento desse numero
int main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int parte_inteira, arredondado;
    float numero, parte_fracionaria;

    printf("Digite um numero Real\n");
    scanf("%f%*c", &numero);

    parte_inteira= (int)numero;
    parte_fracionaria= numero - ((int)numero);
    arredondado=nearbyint(numero);

    printf("
    A parte inteira do numero é %d\n A parte fracionária desse numero é %.2f\n E o numero arredondado é %d", parte_inteira, parte_fracionaria, arredondado);
    return 0;
}