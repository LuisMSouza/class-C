#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

func1();
func2();
func3();
func4();

int main()
{
    int quest;
    setlocale(LC_ALL, "portuguese");
    printf("Escolha uma questão: ");
    scanf("%i", &quest);
    switch (quest)
    {
    case 1:
        func1();
        break;
    case 2:
        func2();
        break;
    case 3:
        func3();
        break;
    case 4:
        func4();
        break;
    case 5:
        func5();
        break;
    case 7:
        func7();
        break;
    default:
        printf("Questão não encontrada.");
        break;
    }
    return 0;
}
/*
1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a
menor palavra digitada, em tamanho e lexicograficamente.
*/
int func1()
{
    char letter[100], maior[100], menor[100], maiorT[50], menorT[50];
    printf("Digite uma plavra: ");
    scanf("%s", &letter);
    strcpy(maior, letter);
    strcpy(maiorT, letter);
    strcpy(menorT, letter);
    strcpy(menor, letter);
    while (strcmp(letter, "stop") != 0)
    {
        if (strcmp(letter, maior) > 0)
        {
            strcpy(maior, letter);
        }
        if (strcmp(letter, menor) < menor)
        {
            strcpy(menor, letter);
        }
        if (strlen(letter) > strlen(maiorT))
        {
            strcpy(maiorT, letter);
        }
        if (strlen(letter) < strlen(menorT))
        {
            strcpy(menorT, letter);
        }
        printf("Digite outra palavra: (Digite 'stop' para finalizar)");
        scanf("%s", &letter);
    }
    printf("A maior palavra digitada foi: %s\nA menor palavra digitada foi: %s\n", maior, menor);
    printf("A maior palavra em tamanho digitada foi: %s\nA menor palavra em tamanho digitada foi: %s", maiorT, menorT);
}
/*
2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.
*/
int func2()
{
    char string[50];
    int cont = 0;
    printf("Digite uma palavra maiúscula: ");
    scanf("%s", &string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A')
        {
            cont++;
        }
    }
    printf("Nessa palavra há %i letras 'A'", cont);
}
/*
3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.
*/
int func3()
{
    char string[50];
    printf("Digite uma palavra maiúscula: ");
    scanf("%s", &string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A')
        {
            printf("Letra 'A' encontrada na posição %i\n", i + 1);
        }
    }
}
/*
4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere
aparece na string lida e quantas vezes ele apareceu.
*/
int func4()
{
    char string[50];
    int cont = 0;
    printf("Digite uma palavra maiúscula: ");
    scanf("%s", &string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A')
        {
            printf("Letra 'A' encontrada na posição %i\n", i + 1);
            cont++;
        }
    }
    printf("A letra 'A' foi encontrada %i vezes", cont);
}
/*
5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse
intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.
*/
int func5()
{
    char string[50];
    char caractere;
    int cont = 0, i;
    printf("Insira uma palavra: ");
    fflush(stdin);
    gets(string);
    printf("Informe um caractere entre A e z: ");
    fflush(stdin);
    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'z')
    {
        for (i = 0; i < strlen(string); i++)
        {
            if (strcmp(string[i], caractere) == 0)
            {
                printf("Caractere encontrado na posição %i", i);
                cont++;
            }
        }
        printf("O caractere %c foi encontrado %i vezes na palavra %s", caractere, cont, string);
    }
    else
    {
        printf("Caractere inválido.");
    }
}
/*
6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e
quantos não são nem números nem letras.
*/

/*
7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira
string será a primeira na nova string e assim sucessivamente.
*/
int func7()
{
    char string[50], reverseString[50];
    int k = 0;
    printf("Insira uma palavra: ");
    fflush(stdin);
    gets(string);
    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        reverseString[k] = string[i];
        k++;
    }
    printf("A palavra digitada ao contrário é: %s", reverseString);
}
/*
8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string
auxiliar.
*/

/*
9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string
auxiliar.
*/

/*
10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas
vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.
*/