#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    const int pos = 10;
    float valores[pos];
    float soma = 0;
    for (int i = 0; i <= pos - 1; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
        soma += valores[i];
    }
    printf("A média de todos os valores digitados é igual a: %.2f", (soma / (float)pos));
    return 0;
}