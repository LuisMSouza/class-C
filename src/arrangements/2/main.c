#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    const int pos = 10;
    int valores[pos];
    int soma = 0;
    int option, i = 0;
    for (int i = 0; i <= pos - 1; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &valores[i]);
    }
    printf("Selecione uma opção abaixo:\n\n1 - Soma dos números pares\n2 - Soma dos números ímpares\n\n");
    scanf("%i", &option);
    switch (option)
    {
    case 1:
        for (; i <= pos - 1; i++)
        {
            if ((valores[i] % 2) == 0)
            {
                soma += valores[i];
            }
        }
        printf("A soma dos números pares é igual a: %i", soma);
        break;
    case 2:
        for (; i <= pos - 1; i++)
        {
            if ((valores[i] % 2) == 1)
            {
                soma += valores[i];
            }
        }
        printf("A soma dos ímpares pares é igual a: %i", soma);
        break;
    default:
        printf("Opção inválida.");
        break;
    }
    return 0;
}