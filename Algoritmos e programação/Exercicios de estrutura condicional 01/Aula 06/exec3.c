#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba dois numeros e mostre o maior*/
    
    int n1, n2;

    printf("Informe o primeiro numero:\n");
    scanf("%d%*c", &n1);

    printf("Informe o segundo numero:\n");
    scanf("%d%*c", &n2);

    if( n1 > n2){
        printf("O maior numero é:%d", n1);
    }else if( n2 > n1){
        printf("O maior numero é:%d", n2);
    }else if(n1==n2){
        printf("Os numeros são iguais");
    }

}
