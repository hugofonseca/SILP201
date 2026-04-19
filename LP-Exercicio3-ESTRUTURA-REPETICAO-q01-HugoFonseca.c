#include <stdio.h> 

int main() { 

    int num, antecessor, flag = 0;

    printf("Questão 1: Ler número inteiro e informar se ele é primo ou não, considerando que 0 e 1 não são primos.\n");
    
    do {
        printf("Digite um número.\n"); 
        scanf("%d", &num);
    } while (num < 0);

    antecessor = num - 1;
    
    if (num == 0 || num == 1) {
        printf("Não é primo!\n");
    } else {
        while (flag == 0 && antecessor != 1) {
            if (num % antecessor == 0)
                flag = 1;
            else
                antecessor -= 1;
        }
    }
    
    if (antecessor == 1)
        printf("É primo!");
    else if (flag == 1) {
        printf("Não é primo!");
    }
    
    printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 