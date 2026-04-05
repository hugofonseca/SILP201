#include <stdio.h>

int main () {

    int i, j;
    float a[2][3], b[2][3], r[2][3];

    printf("Questão 1: Ler duas matrizes 2x3 e imprimir a soma.\n\n");
    
    for(i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz A[%d][%d] Digite um número.\n", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz B[%d][%d] Digite um número.\n", i, j);
            scanf("%f", &b[i][j]);
        }
    } printf("\nmatriz A = {");
    
    for(i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %.1f ", a[i][j]);
        }
    } printf("\n}\n\nmatriz B = {");

    for(i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %.1f ", b[i][j]);
        }
    } printf("\n}\n\nmatriz A + B = {");
    
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            r[i][j] = a[i][j] + b[i][j];
            printf(" %.1f ", r[i][j]);
        }
    } printf("\n}");


    printf("\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}