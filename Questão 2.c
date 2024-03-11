#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero, termoAtual, penultimoTermo, proximoTermo;

    // Leitura do número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Inicialização dos termos
    termoAtual = 1;
    penultimoTermo = 0;

    // Loop para calcular os termos da sequência
    while (termoAtual < numero) {
        // Cálculo do próximo termo
        proximoTermo = termoAtual + penultimoTermo;

        // Atualização dos termos
        penultimoTermo = termoAtual;
        termoAtual = proximoTermo;
    }

    // Verificação se o número pertence à sequência de Fibonacci
    if (termoAtual == numero) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
