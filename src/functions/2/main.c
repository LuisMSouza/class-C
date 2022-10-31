#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int base, potencia;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número base: ");
    scanf("%i", &base);
    printf("Digite um número para a potência: ");
    scanf("%i", &potencia);
    int result = Pot(base, potencia);
    fsadfdsa
        printf("%i ^ %i = %i" base, potencia, result);
    return 0;
}

int Pot(int base, int potencia)
{
    if (potencia == 0)
    {
        return 1;
    }
    else
    {
        return base * Pot(base, potencia - 1);
    }
}