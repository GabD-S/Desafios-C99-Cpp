#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int teste = 1; 
    while (1)
    {
        int n;
        if (scanf("%d", &n) == EOF)
        {
            break;
        }
        if (n == 0)
        {
            break;
        }

        char **letras = (char **)malloc(n * sizeof(char *));
        int maxLen = 0;

        for (int i = 0; i < n; i++)
        {
            letras[i] = (char *)malloc(101 * sizeof(char)); 
            scanf(" %[^\n]", letras[i]);                    
            int len = strlen(letras[i]);
            if (len > maxLen)
            {
                maxLen = len;
            }
        }

        if (!teste)
        {
            printf("\n");
        }

        for (int i = 0; i < n; i++)
        {
            printf("%*s\n", maxLen, letras[i]);
        }

        for (int i = 0; i < n; i++)
        {
            free(letras[i]);
        }
        free(letras);

        teste = 0;
    }
    return 0;
}
