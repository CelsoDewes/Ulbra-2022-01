#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
        /*Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário
        e os dados necessários para executar cada operação
        Menu de opções:
        1. Somar dois números.
        2. Raiz quadrada de um número
        digite a opção desejada.*/

    int menu;
    float n1,n2, soma;

    printf("Menu de opções:\nPara somar dois numeros, digite 1\nPara raiz quadrada de um número, digite 2\n");
    scanf("%d%*c", &menu);

    if(menu==1){
        printf("Digite n1\n");
        scanf("%f%*c", &n1);
        printf("Digite n2\n");
        scanf("%f%*c", &n2);
        soma=n1+n2;
        printf("A soma dos valores é: %.2f", soma);
    }else{
        printf("Opção inválida");
    }
    if(menu==2){
        printf("Informe o numero que deseja a raiz\n");
        scanf("%f%*c", &n1);
        soma=sqrt(n1);
        printf("A raiz quadrada de %.2f é: %.2f", n1,soma);
    }else{
        printf("Opção inválida");
    }
    return 0;
}