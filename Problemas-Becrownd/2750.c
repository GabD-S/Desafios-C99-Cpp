#include <stdio.h>

int main()
{
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for (int i = 0; i <= 15; i++)
    {
        printf("|%7d    |", i);

        printf(" %4o    |", i);

        printf(" %7X       |\n", i);
    }

    printf("---------------------------------------\n");

    return 0;
}
