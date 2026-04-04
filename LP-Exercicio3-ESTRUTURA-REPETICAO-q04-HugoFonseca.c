#include <stdio.h> 

int main() { 

    int num, i, j, sum; 

    printf("Questão 4:\nNúmeros perfeitos entre 1 e 100:"); 

    for(i = 1; i <= 100; i++) { 
        num = i; 
        sum = 0; 

        for(j = 1; j <= i; j++) { 
            if(i % j == 0) { 
                sum += j; 
            }     
        }      

        //printf(" (sum = %d num = %d) ", sum, num);        

        if(sum == num * 2) { 
            printf(" %d", num); 
        } 
    } printf("\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 