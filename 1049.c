#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100], c[100];

    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    fgets(c, 100, stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    c[strcspn(c, "\n")] = '\0';

    if (strcmp(a, "vertebrado") == 0)
    {
        if (strcmp(b, "ave") == 0)
        {
            if (strcmp(c, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(c, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(b, "inseto") == 0)
        {
            if (strcmp(c, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(c, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
