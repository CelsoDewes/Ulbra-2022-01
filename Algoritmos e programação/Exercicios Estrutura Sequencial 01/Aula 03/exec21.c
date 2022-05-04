//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a que distancia
//a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
//Lembre-se que o tamanho da escada deve ser maior que a altura que se deseja alcançar.
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float altura_prego, distancia_escada, tamanho_escada;

    printf("Informe a altura que deseja pregar o quadro:\n");
    scanf("%f%*c", &altura_prego);

    printf("informe o tamanho da escada a se utilizar:\n");
    scanf("%f%*c", &tamanho_escada);
    
    distancia_escada= tamanho_escada*tamanho_escada - altura_prego*altura_prego;
    distancia_escada=sqrt(distancia_escada);

    printf("A escada deverá ficar a distancia de %.2f metros", distancia_escada);
}