//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um programa que receba dois numeros e execute as operações listadas a seguir, de acordo com a escolha do usuario.
    1 // média entre os numeros digitados
    2 // diferença do maior pelo menor
    3 // produto entre os numeros digitados
    4 // divisão do primeiro pelo segundo */

    float numero1, numero2, operacao, resultado;

    printf("Informe o numero 01\n");
    scanf("%f%*c", &numero1);

    printf("Informe o numero 02\n");
    scanf("%f%*c", &numero2);

    printf("Informe a operação que deseja efetuar (1, 2, 3 e 4) conforme lista\n");
    scanf("%f%*c", &operacao);

    if(operacao==1){
        resultado=(numero1+numero2)/2;
        printf("média entre os numeros digitados é %.2f\n", resultado);
    }
    if (operacao==2){
        if(numero1>numero2){
            resultado=numero1-numero2;
            printf("diferença do maior pelo menor é %.2f\n", resultado);
        }else if(numero2>numero1){
            resultado=numero2-numero1;
            printf("diferença do maior pelo menor é %.2f\n", resultado);
        }
    }
    if(operacao==3){
        resultado=numero1*numero2;
        printf("produto entre os numeros digitados é %.2f\n", resultado);
    }
    if(operacao==4){
        resultado=numero1/numero2;
        printf("divisão do primeiro pelo segundo é %.2f\n", resultado);
    }
    
    system("pause");
    return 0;
}