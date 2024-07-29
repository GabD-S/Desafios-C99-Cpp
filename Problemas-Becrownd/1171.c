#include <stdio.h>
#define true 1
#define false 0

#define max 2010

int main(void)
{
    int n, m, i;
    int prim[max] = {0}; 

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        prim[m]++;
    }

    for (i = 1; i <= 2000; i++)
    {
        if (prim[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i, prim[i]);
        }
    }

    return 0;
}
