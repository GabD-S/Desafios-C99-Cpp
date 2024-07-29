#include <stdio.h>

int main()
{
    int linhas, colunas, verifica, loc1, loc2;
    scanf("%d%d", &linhas, &colunas);
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 1; i < linhas - 1; i++)
    {
        for (int j = 1; j < colunas - 1; j++)
        {
            verifica = 1;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k == i && l == j)
                    {
                        if (matriz[k][l] != 42)
                        {
                            verifica = 0;
                        }
                    }
                    else
                    {
                        if (matriz[k][l] != 7)
                        {
                            verifica = 0;
                        }
                    }
                }
            }
            if (verifica)
            {
                loc1 = i + 1;
                loc2 = j + 1;
                printf("%d %d\n", loc1, loc2);
                return 0;
            }
        }
    }
    printf("0 0\n");
    return 0;
}
