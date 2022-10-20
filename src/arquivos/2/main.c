#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char buffer[128];
    FILE *arquivo;
    if ((arquivo = fopen("archive.txt", "r")) == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO");
    }
    else
    {
        fgets(buffer, 80, arquivo);
        while (!feof(arquivo));
        {
            printf("%s", buffer);
            fgets(buffer, 80, arquivo);
        }
        fclose(arquivo);
    }
    return 0;
}