#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void Fatorial();
int globalN;
int globalFat;

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Digite um valor para N: ");
    scanf("%i", &globalN);
    Fatorial();
    printf("O fatorial de %i é igual a: %i", globalN, globalFat);
    return 0;
}

void Fatorial()
{
    globalFat = 1;
    int i = globalN;
    while (i != 0)
    {
        
    }
}