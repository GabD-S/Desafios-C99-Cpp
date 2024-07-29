#include <stdio.h>

int main(void)
{

    int n, l, c, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &c);
        if (l > c)
            sum += c;
        else
            continue;
    }
    printf("%d\n", sum);
}