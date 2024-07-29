#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
        t--;
        int n;
        scanf("%d", &n);

        int *c = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
        }

        qsort(c, n, sizeof(int), cmpfunc);

        int unique_count = 1;
        for (int i = 1; i < n; i++)
        {
            if (c[i] != c[i - 1])
            {
                unique_count++;
            }
        }

        printf("%d\n", unique_count);
        free(c);
    }

    return 0;
}

