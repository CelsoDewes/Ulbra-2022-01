#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba quatro valores: I, A, B e C. 
    Desses valores I é inteiro e positivo, A,B e C são reais.
    Escreva os números A, B e C obedecendo à tabela a seguir.
        Suponha que o valor digitado para I seja um valor válido, ou seja, 1, 2 ou 3, e que os números 
        digitados sejam diferentes um do outro.

        Valores de I
        1 - A, B e C em ordem crescente
        2 - A, B e C em ordem decrescente
        3 - O maior fica entre os outros dois números*/
    int I;
    float n1, n2, n3, vazia;

    printf("Informe o numero 1:\n");
    scanf("%f%*c", &n1);

    printf("Informe o numero 2:\n");
    scanf("%f%*c", &n2);

    printf("Informe o numero 3:\n");
    scanf("%f%*c", &n3);

    printf("Informe o valor de I ( 1, 2 ou 3 ):\n");
    scanf("%d%*c", &I);

    if(I==1){
        
    if(n1>n2){
       vazia=n1;
       n1=n2;
       n2=vazia;

    }if(n1>n3){
       vazia=n1;
       n1=n3;
       n3=vazia;

    }if (n2>n3){
       vazia=n2;
       n2=n3;
       n3=vazia;
    }
    }
   if(I==2){

        if(n1<n2){
        vazia=n1;
        n1=n2;
        n2=vazia;

        }if(n1<n3){
        vazia=n1;
        n1=n3;
        n3=vazia;

        }if (n2<n3){
        vazia=n2;
        n2=n3;
        n3=vazia;
        }
    }
    if(I==3){
        if(n1>n2){
            vazia=n2;
            n2=n1;
            n1=vazia;
        }
        if(n3>n2){
            vazia=n2;
            n2=n3;
            n3=vazia;
        }
    }
    printf("%.2f - %.2f - %.2f", n1,n2,n3);
}