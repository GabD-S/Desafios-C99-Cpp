#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m, q, t;
    scanf("%d", &n);
    char **v = malloc(n * sizeof(char *));
    for (int g = 0; g < n; g++)
    {
        v[g] = malloc(101 * sizeof(char));
        scanf("%s", v[g]);
    }
    scanf("%d", &m);
    char e[101];
    for (int g = 0; g < m; g++)
    {
        scanf("%s", e);
        q = 0;
        for (int i = 0; i < n; i++)
        {
            if (strncmp(v[i], e, strlen(e)) == 0)
            {
                q++;
                if (q != 1)
                {
                    if (strlen(v[i]) > t)
                        t = strlen(v[i]);
                }
                else
                    t = strlen(v[i]);
            }
        }
        if (q != 0)
            printf("%d %d\n", q, t);
        else
            printf("-1\n");
    }
    for (int g = 0; g < n; g++)
        free(v[g]);
    free(v);
    return 0;
}
