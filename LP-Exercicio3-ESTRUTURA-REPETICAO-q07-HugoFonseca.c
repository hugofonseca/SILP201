#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() { 
    int i = 0, input; 

    printf("Questão 7: sortear um número mágico entre 0 e 500 e perguntar repetidamente ao usuário seu palpite;\nA cada tentativa informar se o palpite é maior ou menor que o número mágico e contar o total de tentativas;\nQuando acertar, classifique:\n1~3 tentativas “muito sortudo”, 4~6 “sortudo”, 7~10 “normal”, >10 “tente novamente”.\n");
    
    srand(time(NULL)); 
    int x = rand() % 501; 
   
    //printf("teste %d\n", x); 

    do { 
        printf("Digite seu palpite.\n"); 
        scanf("%d", &input); 
        i += 1; 
    } while(input != x && i < 11); 

    if(i >= 1 && i <= 3) { 
        printf("muito sortudo."); 
    } else if(i >= 4 && i <=6) { 
        printf("sortudo."); 
    } else if (i >= 7 && i <= 10) { 
        printf("normal."); 
    } else if (i > 10) { 
        printf("tente novamente."); 
    } printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 