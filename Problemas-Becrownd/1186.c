#include <stdio.h>

int main(void)
{
    float mat[12][12], somador, sum_tot;
    char let[2];
    int lider = 11, qnt = 0;

    scanf("%s", let);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &somador);
            mat[i][j] = somador;
            if (j > lider)
            {
                qnt++;
                sum_tot += somador;
            }
        }
        lider--;
    }

    if (let[0] == 'S')
    {
        printf("%.1f\n", sum_tot);
    }
    else if (let[0] == 'M')
    {
        printf("%.1f\n", sum_tot / qnt);
    }
}