#include <stdio.h>

#define true 1
#define false 0

#define max 101

int main(void)
{

    int i, tmp, qts, fig, quantidade;

    scanf("%d\n%d", &qts, &fig);

    _Bool album[max] = {false};

    for (i = 0; i < fig; i++)
    {
        /*Coloca no lugar do indice o resto ta repetido*/
        scanf("%d", &tmp);
        album[tmp] = true;
    }

    /*for (int i = 1; i <= qts; i++)
    {
        printf("%d ", album[i]);
    }
    printf("-----\n");*/

    quantidade = 0;
    for (i = 1; i <= qts; i++)
    {
        if (!album[i])
        {
            quantidade++;
        }
    }
    printf("%d\n", quantidade);
}