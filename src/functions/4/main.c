#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Calc(int x, int y);

int main()
{
    int x, y;
    printf("Insira um n�mero: ");
    scanf("%i", &x);
    printf("Insira outro n�mero: ");
    scanf("%i", &y);
    printf("Resto: %i", Calc(x, y));
    return 0;
}

int Calc(int x, int y)
{
    int response = 0;
    if (x < y)
    {
        response = x;
    }
    else
    {
        return Calc(x - y, y);
    }
}
