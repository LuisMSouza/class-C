#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, soma;
    // printf("Digite o primeiro valor: ");
    scanf("%i", &a);
    // printf("Digite o segundo valor: ");
    scanf("%i", &b);
    soma = a + b;
    printf("%i", soma);
    return 0;
}
