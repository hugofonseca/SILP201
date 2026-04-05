#include <stdio.h>

int main () {

    int i, j, k, vetor[3], matriz[3][3], resultado[3];

    printf("Questão 4: Ler vetor de 3 elementos e matriz 3x3.\nCalcular o produto do vetor pelas colunas da matriz.\nExibir resultado.\n\n");
    
    for(i = 0; i < 3; i++) {
        printf("vetor [%d] Digite um número.\n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matriz [%d][%d] Digite um número.\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        resultado[i] = vetor[0] * matriz[0][i] + vetor[1] * matriz[1][i] + vetor[2] * matriz[2][i];
    }

    printf("\nvetor A = {");
    for(i = 0; i < 3; i++) {
        printf(" %d ", vetor[i]);
    }printf("}\n");

    printf("\nmatriz B = {");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %d ",matriz[i][j]);
        }
    }printf("\n}\n");

    printf("\nvetor A * B = {");
    for(i = 0; i < 3; i++) {
        printf(" %d ", resultado[i]);
    }printf("}\n");    

    printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");
    
    return 0;
}