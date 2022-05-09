#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba três numeros e mostre-os em ordem crescente.
    suponha que o usuário digitará três numeros diferentes*/

    int n1, n2, n3, vazia;
    
    printf("informe o numero 1:");
    scanf("%d%*c", &n1);

    printf("informe o numero 2:");
    scanf("%d%*c", &n2);

    printf("informe o numero 3:");
    scanf("%d%*c", &n3);

   if(n1>n2){
       vazia=n1;
       n1=n2;
       n2=vazia;
   }
   if(n1>n3){
       vazia=n1;
       n1=n3;
       n3=vazia;
   }
   if (n2>n3){
       vazia=n2;
       n2=n3;
       n3=vazia;
   }

   printf(" %d - %d - %d", n1,n2,n3);  
    return 0;
}