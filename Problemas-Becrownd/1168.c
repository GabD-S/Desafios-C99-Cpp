#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 10001

int opcao(char c)
{
    switch (c)
    {
    case '0':
        return 6;
    case '1':
        return 2;
    case '2':
        return 5;
    case '3':
        return 5;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 3;
    case '8':
        return 7;
    case '9':
        return 6;
    default:
        return 0;
    }
}

int main(void)
{
    int n,soma=0;
    char v[MAX_NUM];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        soma = 0; 

        scanf("%s", v);

        for (int j = 0; v[j] != '\0'; j++)
        {
            soma += opcao(v[j]);
        }

        printf("%d leds\n", soma);
    }

    return 0;
}
