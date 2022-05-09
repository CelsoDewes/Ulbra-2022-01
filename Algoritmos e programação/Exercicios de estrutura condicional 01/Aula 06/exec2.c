#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que receba três notas de um alino, calcule e mostre a média aritmética e a mensagem
    constrante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que
    deverão tirar para serem aprovados, considerando que a média exigida é 6.0

    0-3 reprovado
    3-7 exame
    7-10*/

    float nota1, nota2, nota3, media, notaExame;

    printf("Informe a nota 01\n");
    scanf("%f%*c", &nota1);

    printf("Informe a nota 02\n");
    scanf("%f%*c", &nota2);
    
    printf("Informe a nota 03\n");
    scanf("%f%*c", &nota3);

    media=(nota1+nota2+nota3)/3;

    printf("Média aritmética é %.2f\n", media);

    if(media >= 0 && media <3){
        printf("Reprovado!");
    }else if(media>= 3 && media <7){
        printf("Exame!");
        notaExame = 12 - media;
        printf("Deve tirar nota %.2f para ser aprovado");
    }else if(media >= 7 && media<=10){
        printf("Aprovado");
    }


}