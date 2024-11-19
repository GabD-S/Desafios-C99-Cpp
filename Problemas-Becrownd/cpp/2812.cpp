#include <bits/stdc++.h>
#define MAX_TAMANHO 10001

int order(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int order_inversor(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    int repeat, tamanho, termo, soma;

    scanf("%d", &repeat);

    for (int p = 0; p < repeat; p++)
    {
    
    scanf("%d",&tamanho);
    int list[tamanho], list_inverse[tamanho];

    soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &termo);
        if (termo % 2 != 0)
        {   
            list[soma] = termo;
            list_inverse[soma] = termo;
            soma++;
        }
    }  

    qsort(list, soma, sizeof(int), order);
    qsort(list_inverse, soma, sizeof(int), order_inversor);

    int i = 0, j = 0, count = 0;
    bool alternar = true;

    while (count < soma)
    {
        if (alternar && i < soma)
        {
            printf("%d", list_inverse[i]);
            i++;
        }
        else if (!alternar && j < soma)
        {
            printf("%d", list[j]);
            j++;
        }
        if(count < soma -1)
            printf(" ");
        alternar = !alternar;
        count++;
    }
    printf("\n");
    }
}
