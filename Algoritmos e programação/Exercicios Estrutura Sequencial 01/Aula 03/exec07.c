//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define gratifica 50
//Faça um prpgrama que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
//sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
float main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario, impost, novosal;
    printf("Informe seu salario: \n");
    scanf("%f%*c", &salario);
    
    impost= salario * 10/100;
    
    novosal= salario + gratifica - impost;
    
    printf("Salario liquido = %.2f\n", novosal);
}