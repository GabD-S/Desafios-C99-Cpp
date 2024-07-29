#include <stdio.h>
#include <string.h>

int main(void)
{
    char tt[501];
    int tam;

    if (fgets(tt, sizeof(tt), stdin) != NULL)
    {
        size_t len = strlen(tt);
        if (len > 0 && tt[len - 1] == '\n')
        {
            tt[len - 1] = '\0';
        }

        tam = strlen(tt);

        if (tam > 140)
            printf("MUTE\n");
        else
            printf("TWEET\n");
    }

    return 0;
}
