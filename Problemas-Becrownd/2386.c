#include <stdio.h>

int main(void)
{

    double a, n, f, soma;

    scanf("%lf", &a);
    scanf("%lf", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &f);
        if (f * a >= 40000000)
        {
            soma++;
        }
    }
    printf("%.0lf\n", soma);
}
