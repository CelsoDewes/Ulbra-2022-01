//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float n1, n2, n3, p1, p2, p3, media;
    printf("Informe nota 01:\n");
    scanf("%f%*c", &n1 );
   
    printf("Informe peso nota 01:\n");
    scanf("%f%*c", &p1 );
    
    printf("Informe nota 02:\n");
    scanf("%f%*c", &n2 );
    
    printf("Informe peso nota 02:\n");
    scanf("%f%*c", &p2 );
    
    printf("Informe Nota 03:\n");
    scanf("%f%*c", &n3 );

    printf("Informe peso nota 03:\n");
    scanf("%f%*c", &p3 );

    media= (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf( "Média ponderada= %.2f\n", media );
}