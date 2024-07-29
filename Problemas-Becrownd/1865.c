#include <stdio.h>
#include <string.h>

int main(void)
{

    char nome[10];
    int forca, tentativas, i = 0;

    scanf("%d", &tentativas);
    while (i < tentativas)
    {

        scanf("%s %d", nome, &forca);

        if (strcmp(nome, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
        i++;
    }
}