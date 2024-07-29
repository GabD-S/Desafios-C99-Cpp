#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int q, e, si, ci;

    scanf("%d %d", &q, &e);
    int v[e], v1[q];
    for (int i = 0; i < e; i++)
    {
        scanf("%d", &si);
        v[i] = si;
    }
    for (int j = 0; j < q; j++)
    {
        scanf("%d", &ci);
        v1[j] = ci;
    }

    for (int i = 0; i < q; i++)
    {
        int found = 0;
        for (int k = 0; k <= i; k++)
        {

            if (k != i && v1[i] == v1[k])
            {
                //printf("v1-> %d  v1 pt2-> %d\n", v1[i], v1[k]);
                found = 1;
                break;
            }
        }
        for (int j = 0; j < e; j++)
        {
            if (v1[i] == v[j])
            {
                found = 1;
                break;
            }
        }

        if (found)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}
