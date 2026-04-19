#include <stdio.h> 

int main() { 

    int i, j, sum; 

    printf("Questão 4:\nNúmeros perfeitos entre 1 e 100:"); 

    for(i = 1; i < 101; i++) { 
        sum = 0; 
        for(j = i; j >0; j--) { 
            if(i % j == 0) { 
                sum += j; 
            }     
        }      
        //printf(" (sum = %d num = %d) ", sum, num);        
        if(sum == i * 2) { 
            printf(" %d", i); 
        } 
    } printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 