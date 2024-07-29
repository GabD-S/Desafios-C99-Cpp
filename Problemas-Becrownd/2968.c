#include <stdio.h>
#include <math.h>

int main(void)
{
    int V, N;
    scanf("%d %d", &V, &N);

    long long int distancia = (long long int)V * N;

    for (int i = 1; i < 10; i++)
    {
        long long int placas = (long long int)ceil((distancia * i * 10) / 100.0); 
        if (i == 9)
        {
            printf("%lld\n", placas);
        }
        else
        {
            printf("%lld ", placas);
        }
    }

    return 0;
}
