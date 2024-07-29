#include <stdio.h>
#include <string.h>
#define max 100

int main(void)
{

    int n, k, boleano;
    char idioma[100], vetor[max][max];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%s", idioma);
            strcpy(vetor[j], idioma);
        }

        boleano = 0;
        for (int j = 1; j < k; j++)
        {
            if (strcmp(vetor[j], vetor[0]) != 0)
            {
                boleano = 1;
                break;
            }
        }
        if (boleano)
        {
            printf("ingles\n");
        }
        else
        {
            printf("%s\n", vetor[0]);
        }
    }
}