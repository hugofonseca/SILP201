#include <stdio.h>

int main() {

    char resp[5][10], gab[10];
    int i, j, notas[5], parcial;

    printf("Questão 7: Ler matriz 5x10 (cartão resposta de 5 alunos na prova de 10 questões).\nLer vetor gabarito e exibir vetor com as notas de cada aluno.\n\n");
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Aluno %d Questão %d Digite uma opção (a, b, c, d).\n", i + 1, j + 1);
            scanf(" %c", &resp[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        printf("GABARITO Questão %d Digite uma opção (a, b, c, d).\n", i + 1);
        scanf(" %c", &gab[i]);
    }
    
    for (i = 0; i < 5; i++) {
        parcial = 0;
        for (j = 0; j < 10; j++) {
            if (resp[i][j] == gab[j]) {
                parcial += 1;
            }
        }
        notas[i] = 0 + parcial;
    }

    printf("\nMatriz Cartão Resposta = {");
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 10; j++) {
            printf(" %c ", resp[i][j]);
        }
    } printf("\n}\n\n");

    
    printf("Vetor Gabarito = {");
    for (i = 0; i < 10; i++) {
        printf(" %c ", gab[i]);
    } printf("}\n\n");

    printf("Vetor Notas = {");
    for (i = 0; i < 5; i++) {
        printf(" %d ", notas[i]);
    } printf("}\n\n");

    printf("-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");

    return 0;
}