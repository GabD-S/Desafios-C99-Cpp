#include <stdio.h>
#include <string.h>

int main()
{
    char linha[102], linha_invertida[102];
    int i, j, tamanho, metade_tamanho, k, n;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        fgets(linha, 102, stdin);
        tamanho = strlen(linha);
        linha[tamanho - 1] = '\0';

        tamanho = strlen(linha);
        metade_tamanho = tamanho / 2;

        k = 0;
        for (j = metade_tamanho - 1; j >= 0; j--)
        {
            linha_invertida[k] = linha[j];
            k++;
        }
        for (j = tamanho - 1; j >= metade_tamanho; j--)
        {
            linha_invertida[k] = linha[j];
            k++;
        }
        linha_invertida[tamanho] = '\0';

        puts(linha_invertida);
    }

    return 0;
}
