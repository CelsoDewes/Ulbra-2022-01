//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o custo de um espatáculo teatral e o preço do convite desse espetáculo.
//Esse prigrama deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
//pelo menos, o custo do espetáculo seja alcançado.
float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float custo_espetaculo, valor_convite, quantidade_convites;

    printf("Informe o custo total do espetáculo\n");
    scanf("%f%*c", &custo_espetaculo);

    printf("Informe o valor de cada convite do espetáculo\n");
    scanf("%f%*c", &valor_convite);

    quantidade_convites= custo_espetaculo/valor_convite;

    printf("A quantidade necessária de convites a ser vendido é de %.0f", quantidade_convites);
}