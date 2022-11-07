#include <stdio.h>>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *arq = fopen("fibonacci.txt", "r");
    FILE *primos = fopen("primos.txt", "w");

    if (!arq)
    {
        printf("Arquivo inexistente, execute o exercício 1 primeiro...");
    }
    else
    {
        char vetor[64];
        int count = 0;
        while (fgets(vetor, 64, arq) != NULL)
        {
            double toNum = strtod(vetor, NULL);
            for (int i = 1; i <= (int)toNum; i++)
            {
                if (((int)toNum % i) == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                fprintf(primos, "%.0f\n", toNum);
            }
            count = 0;
        }
        printf("Operação executada com sucesso!\nNúmeros primos separados em arquivo distinto.");
        fclose(arq);
    }
    return 0;
}