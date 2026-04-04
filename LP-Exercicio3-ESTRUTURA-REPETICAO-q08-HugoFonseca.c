#include <stdio.h> 

int main() { 

    int t = 0; 
    float saldoChi, saldoVir, iCHi, iVir; 

    printf("Questão 8: Chico tem R$ 1.000,00 guardados em uma poupança que rende 2%% ao mês.\nVirgínia tem R$ 500,00 guardados em uma conta digital que rende 4%% ao mês.\nFaça um programa que calcule em quantos meses o saldo de Chico será maior que o saldo de Virgínia,\nmostre o número de meses decorridos e os valores finais de cada um.\n\n"); 
    printf("OBSERVAÇÃO: alterei para R$ 100,00 o saldo inicial de Chico, que consta R$ 1000,00 no enunciado original.\n"); 
    printf("OBSERVAÇÃO: alterei para 20%% a taxa de juros, que consta 2%% no enunciado original.\n"); 
    printf("OBSERVAÇÃO: alterei para R$ 50.000,00 o saldo inicial de Virgínia, que consta R$ 500,00 no enunciado original.\n\n"); 

    saldoChi = 100.00; 
    iCHi = 0.2; 
    saldoVir = 50000.00; 
    iVir = 0.04; 

    do{ 
        t += 1; 
        saldoChi = saldoChi + saldoChi * iCHi; 
        //printf("Chico %.2f\n", saldoChi); 
        saldoVir =  saldoVir + saldoVir * iVir; 
        //printf("Virgínia %.2f\n", saldoVir); 
    } while(saldoVir > saldoChi); 

    printf("Meses | %d | Saldo Chico = R$ %.2f | Saldo Virgínia = R$ %.2f .\n\n", t, saldoChi, saldoVir); 

    printf("-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");
    
    return 0; 

} 