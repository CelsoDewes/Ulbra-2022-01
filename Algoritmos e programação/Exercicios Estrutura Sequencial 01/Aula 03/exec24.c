//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Faça um programa que receba uma hora formada por hora e minutos(um numero real)
//calcule e mostre a hora digitada apenas em minutos. Lembre de que:
//para quatro e meia, deve-se digitar 4.30
//os minutos vão de 0 a 59
float main(void){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float horas, minuto;
    int hora,conversao;

    printf("Informe as horas e minutos\n");
    scanf("%f%*c", &horas);

    hora=(int)horas;
    minuto= horas - hora;
    conversao= (hora*60) + (minuto*100) +1;
    //por contabilizar de 0 a 59 os 60 segundo
    //foi adicionado o valor +1 para pessoas que não tem este entendimento compreenderem o resultado

    printf("Horas informadas convertidas em minutos=%d", conversao);
}