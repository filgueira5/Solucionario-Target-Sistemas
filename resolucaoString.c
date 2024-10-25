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