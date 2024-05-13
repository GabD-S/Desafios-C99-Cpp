#include <stdio.h>

int main(void)
{
    int tama;

    while (tama != 0)
    {
        scanf("%d", &tama);
        for (int a = 1; a <= tama; a++)
        {
            for (int i = 0; i < tama; i++)
            {
                printf("%d ", 1);
            }
            printf("\n");
        }
        printf("\n");
    }
}