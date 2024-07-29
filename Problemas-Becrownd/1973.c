#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define MAXSIZE 1000010

typedef long long unsigned llu;

char jaataco[MAXSIZE];

int main(void)
{
    int n, i = 0;
    llu somatorio = 0, atacados = 0, soma = 0;
    int *v;
    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &v[j]);
        somatorio += v[j];
    }

    while (i >= 0 && i < n)
    {
        if (!jaataco[i]){atacados++;}

        jaataco[i] = true;

        if (v[i] % 2 == 1)
        {
            soma++;
            v[i]--;
            i++;
        }
        else
        {
            if (v[i] > 0)
            {
                soma++;
                v[i]--;
            }
            i--;
        }
    }

    printf("%llu %llu\n", atacados, somatorio - soma);

    free(v);

    return 0;
}
