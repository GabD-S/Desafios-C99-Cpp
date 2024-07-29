#include <stdio.h>

int main(void)
{
    float mat[12][12];
    double sum_tot, qnt = 0, somador;
    char let[2];
    int lider = 0, lide_amenos1 = 11;

    scanf("%s", let);
    for (int i = 0; i < 12; i++)
    {

        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &somador);
            mat[i][j] = somador;
            if (j < lider && j > lide_amenos1 && i > 6)
            {
                qnt++;
                sum_tot += somador;
            }
        }
            lider++;
            lide_amenos1--;

    }
    if (let[0] == 'S')
    {
        printf("%.1lf\n", sum_tot);
    }
    else if (let[0] == 'M')
    {
        printf("%.1lf\n", sum_tot / qnt);
    }
}