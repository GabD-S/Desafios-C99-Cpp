#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 101

int main(void)
{

    int caminho[max][max] = {0};
    int posicao_sua[2],posicao_pokemon[2];
    int n, m,andou;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &caminho[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (caminho[i][j] == 2)
                {
                    posicao_pokemon[0] = i;
                    posicao_pokemon[1] = j;
                }
                if (caminho[i][j] == 1)
                {
                    posicao_sua[0] = i;
                    posicao_sua[1] = j;
                }
            }
        }

        andou = abs(posicao_sua[0] - posicao_pokemon[0]) + abs(posicao_sua[1] - posicao_pokemon[1]);
        printf("%d\n",andou);
    }
}