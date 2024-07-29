#include <stdio.h>

int main(void)
{

    double o, b, i, aux;

    scanf("%lf %lf %lf", &o, &b, &i);

    if (o == b || o == i || b == i || b == o)
    {
        printf("Empate\n");
    }
    else
    {
        if (o < b && o < i )
            printf("Otavio\n");
        if (b < o && b < i)
            printf("Bruno\n");
        if (i < o && i < b)
            printf("Ian\n");
    }
}