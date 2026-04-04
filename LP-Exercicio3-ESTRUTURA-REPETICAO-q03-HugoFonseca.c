#include <stdio.h> 
 
int main() { 
    int num, i; 
    int sum = 0; 
    int qtd = 0; 

    printf("Questão 3: Um cinema vende ingressos numerados de 1 a 100. Faça um programa que calcule\na soma de todos os números de poltronas múltiplos de 7 (ou seja, 7, 14, 21, … até 98).\nMostre também quantos múltiplos foram encontrados.\n\n");
    
    for(i = 1; i < 15; i++) { 
        num = 7 * i; 
        sum += num; 
        qtd += 1; 

        if (i == 1) { 
            printf("Poltronas múltiplas de 7: %d", num); 
        } else { 
            printf(" %d", num); 
        } 

    } 

    printf("\nSOMA = %d\n", sum); 
    printf("QUANTIDADE = %d\n", qtd); 

    printf("-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");

    return 0; 

} 