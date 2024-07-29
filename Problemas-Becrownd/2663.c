#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    int n, k, *v, soma = 0;

    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));

    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    qsort(v, n, sizeof(int), compare);

    
    
    k= k-1;
    // treeeeeeeeeeees dia nessa questaao por causa de um kkkkkkkkkkkkkkkkkkkkkkkkkkkkk-1
    for (int i = 0; i < n; i++)
    {
        if (i < k || (i >= k && v[i] == v[k]))
        {
            //printf("v[i]->%d i>%d  v[k]->%d  \n", v[i], i, v[k]);

            soma++;
        }
    }
    printf("%d\n", soma);
    free(v);

    return 0;
}
