#include <stdio.h>

int main() {
    
    int m[3][3], i, j;

    printf("Questão 3: Ler matriz 3x3, multiplicar elementos por 5 e exibir matriz.\n\n");
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++) {
            printf("Digite um número.\n");
            scanf("%d", &m[i][j]);
        }
    } printf("\nmatriz = {");
    
    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %d ", m[i][j]);
        }
    } printf("\n}\n\nmatriz * 5 = {");

    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %d ", 5*m[i][j]);
        }
    } printf("\n}");


    printf("\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}