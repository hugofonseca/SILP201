#include <stdio.h> 

int main() { 

    int num, resultado, divisor = 2;

    printf("Questão 1: Ler número inteiro e informar se ele é primo ou não, considerando que 0 e 1 não são primos.\n");
    
    printf("Digite um número.\n"); 
    scanf("%d", &num); 
    
    if (num == 2) {
        printf("É primo!\n");
    } else if (num == 0 || num == 1) {
        printf("Não é primo!\n");

    } else {
        do { 
            resultado = num % divisor; 
            divisor += 1; 
        } while (divisor < num && resultado != 0);
        if (resultado == 0) { 
            printf("Não é primo!\n"); 
        } else { 
            printf("É primo!\n"); 
        }
    }printf("-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 