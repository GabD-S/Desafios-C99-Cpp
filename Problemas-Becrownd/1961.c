#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P, N;
    scanf("%d %d", &P, &N);

    int X[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    char *x = "YOU WIN";

    for (int i = 0; i < N - 1; i++)
    {
        int diferenca = abs(X[i + 1] - X[i]);
        if (diferenca > P)
        {
            x = "GAME OVER";
            break;
        }
    }

    printf("%s\n", x);

    return 0;
}
