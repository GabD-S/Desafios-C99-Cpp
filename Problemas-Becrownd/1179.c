#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int v[15], imp[5] = {0}, par[5] = {0}, imp1[10] = {0}, par1[10] = {0};
    int val, soma=0, soma1=0, var_lim1;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &val);
        v[i] = val;
        if (val % 2 == 0 && soma < 5)
        {
            par[soma] = v[i];
            soma += 1;
        }
        if (val % 2 != 0 && soma1 < 5)
        {
            imp[soma1] = v[i];
            soma1 += 1;
        }

        if (soma == 5)
        {
            for (int l = 0; l < 5; l++)
            {
                printf("par[%d] = %d\n", l, par[l]);
                var_lim1++;
            }
            soma = 0;
        }

        if (soma1 == 5)
        {
            for (int l = 0; l < 5; l++)
            {
                printf("impar[%d] = %d\n", l, imp[l]);
                var_lim1++;
            }
            soma1 = 0;
        }
            
        if (i == 14)
        {
            if (var_lim1 != 15)
            {
                for (int l = 0; l < soma1; l++)
                {
                    printf("impar[%d] = %d\n", l, imp[l]);
                }
                for (int l = 0; l < soma; l++)
                {
                    printf("par[%d] = %d\n", l, par[l]);
                }
            }
        }
    }
}