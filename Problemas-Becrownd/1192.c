#include <stdio.h>

int main()
{
    char ent[4];
    int limite, num1, num2;

    scanf("%d", &limite);

    for (int i = 0; i < limite; i++)
    {
        scanf("%s", ent);

        num1 = ent[0] - '0';
        num2 = ent[2] - '0';

        if (num1 == num2)
        {
            printf("%d\n", num1 * num2);
        }
        else if ('A' <= ent[1] && ent[1] <= 'Z')
        {
            printf("%d\n", num2 - num1);
        }
        else
        {
            printf("%d\n", num1 + num2);
        }
    }

    return 0;
}
