#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba três números obrigatoriamente em ordem crescente 
    e um quarto numero que não siga essa regra. mostre, em seguida, os quatro numeros em ordem
    descrescente. suponha que o usuário digitará quatro numeros diferentes.*/

    int n1,n2,n3,n4;

    printf("Digite três numeros em ordem crescente:(digite o valor e envie para os três valroes)\n");
    scanf("%d%*c", &n1);
    scanf("%d%*c", &n2);
    scanf("%d%*c", &n3);

    printf("Digite um numero fora da ordem crescente:\n")/
    scanf("%d%*c", &n4);

    if(n4>n3){
        printf("A ordem decrescente é: %d, %d, %d, %d", n4, n3,n2,n1);
    }else if(n4>n2 && n4<n3){
        printf("A ordem decrescente é: %d, %d, %d, %d", n3,n3,n2,n1);
    }else if(n4>n1 && n4<n2){
        printf("A ordem decrescente é: %d, %d, %d, %d", n3,n2,n4,n1);
    }else if(n4<n1){
        printf("A ordem decrescente é: %d, %d, %d, %d", n3,n2,n1,n4);
    }else{
        printf("Numeros inválidos");
    }
}