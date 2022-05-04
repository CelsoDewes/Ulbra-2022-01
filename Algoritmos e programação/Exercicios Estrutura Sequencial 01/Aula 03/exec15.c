//exercicios estrutura sequencial aula de Algoritmos e programação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//o custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor
//e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veiculo,
//o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor
//b) o valor correspondente aos impostos
//c) o preço final do veiculo
float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
  
    float precofab, percentrev, impost, lucrorev, valorimp, precofinal;

    printf("Informe o valor de fábrica do veiculo:\n");
    scanf("%f%*c", &precofab);

    printf("Informe o percentual de lucro da revendedora: \n");
    scanf("%f%*c", &percentrev);

    printf("Informe o percentual de impostos aplicados ao produto: \n");
    scanf("%f%*c", &impost);

    lucrorev=precofab*percentrev/100;
    valorimp=precofab*impost/100;
    precofinal=precofab+percentrev+valorimp;

    printf("O valor final do veiculo fica em %.2f, com total de %.2f em impostos e um lucro de %.2f para a revendedora", precofinal, valorimp, lucrorev);

}
