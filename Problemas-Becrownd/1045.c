#include <stdio.h>
#include <math.h>

double cal(double a, double b, double c)
{
    double res, a1, b1, c1;
    a1 = a;
    if (b > a && b > c)
    {
        a = b;
        b = a1;
    }
    else if (c > a)
    {
        a = c;
        c = a1;
    }

    if (a >= (b + c))
    {
        printf("Invalido\n");
    }
    else
    {
        if (a == b && b == c && a == c)
        {
            if (a * a == b * b + c * c)
            {
                printf("Valido-Equilatero\nRetangulo: S\n");
            }
            else
            {
                printf("Valido-Equilatero\nRetangulo: N\n");
            }
        }
        if (a == b && b != c || a == c && c != b || b == c && c != a)
        {
            if (a * a == b * b + c * c)
            {
                printf("Valido-Isoceles\nRetangulo: S\n");
            }
            else
            {
                printf("Valido-Isoceles\nRetangulo: N\n");
            }
        }
        if (a != b && a != c && b != c)

        {
            if (a * a == b * b + c * c)
            {
                printf("Valido-Escaleno\nRetangulo: S\n");
            }
            else
            {
                printf("Valido-Escaleno\nRetangulo: N\n");
            }
        }
    }
    return 0;
}

int main(void)
{
    double a, b, c, res;
    scanf("%lf %lf %lf", &a, &b, &c);
    res = cal(a, b, c);
}
