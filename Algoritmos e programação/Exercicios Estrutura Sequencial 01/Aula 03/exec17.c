//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//Um trabalhador recebeu seu salario e o depositou em sua conta bancarioa. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
//Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float salario, cheque1, cheque2, taxa1, taxa2, saldo;

    printf("informe o salario\n");
    scanf("%f%*c", &salario);

    printf("Informe valor de retirada 1\n");
    scanf("%f%*c", &cheque1);

    printf("Informe valor de retirada 2\n");
    scanf("%f%*c", &cheque2);

    taxa1=cheque1*0.38/100;
    taxa2=cheque2*0.38/100;
    saldo=salario-cheque1-cheque2-taxa1-taxa2;

    printf("O saldo atual é de %.2f", saldo);
}