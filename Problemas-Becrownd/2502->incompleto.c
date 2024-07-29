#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_C 22
#define MAX_N 101

void min(char *cifra)
{
    while (*cifra)
    {
        *cifra = tolower((unsigned char)*cifra);
        cifra++;
    }
}

int main(void)
{
    int c, n, tamanho, val = 101;
    char descrip[MAX_C], descrip_2[MAX_C], cifra[MAX_N], trocando[MAX_C];

    while (scanf("%d %d", &c, &n) != EOF)
    {
        
        scanf("%s %s", descrip, descrip_2);
        min(descrip);
        min(descrip_2);
        
        for (int i = 0; i < n; i++)
        {
            while (val--)
            {
                scanf("%s", cifra);
                min(cifra);
                tamanho = strlen(cifra);
                for (int i = 0; i <= tamanho; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        // printf("-cif->%c descrip->%c", cifra[i], descrip_2[j]);
                        if (cifra[i] == descrip_2[j])
                        {
                            // printf("  troco por->%c\n", descrip[j]);
                            cifra[i] = descrip[j];
                            break;
                        }
                        else if (cifra[i] == descrip[j])
                        {
                            cifra[i] = descrip_2[j];
                        }
                        // printf("\n");
                    }
                }
                printf("%s ", cifra);
            }
            printf("\n");
        }
    }
    return 0;
}

/*

#include <stdio.h>
#include <ctype.h>

int main()
{
    int C, N;
    char cifra1[21], cifra2[21], traducao[256];

    while (scanf("%d %d\n", &C, &N) != EOF)
    {
        for (int i = 32; i < 123; ++i)
        {
            traducao[i] = i;
        }

        scanf("%[^\n]\n", &cifra1);
        scanf("%[^\n]\n", &cifra2);

        for (int i = 0; i < C; ++i)
        {
            char maiuscula1 = cifra1[i], minuscula1 = isalpha(cifra1[i]) ? tolower(cifra1[i]) : cifra1[i];
            char maiuscula2 = cifra2[i], minuscula2 = isalpha(cifra2[i]) ? tolower(cifra2[i]) : cifra2[i];

            traducao[maiuscula1] = maiuscula2;
            traducao[minuscula1] = minuscula2;
            traducao[maiuscula2] = maiuscula1;
            traducao[minuscula2] = minuscula1;
        }

        for (int i = 0; i < N; ++i)
        {
            char letra;
            while (scanf("%c", &letra) != EOF)
            {
                if (letra == '\n')
                {
                    break;
                }

                printf("%c", traducao[letra]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

*/
