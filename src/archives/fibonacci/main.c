#include <stdio.h>>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    double first = 1;
    double second = 1;
    double next;
    FILE *arq = fopen("fibonacci.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao abrir arquivo");
    }
    else
    {
        for (int i = 0; i < 64; i++)
        {
            if (i < 2)
            {
                fprintf(arq, "%.0f\n", 1.0);
            }
            else
            {
                next = first + second;
                first = second;
                second = next;
                fprintf(arq, "%.0f\n", next);
            }
        }
        printf("Operação executada com sucesso!\nSequência Fibonacci salva no arquivo 'fibonacci.txt'");
        fclose(arq);
    }
    return 0;
}