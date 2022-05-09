//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir:
     0 -- 4 // Reprovado
     4 -- 7 // Exame
     7 --10 // Aprovado*/

    float nota1, nota2, media;

    printf("Informe a nota 01\n");
    scanf("%f%*c", &nota1);

    printf("Informe a nota 02\n");
    scanf("%f%*c", &nota2);

    media=(nota1+nota2)/2;

    if (media>=7 && media<=10){
        printf("Aprovado\n");
    }else if(media<7 && media>=4){
        printf("Exame\n");
    }else if(media>=0 && media<4){
        printf("Reprovado\n");
    }
    
    system("pause");
    return 0;
}