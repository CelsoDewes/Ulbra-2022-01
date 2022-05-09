#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*a nota final de um estudante é calculada a partir de três notas atribuidas,
    respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final.
    A média das três notas mencionadas obedece aos pesos a seguir:
    NOTA       //       PESO
    Trabalho de laboratório //  2
    Avaliação semestral  // 3
    Exame final     // 5
    
    Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:
    8-10 A
    7-8  B
    6-7  C
    5-6  D
    0-5  E*/
    
    float notaTrabalho, notaAvaliacao, notaExamef, media;

    printf("Informe sua nota no Trabalho de laboratório\n");
    scanf("%f%*c", &notaTrabalho);

    printf("Informe sua nota na Avaliação Semestral\n");
    scanf("%f%*c", &notaAvaliacao);

    printf("Informe sua nota no Exame Final\n");
    scanf("%f%*c", &notaExamef);

    media=(notaTrabalho * 2 + notaAvaliacao * 3 + notaExamef * 5)/10;

    printf("Sua média ponderada é de %.2f e ", media);

    if(media >= 8 && media <=10){
        printf("obteve conceito A");
    }else if(media >= 7 && media < 8){
        printf("obteve conceito B");
    }else if(media >= 6 && media < 7){
        printf("obteve conceito C");
    }else if(media >= 5 && media < 6){
        printf("obteve conceito D");
    }else if(media >= 0 && media < 5){
        printf("obteve conceito E");
    }

}