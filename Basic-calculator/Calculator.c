#include <stdio.h>

int main() {
    float x, y, resultado;
    char operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    
    if (operacao == '+') {
        resultado = x + y;

    } else if (operacao == '-') {
        resultado = x - y;

    } else if (operacao == '*') {
        resultado = x * y;

    } else if (operacao == '/') {
        if (y != 0) {
            resultado = x / y;
        } else {
            printf("Erro: divisao por zero nao permitida.\n");
            return 0;
        }

    } else {
        printf("Erro: operacao invalida.\n");
        return 0;
    }

    printf("O resultado da operacao e: %.2f\n", resultado);

    return 0;
}
