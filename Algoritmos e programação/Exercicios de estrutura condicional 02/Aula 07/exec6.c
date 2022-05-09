//Exercicios de estrutura condicional
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* Faça um progeama que receba dois numeros e execute uma das operações listadas a seguir, de acordo com a escolha do usuário. 
    Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do programa. As opções são:
    1. O primeiro numero elevado ao segundo numero
    2. Raiz quadrada de cada um dos numeros
    3. raiz cubica de cada um dos numeros */

    float numero1, numero2, resultado, operacao, raiz1, raiz2;

    printf("Informe o numero 01\n");
    scanf("%f%*c", &numero1);

    printf("Informe o numero 02\n");
    scanf("%f%*c", &numero2);

    printf("Informe a operação que deseja efetuar (1, 2 e 3) conforme lista\n");
    scanf("%f%*c", &operacao);
    if(operacao!=1 && operacao!=2 && operacao!=3){
        printf("Operação inválida");
        exit( 3 );
        return 3;
    }
    if(operacao==1){
        resultado=pow(numero1,numero2);
        printf("O resultado do primeiro numero elevado ao segundo numero é %.2f\n", resultado);
    }
    if(operacao==2){
        raiz1=sqrt(numero1);
        raiz2=sqrt(numero2);
        printf("A raiz quadrada do numero 1 é %.2f e do numero 2 é %.2f\n", raiz1, raiz2);
    }
    if(operacao==3){
        raiz1=cbrt(numero1);
        raiz2=cbrt(numero2);
        printf("A raiz cúbica do numero 1 é %.2f e do numero 2 é %.2f\n", raiz1, raiz2);
    }

    system("pause");
    return 0;
}