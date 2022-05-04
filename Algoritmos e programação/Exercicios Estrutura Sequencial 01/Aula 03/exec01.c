//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba quatro numeros inteiros, calcule e mostre a soma desses números.

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1, n2, n3, n4, soma;
    printf("Numero 01:\n");
    scanf("%d%*c", &n1 );
   
    printf("Numero 02:\n");
    scanf("%d%*c", &n2 );
    
    printf("Numero 03:\n");
    scanf("%d%*c", &n3 );

    printf("Numero 04:\n");
    scanf("%d%*c", &n4 );
    
    soma = n1 + n2 + n3 + n4;

    printf("A soma dos valores informados é de: %d\n", soma );
}