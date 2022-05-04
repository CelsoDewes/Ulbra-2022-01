//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba três notas, calcule e mostre a média aritmética.
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float n1, n2, n3, soma, media;
    printf("Inclua Nota 01:\n");
    scanf("%f%*c", &n1 );
   
    printf("Inclua Nota 02:\n");
    scanf("%f%*c", &n2 );
    
    printf("Inclua Nota 03:\n");
    scanf("%f%*c", &n3 );
    
    soma = n1 + n2 + n3 ;
    
    media = soma / 3;

    printf("Media das Notas: %.2f\n", media);
}