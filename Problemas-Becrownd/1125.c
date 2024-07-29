#include <stdio.h>

#define MAXSIZE 105

typedef unsigned short us;

int main()
{
    us g, p, i, j, k, _system;
    us grid[MAXSIZE][MAXSIZE], pointS[MAXSIZE], pontos[MAXSIZE];

    while (scanf("%hu %hu", &g, &p), g)
    {
        for (i = 0; i < g; ++i)
            for (j = 0; j < p; ++j)
                scanf("%hu", &grid[i][j]);

        scanf("%hu", &_system);
        while (_system--)
        {
            for (i = 0; i < p; ++i)
                pontos[i] = 0;
            for (i = 0; i < MAXSIZE; ++i)
                pointS[i] = 0;

            scanf("%hu", &k);
            for (i = 0; i < k; ++i)
                scanf("%hu", &pointS[i]);

            for (i = 0; i < g; ++i)
                for (j = 0; j < p; ++j)
                    pontos[j] += pointS[grid[i][j] - 1];

            us maior = 0;
            for (i = 0; i < p; ++i)
                if (pontos[i] > maior)
                    maior = pontos[i];

            _Bool flag = 1;
            for (i = 0; i < p; ++i)
                if (pontos[i] == maior)
                {
                    if (flag)
                    {
                        printf("%d", i + 1);
                        flag = 0;
                    }
                    else
                    {
                        printf(" %d", i + 1);
                    }
                }
            printf("\n");
        }
    }
    return 0;
}
