#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int Soma;

void Somat(int);

int main()
{
    int num;
    setlocale(LC_ALL, "portuguese");
    printf("Insira um número: ");
    scanf("%i", &num);
    Somat(num);
    printf("O valor da soma de 1 até %i é igual a: %i", num, Soma);

    return 0;
}

void Somat(int number)
{
    Soma = 0;
    for (int i = 0; i <= number; i++)
    {
        Soma += i;
    }
}