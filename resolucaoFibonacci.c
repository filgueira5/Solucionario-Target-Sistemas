#include <stdio.h>

int pertenceFibonacci(int numero) {
    int a = 0, b = 1, proximo;

    if (numero == a || numero == b) {
        return 1;
    }

    while (b <= numero) {
        proximo = a + b;
        a = b;
        b = proximo;

        if (b == numero) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}