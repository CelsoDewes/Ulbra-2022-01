//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuatio deseja alcançar subindo a escada,
//calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário. 
//Todas as medidas forncidas devem estar em metros.
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float altura_degrau, altura_objetivo, quantidade_degraus;

    printf("Informe a altura dos degraus:\n");
    scanf("%f%*c", &altura_degrau);

    printf("Informe a altura que deseja alcançar:\n");
    scanf("%f%*c", &altura_objetivo);

    quantidade_degraus= altura_objetivo/altura_degrau;

    printf("Será necessária a quantidade de %.0f degraus", quantidade_degraus);

}