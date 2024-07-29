#include <stdio.h>
#include <stdlib.h>
#define MAX 10001

int main(void)
{
    int n, soma = 0;
    int vetor[MAX];

    while (1)
    {
        soma++;
        scanf("%d", &n);
        if (n == 0)
            return 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &vetor[i]);
        }
        printf("Teste %d\n", soma);
        for (int i = 1; i <= n; i++)
        {
            if (vetor[i] == i)
            {
                printf("%d", vetor[i]);
            }
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
