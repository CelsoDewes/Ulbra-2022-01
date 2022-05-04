//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que calcule e mostre a área de um trapézio
    //Sabe-se que: A=((base maior + base menor)*altura)/2   

    float basemaior, basemenor, altura, area;

    printf("Informe a base maior do trapézio:");
    scanf("%f%*c", &basemaior);

    printf("Informe a base menor do trapézio:");
    scanf("%f%*c", &basemenor);

    printf("Informe a altura do trapézio:");
    scanf("%f%*c", &altura);

    area=((basemaior+basemenor)*altura)/2;

    printf("A área do trapézio é de %.2f", area);
}