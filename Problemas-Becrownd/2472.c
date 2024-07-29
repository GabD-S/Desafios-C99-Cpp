#include <stdio.h>
#include <math.h>

int main(void)
{

    double l, n, resto, maior;

    scanf("%lf %lf", &l, &n);
    resto = (n - 1);
    maior = (l - resto);
    printf("%.0lf\n", maior * maior + resto);

}