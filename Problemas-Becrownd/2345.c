#include <stdio.h>
#include <stdlib.h>
#define Max 10

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int times[Max];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &times[i]);
    }

    qsort(times, Max, sizeof(int), compare);

    printf("%d\n", abs((times[0] + times[3]) - (times[1] + times[2])));

    return 0;
}
