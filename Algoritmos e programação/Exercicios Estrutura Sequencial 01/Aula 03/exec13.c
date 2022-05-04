//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
//a)poleagdas
//b)jardas
//c)milhas
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float pes, polegadas, milhas, jardas;

    printf("Informe a medida de pés desejada: \n");
    scanf("%f%*c", &pes);

    polegadas=pes*12;
    
    jardas=pes/3;
    
    milhas=jardas/1.760;

    printf("Valor em Polegadas: %.2f \n", polegadas);
    printf("Valor em Jardas: %.2f \n", jardas);
    printf("Valor em Milhas: %.2f \n", milhas);
    return 0;
}