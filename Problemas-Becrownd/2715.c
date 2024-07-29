#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long min(long long a, long long b)
{
    return a < b ? a : b;
}

int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        long long *somas = (long long *)malloc(N * sizeof(long long));
        scanf("%lld", &somas[0]);
        for (int i = 1; i < N; ++i)
        {
            scanf("%lld", &somas[i]);
            somas[i] += somas[i - 1];
        }

        int inicio = 0, fim = N;
        long long resposta = somas[N - 1];
        while (inicio < fim)
        {
            int meio = (inicio + fim) / 2;

            long long rangel = somas[meio];
            long long gugu = somas[N - 1] - rangel;
            resposta = min(resposta, llabs(rangel - gugu));

            if (rangel == gugu)
            {
                break;
            }
            else if (rangel < gugu)
            {
                inicio = meio + 1;
            }
            else
            {
                fim = meio;
            }
        }

        printf("%lld\n", resposta);
        free(somas);
    }

    return 0;
}
