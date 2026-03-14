#include <stdio.h>
int main()
{
    int x, y, z;
    float a, m, n, soma, sub, prod, quo, g, quarto, saldo, saldoFinal, tc, tf, min, seg, hor;
    
    printf("INÍCIO Questão 1: Calcular a média de três notas de um aluno\n");
    printf("Digite a 1ª nota.\n");
    scanf("%d", &x);
    printf("Digite a 2ª nota.\n");
    scanf("%d", &y);
    printf("Digite a 3ª nota.\n");
    scanf("%d", &z);
    a = (x + y + z) / 3;
    printf("A média das notas é %f .\n", a);
    printf("FIM Questão 1 .\n\n");
    
    printf("INÍCIO Questão 2: Ler dois números reais e calcular: soma, subtração, multiplicação e divisão.\n");
    printf("Digite um número.\n");
    scanf("%f", &m);
    printf("Digite outro número.\n");
    scanf("%f", &n);
    soma = m + n;
    sub = m - n;
    prod = m * n;
    quo = m / n;
    printf("-----------------------------\n");
    printf("%-13s %9s\n", "OPERACAO", "RESULTADO");
    printf("-----------------------------\n");
    printf("%-13s %9.1f\n", "Soma", soma);
    printf("%-13s %9.1f\n", "Subtracao", sub);
    printf("%-13s %9.1f\n", "Multiplicacao", prod);
    printf("%-13s %9.1f\n", "Divisao", quo);
    printf("-----------------------------\n");
    printf("FIM Questão 2 .\n\n");
    
    printf("INÍCIO Questão 3: Receber um número real e mostrar 1/4 deste valor.\n");
    printf("Digite um número X.\n");
    scanf("%f", &g);
    quarto = g / 4;
    printf("1/4 de X = %f .\n", quarto);
    printf("FIM Questão 3 .\n\n");
    
    printf("INÍCIO Questão 4: Leia o saldo de uma conta e mostre o novo saldo com reajuste de 2%%.\n");
    printf("Digite o saldo da conta.\n");
    scanf("%f", &saldo);
    saldoFinal = saldo + (0.02 * saldo);
    printf("O valor final será %.2f .\n", saldoFinal);
    printf("FIM Questão 4 .\n\n");
    
    printf("INÍCIO Questão 5: Ler um valor em graus Celsius e converter para Fahrenheit.\n");
    printf("Digite a temperatura.\n");
    scanf("%f", &tc);
    tf = (9 * tc + 160) / 5;
    printf("-----------------------------\n");
    printf("%-10s %10s\n", "ºC", "ºF");
    printf("-----------------------------\n");
    printf("%-10.1f %10.1f\n", tc, tf);
    printf("-----------------------------\n");
    printf("FIM Questão 5 .\n\n");

    printf("INÍCIO Questão 6: Conversão de Tempo (DE segundos PARA horas e minutos).\n");
    printf("Digite o valor em segundos.\n");
    scanf("%f", &seg);
    min = seg / 60;
    hor = min / 60;
    printf("Resultado da conversão em HORAS = %.1f .\n Resultado da conversão em MINUTOS = %.1f .\n", hor, min);
    printf("FIM Questão 6 .\n\n");
    
    
    return 0;
}