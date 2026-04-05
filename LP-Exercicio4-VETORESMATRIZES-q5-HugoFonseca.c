#include <stdio.h>

int main() {
    
    int m[5][5], i, j;

    printf("Questão 1: Criar matriz 5x5, preencher 1 na diagonal principal e 0 nos demais campos.\nExibir matriz.\n");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if (i == j) {
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf(" %d ", m[i][j]);
        }
    }printf("\n");

    printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}