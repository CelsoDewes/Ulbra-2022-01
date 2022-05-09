#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que determine a data cronologicamente maior entre duas datas
    fornecidas pelo usuário. Cada data deve ser composta por três valores inteiros,
    em que o primeiro representa o dia, o segundo, o mês e o terceiro o ano.*/

    int dia1, mes1, ano1, ano2, mes2, dia2;

    printf("informe a data 1\n");
    scanf("%d%*c", &dia1);
    scanf("%d%*c", &mes1);
    scanf("%d%*c", &ano1);
    
    printf("informe a data 2\n");
    scanf("%d%*c", &dia2);
    scanf("%d%*c", &mes2);
    scanf("%d%*c", &ano2);

    if (ano1 > ano2){
        printf("A maior data é %d/%d/%d \n", dia1,mes1,ano1);
    }else if (ano2 > ano1){
        printf("A maior data é %d/%d/%d \n", dia2,mes2,ano2);
    }
    if (mes1 > mes2){
        if (ano1 > ano2){
            printf("A maior data é %d/%d/%d\n", dia1,mes1,ano1);
        }else if( ano2 > ano1){
            printf("A maior data é %d/%d/%d\n", dia2,mes2,ano2);
        }
    }else if (mes2 > mes1){
        if (ano1 > ano2){
            printf("A maior data é %d/%d/%d\n", dia1,mes1,ano1);
        }else if (ano2 > ano1){
            printf("A maior data é %d/%d/%d\n", dia2,mes2,ano2);
        }
    }
    if(dia1 > dia2){
        if (ano1 > ano2){
            printf("\n\n");
            printf("A maior data é %d/%d/%d\n", dia1, mes1, ano1);
            printf("\n\n");
        }else if( ano2 > ano1){
            printf("\n\n");
            printf("A maior data é %d/%d/%d\n", dia2, mes2, ano2);
            printf("\n\n");
        }
    }else if (dia2 > dia1){
        if (ano1 > ano2){
            printf("A maior data é %d/%d/%d\n", dia1, mes1, ano1);
        }
        else if (ano2 > ano1){
            printf("A maior data é %d/%d/%d\n", dia2, mes2, ano2);
        }
    }
}