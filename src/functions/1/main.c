#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int num = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Insira um número: ");
    scanf("%i", &num);
    printf("O valor da soma de 1 até %i é igual a: %i", num, Somat(num));
    return 0;
}

int Somat(int number)
{
    int soma = 0;
    for (int i = 0; i <= number; i++)
    {
        soma += i;
    }
    return soma;
}