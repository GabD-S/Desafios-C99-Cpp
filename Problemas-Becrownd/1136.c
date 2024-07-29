#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N, B;

    while (1)
    {
        scanf("%d %d", &N, &B);

        if (N == 0 && B == 0)
        {
            break;
        }

        int bolas[B];
        for (int i = 0; i < B; i++)
        {
            scanf("%d", &bolas[i]);
        }

        bool marcado[N + 1];
        for (int i = 0; i <= N; i++)
        {
            marcado[i] = false;
        }

        for (int i = 0; i < B; i++)
        {
            for (int j = i; j < B; j++)
            {
                int diferenca = abs(bolas[i] - bolas[j]);
                marcado[diferenca] = true;
            }
        }

        bool resultado = true;
        for (int i = 0; i <= N; i++)
        {
            if (!marcado[i])
            {
                resultado = false;
                break;
            }
        }

        printf("%s\n", resultado ? "Y" : "N");
    }

    return 0;
}
