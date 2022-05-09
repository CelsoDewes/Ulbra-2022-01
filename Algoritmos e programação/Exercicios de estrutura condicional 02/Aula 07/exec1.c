//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e
    a mensagem de aprovado ou reprovado, considerando para aprovação média 7 */

    float nota1, nota2, nota3, nota4, media;

    printf("Informe a nota 01\n");
    scanf("%f%*c", &nota1);

    printf("Informe a nota 02\n");
    scanf("%f%*c", &nota2);

    printf("Informe a nota 03\n");
    scanf("%f%*c", &nota3);

    printf("Informe a nota 04\n");
    scanf("%f%*c", &nota4);
    
    media=(nota1+nota2+nota3+nota4)/4;

    if(media>=7){
        printf("Aprovado\n");
    }else if(media<7){
        printf("Reprovado\n");
    }
 
    system("pause");
    return 0;
}