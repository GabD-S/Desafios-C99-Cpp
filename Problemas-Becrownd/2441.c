#include <stdio.h>

int main()
{
    int f1, f2, f3;
    int temp;
    scanf("%d %d %d", &f1, &f2, &f3);

    if (f1 > f2)
    {
        temp = f1;
        f1 = f2;
        f2 = temp;
    }
    if (f2 > f3)
    {
        temp = f2;
        f2 = f3;
        f3 = temp;
    }
    if (f1 > f2)
    {
        temp = f1;
        f1 = f2;
        f2 = temp;
    }

    int count = 0;

    for (int i = 1; i <= 600; i++)
    {
        if ((i <= f1 || i > f1 + 200) &&
            (i <= f2 || i > f2 + 200) &&
            (i <= f3 || i > f3 + 200))
        {
            count++;
        }
    }

    if (count == 1)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", count * 100);
    }

    return 0;
}
