#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int main()
{
    char D;
    char N[MAX_LEN];
    char R[MAX_LEN];

    while (scanf("%c %s\n", &D, N) != EOF)
    {
        if (D == '0' && !strcmp(N, "0"))
        {
            break;
        }

        int n = strlen(N);
        int p = 0;

        for (int i = 0; i < n; ++i)
        {
            if (N[i] != D)
            {
                R[p++] = N[i];
            }
        }
        R[p] = '\0'; 

        p = 0;
        n = strlen(R);
        while (p < n && R[p] == '0')
        {
            ++p;
        }

        if (p == n)
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", R + p);
        }
    }

    return 0;
}
