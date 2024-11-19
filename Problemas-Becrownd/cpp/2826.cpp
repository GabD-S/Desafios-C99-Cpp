#include <bits/stdc++.h>

#define MAX_LETRAS 27

int compara(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b);
}

int main(void)
{
    char matriz_palavras[2][MAX_LETRAS];

    scanf("%s", matriz_palavras[0]);
    scanf("%s", matriz_palavras[1]);

    qsort(matriz_palavras, 2, sizeof(matriz_palavras[0]), compara);

    printf("%s\n", matriz_palavras[0]);
    printf("%s\n", matriz_palavras[1]);

    return 0;
}
