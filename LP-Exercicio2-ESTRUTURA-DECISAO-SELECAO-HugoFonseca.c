#include <stdio.h>
#include <math.h>
int main()
{
    // QUESTÃO 1 e 5 (fluxogramas) estão no PDF.
    char operacao;
    int x, y, z, ladoqtd;
    float input, maior, menor, meio, opx, opy, resultado, vmax, vcar, multa, horavalor, horaqtd, lado, area;
    
    printf("INÍCIO Questão 2: Receber 3 valores inteiros e retornar qual tipo de triângulo.\n");
    printf("Digite um número.");
    scanf("%d", &x);
    printf("\nDigite um número.");
    scanf("%d", &y);
    printf("\nDigite um número.");
    scanf("%d", &z);

    if (x == y && y == z && x == z) {
        printf("\nSe trata de triângulo equilátero!\n");
    } else if (x == y || y == z || x == z) {
        printf("\nSe trata de triângulo isósceles!\n");
    } else {
        printf("\nSe trata de triângulo escaleno!\n");
    }    

    printf("FIM Questão 2 .\n\n");

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("INÍCIO Questão 3: Receber 3 números distintos e ordenar os valores.\n");
          
    printf("Digite um número.");
    scanf("%f", &input);
    menor = input;
    meio = input;
    maior = input;
    
    printf("\nDigite um número.");
    scanf("%f", &input);
    if (input < menor) {
        menor = input;
    } else if (input > maior){
        maior = input;
    }
    
    printf("\nDigite um número.");
    scanf("%f", &input);

    // agora sim a ordem final é definida

    if (input < menor) {
        meio = menor;
        menor = input;
    } else if (input > maior) {
        meio = maior;
        maior = input;
    } else {
        meio = input;
    }
    
    printf("MAIOR %.2f , INTERMEDIÁRIO %.2f , MENOR %.2f .\n", maior, meio, menor);
    
    printf("FIM Questão 3 .\n\n");
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("INÍCIO Questão 4: Receber 2 valores, 1 símbolo matemático então realizar operação.\n");
    printf("Digite um número.\n");
    scanf(" %f", &opx);
    printf("Digite o símbolo da operação desejada (+, -, *, /).\n");
    scanf(" %c", &operacao);
    printf("Digite um número.\n");
    scanf(" %f", &opy);
    switch (operacao) {
        case '+':
            resultado = opx + opy;
            break;
        case '-':
            resultado = opx - opy;
            break;
        case '*':
            resultado = opx * opy;
            break;
        case '/':
            resultado = opx / opy;
            break;
    }
    printf("Resultado = %.3f %c %.3f = %.3f .\n", opx, operacao, opy, resultado);
    printf("FIM Questão 4 .\n\n");
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("INÍCIO Questão 7: Recebe valores de velocidade atual, máxima e calcula a multa em caso de infração.\n");
    
    printf("Digite a velocidade máxima permitida.\n");
    scanf("%f", &vmax);
    printf("Digite a velocidade do veículo.\n");
    scanf("%f", &vcar);
    
    if (vcar > vmax) {
        multa = 5 * (vcar - vmax);
        printf("A multa de R$ %.2f foi gerada devido à excesso de velocidade.\n", multa);
    } else if (vcar == vmax) {
        multa = 0;
        printf("Limite atingido! Reduza para evitar multa.\n");
    } else {
        multa = 0;
        printf("Não há multa. Faça boa viagem!\n");
    }
    
    printf("FIM Questão 7 .\n\n");
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("INÍCIO Questão 8: Recebe valores das horas trabalhadas e retorna o salário semanal do trabalhador.\n");
    
    printf("Digite o valor em reais da hora.\n");
    scanf("%f", &horavalor);
    printf("Digite a quantidade de horas trabalhadas.\n");
    scanf("%f", &horaqtd);
          
    if (horaqtd >= 0 && horaqtd < 41) {
        printf("Salário semanal = R$ %.2f .\n", horavalor * horaqtd);
    } else if (horaqtd >= 41 && horaqtd <= 60) {
        printf("Salário semanal + bônus 50%% na qtd de horas acima de 40 = R$ %.2f .\n", horavalor * horaqtd + horavalor * (horaqtd - 40) * 0.5);
    } else if (horaqtd > 60) {
        printf("Salário semanal + bônus 100%% na qtd de horas acima de 60 = R$ %.2f .\n", horavalor * horaqtd + horavalor * (horaqtd - 60));
    } else {
        printf("A quantidade de horas trabalhadas é inválida.\n");
    }
    
    printf("FIM Questão 8 .\n\n");
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("INÍCIO Questão 9: Recebe medidas da figura regular e calcula area se for triângulo, quadrado ou hexágono.\n");
    printf("Digite a quantidade de lados que a figura possui.\n");
    scanf("%d", &ladoqtd);
    
    switch (ladoqtd) {
        case 3:
            printf("Digite a medida do lado do triângulo.\n");
            scanf("%f", &lado);
            printf("Área do triângulo = %.2f unidades de área.\n", pow(lado, 2) * sqrt(3) / 4);
            break;
        case 4:
            printf("Digite a medida do lado do quadrado.\n");
            scanf("%f", &lado);
            printf("Área do quadrado = %.2f unidades de área.\n", pow(lado,2));
            break;
        case 6:
            printf("Digite a medida do lado do hexágono.\n");
            scanf("%f", &lado);
            printf("Área do hexágono = %.2f unidades de área.\n", 3 * pow(lado, 2) * sqrt(3) / 2);
            break;
        default:
            printf("Não sei calcular a área desta figura.\n");
            break;
    }
    
    printf("FIM Questão 9 .\n\n-> Para sugestões, críticas ou relato de problemas abra uma issue em https://github.com/hugofonseca/SILP201/issues .\n");    
    
    return 0;

}

