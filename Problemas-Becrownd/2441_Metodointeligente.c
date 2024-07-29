#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int f[3];
    int x[601];
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &f[i]);
    }
    qsort(f, 3, sizeof(int), compare);

    for (int i = 1; i <= 600; i++)
    {
        if (i <= f[0] || i > f[0] + 200)
        {
            if (i <= f[1] || i > f[1] + 200)
            {
                if (i <= f[2] || i > f[2] + 200)
                {
                    x[count++] = i;
                }
            }
        }
    }
    if (count == 1)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", count * 100);
    }

    return 0;
}