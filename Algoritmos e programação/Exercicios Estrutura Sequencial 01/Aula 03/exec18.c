//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Pedro comprou um saco de ração com peso em quilos. ele possui dois gatos, para os quais fornece a quantidade de ração em gramas.
//A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato(em gramas),
//calcule e mostre quanto restará de ração no saco após cinco dias.
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    int peso, gato1, gato2;
    float total, soma;

    printf("Peso do saco de ração\n");
    scanf("%d%*c", &peso);
    
    printf("Quantida de ração do gato 1\n");
    scanf("%d%*c", &gato1);
    
    printf("Quantida de ração do gato 2\n");
    scanf("%d%*c", &gato2);
    
    gato1=gato1/1000;
    gato2=gato2/1000;
    soma= gato1+gato2;
    total= (peso - 5*soma);

    printf("A quantidade de ração restante é de %.2f", total);
}