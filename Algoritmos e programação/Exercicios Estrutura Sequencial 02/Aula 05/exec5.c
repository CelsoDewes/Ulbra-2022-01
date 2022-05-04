//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

    float preco, novopreco, desconto;

    printf("Informe o preço atual do produto:");
    scanf("%f%*c", &preco);

    desconto= preco* 10/100;
    novopreco= preco-desconto;

    printf("Novo preço do produto resjustado é de %.2f", novopreco);

}