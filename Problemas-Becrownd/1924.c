#include <stdio.h>
#include <string.h>

int main(void)
{

    int tentativas;
    char nome[100];

    scanf("%d", &tentativas);
    for (int i = 0; i < tentativas; i++)
    {
        scanf("%s", nome);
    }
    printf("Ciencia da Computacao\n");
}