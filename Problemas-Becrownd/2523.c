#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam_do_seubeto 27

int main(void)
{

    char seubeto[Tam_do_seubeto];
    int n, leio;

    while (scanf("%s", seubeto) != EOF)
    {
    
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &leio);
            printf("%c", seubeto[leio-1]);
        }
        printf("\n");
    }
}