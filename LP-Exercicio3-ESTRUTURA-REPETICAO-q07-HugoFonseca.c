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
        printf("Digite seu %dº palpite.\n",i+1); 
        scanf("%d", &input); 
        i += 1;
        if (input < x)
            printf("dica: tente um valor maior.\n");
        else if (input > x)
            printf("dica: tente um valor menor\n");
    } while(input != x && i < 10); 

    if(input == x){
        printf("Acertou em %d tentativas\n", i);
        if(i >= 1 && i <= 3)  
            printf("muito sortudo."); 
        else if(i >= 4 && i <=6)
            printf("sortudo."); 
        else if (i >= 7 && i <= 10)
            printf("normal.");
    } else { 
        printf("O limite de tentativas foi excedido. Tente novamente!\n");
    }
    
    printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 