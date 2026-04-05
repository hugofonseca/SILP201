#include <stdio.h>

int main() {

    int input, vetor[10], i, p, flag;

    printf("Questão 1: Ler 10 números diferentes, salvar em vetor.\nAcusar e corrigir duplicidade, se houver.\nAo final, exibir vetor.");
    
    flag = 0;
    
    for (i = 0; i < 10; i++){
        printf("\n\nLançando %d/10 valores.\n\n", i+1);
        printf("Digite um número.\n");
        scanf("%d", &input);
        
        if (i == 0) {
            vetor[i] = input;
        } else {
            for (p = i - 1; p >= 0; p--) {
                if (vetor[p] == input) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                vetor[i] = input;
            } else {
                do {
                    flag = 0;
                    printf("Erro valor repetido. Digite novamente.\n");
                    scanf("%d", &input);
                    for (p = i - 1; p >= 0; p--) {
                        if (vetor[p] == input) {
                            flag = 1;
                        }
                    }
                    if (flag == 0) {
                        vetor[i] = input;
                    }
                } while (flag == 1);
                
            }
        }
        
        
    }
    
    printf("\nvetor = { ");
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }printf("} .\n");

    printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n\n");
    
    return 0;
}
