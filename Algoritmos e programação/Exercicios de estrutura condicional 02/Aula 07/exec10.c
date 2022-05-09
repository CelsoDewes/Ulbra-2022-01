//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* O preço, ao consumidor, de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de fábrica.
    As porcentagens encontram-se na tabela a seguir.
    Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor
    CUSTO DE FABRICA            //  % DO DISTRIBUIDOR    //  % DOS IMPOSTOS
    até 12000,00                //           5           // isento
    entre 12000,00 e 25000,00   //           10          //  15
    acima de 25000,00           //           15          //  20 */

    float valorfabrica, valorfinal;

    printf("Informe o valor de fábrica do veiculo\n");
    scanf("%f%*c", &valorfabrica);

    if(valorfabrica<=12000){
        valorfinal=valorfabrica+valorfabrica* 5/100;
        printf("O valor final do veiculo é de R$ %.2f\n", valorfinal);
    }else if(valorfabrica>12000 && valorfabrica<25000){
        valorfinal=(valorfabrica+valorfabrica* 10/100)+(valorfabrica+valorfabrica* 10/100)*15/100;
        printf("O valor final do veiculo é de R$ %.2f\n", valorfinal);
    }else if(valorfabrica>25000){
        valorfinal=(valorfabrica+valorfabrica* 15/100)+(valorfabrica+valorfabrica* 15/100)*20/100;
        printf("O valor final do veiculo é de R$ %.2f\n", valorfinal);
    }

    
    system("pause");
    return 0;
}