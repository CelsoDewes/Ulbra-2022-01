#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /*Faça um programa que mostre a data e a hora do sistema nos seguintes formatos:
    dd/mm/aaaa - mês por extenso e hora:minuto*/

    int dia, mes, ano, hora, minuto;

    printf("Digite dia, mês e ano em numerais\n");
    scanf("%d%*c", &dia);
    scanf("%d%*c", &mes);
    scanf("%d%*c", &ano);

    switch (mes)
    {
    case 1:
        printf("%d/janeiro/%d", dia, ano);
        break;
    case 2:
        printf("%d/fevereiro/%d", dia, ano);
        break;
    case 3:
        printf("%d/março/%d", dia, ano);
        break;
    case 4:
        printf("%d/abril/%d", dia, ano);
        break;
    case 5:
        printf("%d/maio/%d", dia, ano);
        break;
    case 6:
        printf("%d/junho/%d", dia, ano);
        break;
    case 7:
        printf("%d/julho/%d", dia, ano);
        break;
    case 8:
        printf("%d/agosto/%d", dia, ano);
        break;
    case 9:
        printf("%d/setembro/%d", dia, ano);
        break;
    case 10:
        printf("%d/outubro/%d", dia, ano);
        break;
    case 11:
        printf("%d/novembro/%d", dia, ano);
        break;
    case 12:
        printf("%d/dezembro/%d", dia, ano);
        break;
    default:
        break;
    }
    // if(mes==1){
    //     printf("%d/janeiro/%d", dia, ano);
    // }
    // if(mes==2){
    //     printf("%d/fevereiro/%d", dia, ano);
    // }
    // if(mes==3){
    //     printf("%d/março/%d", dia, ano);
    // }
    // if(mes==4){
    //     printf("%d/abril/%d", dia, ano);
    // }
    // if(mes==5){
    //     printf("%d/maio/%d", dia, ano);
    // }
    // if(mes==6){
    //     printf("%d/junho/%d", dia, ano);
    // }
    // if(mes==7){
    //     printf("%d/julho/%d", dia, ano);
    // }
    // if(mes==8){
    //     printf("%d/agosto/%d", dia, ano);
    // }
    // if(mes==9){
    //     printf("%d/setembro/%d", dia, ano);
    // }
    // if(mes==10){
    //     printf("%d/outubro/%d", dia, ano);
    // }
    // if(mes==11){
    //     printf("%d/novembro/%d", dia, ano);
    // }
    // if(mes==12){
    //     printf("%d/dezembro/%d", dia, ano);
    // }
    
    printf("\nInforme a hora e os minutos em numeral\n");
    scanf("%d%*c", &hora);
    scanf("%d%*c", &minuto);
    printf("A hora atual: %d:%d", hora, minuto);
    return 0;
}