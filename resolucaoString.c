Victor Santana <dev.filgueiras@gmail.com>
	
12:49 PM (2 minutes ago)
	
to me
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



#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }

    if (contador > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) aparece %d vez(es) na string.\n", contador);
    } else {
        printf("A letra 'a' não está presente na string.\n");
    }

    return 0;
}