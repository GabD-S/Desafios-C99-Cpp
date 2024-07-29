#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam_do_seubeto 27

int main(void)
{

    char seubeto[Tam_do_seubeto];
    int n, leio;

    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int j = 0; j < 37; j++)
        {
            if (i == 0 && j == 0)
            {
                printf("x = 35");
                j += 5;
            }
            else if (i == 2 && j == 15)
            {
                printf("x = 35");
                j += 5;
            }
            else if (i == 4 && j == 31)
            {
                printf("x = 35");
                j += 5;
            }
            else
                printf(" ");
        }
        printf("|");
        printf("\n");
    }

    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}
