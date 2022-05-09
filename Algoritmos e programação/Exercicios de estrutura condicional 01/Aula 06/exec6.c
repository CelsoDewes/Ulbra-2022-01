#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba um número inteiro e verifique se é par ou ímpar*/

    int numero;

    printf("Informe um numero\n");
    scanf("%d%*c", &numero);

    if(numero % 2 == 0){
        printf("O numero %d é par", numero);
    }else{
        printf("O numero é ímpar");
    }

}