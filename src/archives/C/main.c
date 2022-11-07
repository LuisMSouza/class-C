#include <stdio.h>>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Exec01();
void Exec02();
void Exec03();
void Exec04();

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("cls");
    int choice = 0;
    printf("Digite a questão desejada (Ou digite -1 para finalizar): \n\n1) Serie de Fibonacci\n2) Par e ímpar\n3) Primos\n4) Verificar números\n\n-> ");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        Exec01();
        break;
    case 2:
        Exec02();
        break;
    case 3:
        Exec03();
        break;
    case 4:
        Exec04();
        break;
    }
    return 0;
}

void Exec01()
{
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
}

void Exec02()
{
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
}

void Exec03()
{
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
}

void Exec04()
{
    FILE *arq = fopen("fibonacci.txt", "r");

    if (!arq)
    {
        printf("Arquivo inexistente, execute o exercício 1 primeiro...");
    }
    else
    {
        char vetor[64];
        int hasNum[64];
        char vetorAux[64];
        int count = 0, count2 = 1, valor, contAux = 0;
        while (valor != -1)
        {
            printf("Digite um número inteiro positivo: ");
            scanf("%i", &valor);
            if (valor < 0)
            {
                break;
            }
            hasNum[count] = valor;
            count++;
        }
        while (fgets(vetor, 64, arq) != NULL)
        {
            double toNum = strtod(vetor, NULL);
            vetorAux[contAux] = vetor;
            contAux++;
            for (int i = 0; i < count; i++)
            {
                if (hasNum[i] == (int)toNum)
                {
                    printf("O número %.0f pertence ao arquivo e se encontra na posição %i.\n", toNum, count2);
                }
            }
            count2++;
        }
        fclose(arq);
    }
}