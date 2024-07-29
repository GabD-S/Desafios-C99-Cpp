#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cal(double a)
{
    double result;
    result = (4/3.0)* M_PI * pow(a,3);
    return result;
}

int main()
{

    double a, b, c, d, e, f, soma;
    scanf("%lf", &a);
    soma = cal(a);
    printf("VOLUME = %.3lf\n", soma);

    return 0;
}
