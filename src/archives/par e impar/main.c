#include <stdio.h>>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *arq = fopen("fibonacci.txt", "r");
    FILE *pares = fopen("pares.txt", "w");
    FILE *impares = fopen("impares.txt", "w");

    if (!arq)
    {
        printf("Arquivo inexistente, execute o exercício 1 primeiro...");
    }
    else
    {
        char vetor[64];
        while (fgets(vetor, 64, arq) != NULL)
        {
            double toNum = strtod(vetor, NULL);
            if (toNum > 2147483646.0)
            {
                if (fmod(toNum, 2.0) != 0)
                {
                    fprintf(impares, "%.0f\n", toNum);
                }
                else
                {
                    fprintf(pares, "%.0f\n", toNum);
                }
            }
            else
            {
                if (((int)toNum % 2) != 0)
                {
                    fprintf(impares, "%.0f\n", toNum);
                }
                else
                {
                    fprintf(pares, "%.0f\n", toNum);
                }
            }
        }
        printf("Operação executada com sucesso!\nNúmeros pares e ímpares separados em arquivos distintos.");
        fclose(arq);
    }
    return 0;
}