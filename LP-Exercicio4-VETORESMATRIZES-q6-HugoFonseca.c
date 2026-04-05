#include <stdio.h>

int main() {

    int i, j, maior, i_maior, j_maior, matriz[4][4];

    printf("Questão 6: Ler matriz 4x4 e exibir resultado.\nInformar o maior elemento, o nº da linha e nº da coluna.\n\n");
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Matriz [%d][%d] Digite um número.\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //valor arbitrário que será conferido e corrigido abaixo
    maior = matriz[0][0];
    i_maior = 0;
    j_maior = 0;

    printf("maior forçado = %d\n", maior);
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                i_maior = i + 1;
                j_maior = j + 1;
            }
        }
    }

    printf("\n Matriz = {");
    for (i = 0; i < 4; i++) {
        printf("\n");
        for (j = 0; j < 4; j++) {
            printf(" %d ", matriz[i][j]);
        }
    } printf("\n}\n");

    printf("Maior valor: %d\nPosição: linha %d, coluna %d.", maior, i_maior, j_maior);

    printf("\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}