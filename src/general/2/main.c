#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N, Soma;
void FunctionSoma();

int main()
{
    printf("Digite um valor para N: ");
    scanf("%i", &N);
    FunctionSoma();
    printf("A soma de 1 até %i é igual a: %i", N, Soma);
    return 0;
}

void FunctionSoma()
{
    Soma = 0;
    for(int i = 1; i <= N; i++)
    {
        Soma += i;
    }
}