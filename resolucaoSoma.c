#include <stdio.h>

int main()
{
    int indice = 12;
    int soma = 0;
    int k = 1;
   
    while(k < indice)
    {
        k++;
        soma = soma + k;
    }
   
    printf("%d", soma);
}