#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *arquivo;
    char msg[80];
    printf("Digite o texto a ser inserido no arquivo: ");
    gets(msg);
    if ((arquivo = fopen("archive.txt", "a")) == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO.");
    }
    else
    {
        fprintf(arquivo, "%s\n", msg);
        fclose(arquivo);
    }
    return 0;
}