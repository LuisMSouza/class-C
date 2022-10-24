#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Somat(int, int *);

int main()
{
    int num, soma = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Insira um número: ");
    scanf("%i", &num);
    Somat(num, &soma);
    printf("O valor da soma de 1 até %i é igual a: %i", num, soma);
    return 0;
}

void Somat(int number, int *Soma)
{
    *Soma;
    for (int i = 0; i <= number; i++)
    {
        *Soma += i;
    }
}