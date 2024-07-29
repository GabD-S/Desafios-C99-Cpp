#include <stdio.h>
#include <string.h>

#define MAX 20000

int main(void)
{
    int n, m, i, j, k, cont;
    int bilhete[MAX], bilheteCopia[MAX];

    while (scanf("%d %d", &n, &m) == 2 && (n != 0 || m != 0))
    {
        for (i = 0; i < m; i++)
        {
            scanf("%d", &bilhete[i]);
        }

        for (i = 0; i < m; i++)
        {
            bilheteCopia[i] = bilhete[i];
        }

        cont = 0;

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i != j && bilhete[i] == bilheteCopia[j])
                {
                    cont++;
                    bilheteCopia[j] = 0;
                    for (k = j; k < m; k++)
                    {
                        if (bilhete[i] == bilheteCopia[k])
                        {
                            bilheteCopia[k] = 0;
                        }
                    }
                    break;
                }
                bilheteCopia[i] = 0;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}
