#include <stdio.h>

int main() {

    float a[3][2], b[2][3], p[3][3];
    int i, j;

    printf("Questão 2: Ler uma matriz 2x3 e outra matriz 3x2 de números reais.\nCalcular o produto e exibir.\n\n");
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("Matriz A[%d][%d] Digite um número.\n", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Matriz B[%d][%d] Digite um número.\n", i, j);
            scanf("%f", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            p[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
        }
    }

    printf("\nmatriz A = {");
    for(i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf(" %.1f ", a[i][j]);
        }
    } printf("\n}\n");

    printf("\nmatriz B = {");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j <3; j++) {
            printf(" %.1f ", b[i][j]);
        }
    } printf("\n}\n");

    printf("\nmatriz A * B = {");
    for(i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %.1f ", p[i][j]);
        }
    } printf("\n}");

    printf("\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}