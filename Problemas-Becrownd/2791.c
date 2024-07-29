#include <stdio.h>
#define max 4

int main(void)
{

    int v[4];

    for (int i = 1; i <= 4; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] != 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}