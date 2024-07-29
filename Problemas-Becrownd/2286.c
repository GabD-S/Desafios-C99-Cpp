#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void)
{

    int n, a, b, sum = 1;
    char nm1[MAX], nm2[MAX];

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            return 0;
        scanf("%s\n%s", nm1, nm2);
        printf("Teste %d\n", sum);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d", &a, &b);
            if ((a + b) % 2 == 0)
                printf("%s\n", nm1);
            else if ((a + b) % 2 != 0)
                printf("%s\n", nm2);
        }
        printf("\n");
        sum++;
    }
}