//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    //a) a idade dessa pessoa em anos
    //b) a idade dessa pessoa em meses
    //c) a idade dessa pessoa em dias
    //d) a idade dessa pessoa em semanas

    int anonascimento, anoatual, idadeano,idademeses,idadedias,idadesemanas;

    printf("Informe seu ano de nascimento:");
    scanf("%d%*c", &anonascimento);

    printf("Infome o ano atual:");
    scanf("%d%*c", anoatual);

    idadeano = anoatual - anonascimento;
    idademeses = idadeano*12;
    idadesemanas = idademeses*4;
    idadedias = idadesemanas*7;

    printf("Sua idade em anos é %d \n", idadeano);
    printf("Sua idade em meses %d \n", idademeses);
    printf("Sua idade em semanas %d \n", idadesemanas);
    printf("Sua idade em dias %d \n", idadedias);

    //código apresenta erro porem não consegui identificar
}