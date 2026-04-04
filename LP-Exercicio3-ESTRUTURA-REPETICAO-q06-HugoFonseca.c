#include <stdio.h> 

int main() { 
    int num, i; 

    printf("Questão 6: Ler um inteiro positivo e verificar se ele contém o dígito 3 em qualquer posição.\n");

    do{ 
        printf("Digite um número inteiro positivo.\n"); 
        scanf("%d", &num); 
    } while(num <= 0); 

    i = num; 

    while (i > 0){ 
        if (i % 10 == 3) { 
            printf("%d contém o dígito 3.\n", num); 
            i = -273; 
        } else { 
            i = i/10; 
        } 
    } 

    if (i != -273) { 
        printf("%d não contém o dígito 3.\n", num); 
    } printf("-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");

    return 0; 

} 