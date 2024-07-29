 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &p[i]);
    }

    int dist = 0;
    int k = -1;
    for (int i = 0; i < n; ++i)
    {
        int d = p[0] + i + p[i];
        if (d > dist)
        {
            dist = d;
            k = i;
        }
    }

    int max_dist = 0;
    for (int j = 0; j < n; ++j)
    {
        if (j != k)
        {
            int current_dist = p[k] + abs(k - j) + p[j];
            if (current_dist > max_dist)
            {
                max_dist = current_dist;
            }
        }
    }
    printf("%d\n", max_dist);
    return 0;
}
