#include <stdio.h>
#include <math.h>

double funcao(double a, double b, double c)
{
    double discriminante = b * b - 4 * a * c;
    if (discriminante < 0)
    {
        return -1;
    }
    return (b + sqrt(discriminante)) / (2 * a);
}

int main(void)
{
    double L, K, T1, T2, H;
    double F1, F2;

    scanf("%lf %lf %lf %lf %lf", &L, &K, &T1, &T2, &H);

    if (H < L)
    {
        F1 = H;
        F2 = H;
    }
    else if (H == L)
    {
        F1 = H;
        F2 = funcao(1, H + K * (T1 + T2), T1 * K * L);
    }
    else
    {
        F1 = funcao(1, H + K * (T1 + T2), T1 * K * L);
        F2 = funcao(1, H + K * (T1 + T2), T1 * K * L);
    }

    printf("%.9f %.9f\n", F1, F2);

    return 0;
}
