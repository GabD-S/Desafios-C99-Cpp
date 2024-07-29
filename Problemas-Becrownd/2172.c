#include <stdio.h>

int main(void)
{
    double x, m;
    while (1)
    {
        scanf("%lf %lf", &x, &m);
        if (x == 0 && m == 0)
            return 0;
        printf("%.0lf\n", x * m);
    }
}