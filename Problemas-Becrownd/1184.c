#include <stdio.h>

int main(void)
{
    float mat[12][12], somador, sum_tot;
    char let[2];
    int lider = 0, qnt = 0;

    scanf("%s", let);
    for (int i = 0; i < 12; i++)
    {
        // printf("Lider da linha-> %d\n", lider);
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &somador);
            mat[i][j] = somador;
            if (j < lider)
            {
                // printf("FUNCIONANDO %f\n",somador);
                qnt++;
                sum_tot += somador;
            }
        }
        lider++;
    }

    // for (int i = 0; i < 12; i++)
    // {
    // for (int j = 0; j < 12; j++)
    // {
    // printf("%f  ", mat[i][j]);
    // }
    // printf("\n");
    // }

    if (let[0] == 'S')
    {
        printf("%.1f\n",sum_tot);
    }
    else if (let[0] == 'M')
    {
        printf("%.1f\n",sum_tot/qnt);
    }
}