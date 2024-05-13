#include <stdio.h>

int main()
{

    int entra, sm_tot = 0, sm_co = 0, som_ra = 0, sm_sap = 0;
    char ltr;
    double qnt;
    scanf("%d", &entra);

    for (int i = 1; i <= entra; i++)
    {
        scanf("%lf %c", &qnt, &ltr);
        if (ltr == 'C')
        {
            sm_co += qnt;
            sm_tot += qnt;
        }
        else if (ltr == 'R')
        {
            som_ra += qnt;
            sm_tot += qnt;
        }
        else if (ltr == 'S')
        {
            sm_sap += qnt;
            sm_tot += qnt;
        }
    }
    double aux=sm_tot,prct_co = (sm_co / aux) * 100;
    double prct_ra = (som_ra / aux) * 100;
    double prct_sa = (sm_sap / aux) * 100;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", sm_tot, sm_co, som_ra, sm_sap);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", prct_co, prct_ra, prct_sa);
}