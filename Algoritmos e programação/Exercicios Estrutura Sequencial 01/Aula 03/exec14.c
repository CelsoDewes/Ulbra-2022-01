//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a) a idade dessa pessoa
//b) quantos anos ela terá em 2050
int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    int idade, anoatual, idade2050, nascimento;

    printf("Informe seu ano de nascimento:\n");
    scanf("%d%*c", &nascimento);

    printf("Informe o corrente ano:\n");
    scanf("%d%*c", &anoatual);

    idade= anoatual-nascimento;
    idade2050=2050-nascimento;

    printf("Idade Atual: %d\n" ,idade);
    printf("Idado em 2050: %d \n", idade2050);
    return 0;
}