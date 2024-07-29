#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char ave[20], buffer[20];
    int pisca_resp, soma = 0, decimal;

    while (fgets(ave, sizeof(ave), stdin) != NULL)
    {
        ave[strcspn(ave, "\n")] = '\0';
        pisca_resp = strlen(ave);

        if (strcmp(ave, "caw caw") == 0)
        {
            printf("%d\n", soma);
            soma = 0;
        }

        else
        {
            for (int i = 0; i < pisca_resp; i++)
            {
                if (ave[i] == '*')
                {
                    ave[i] = '1';
                }
                else
                {
                    ave[i] = '0';
                }
            }
            decimal = strtol(ave, NULL, 2);
            soma += decimal;
        }
    }
}