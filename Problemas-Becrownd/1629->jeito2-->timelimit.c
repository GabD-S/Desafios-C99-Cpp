#include <stdio.h>
#include <string.h>

int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        while (n > 0)
        {
            n--;
            char linha[100];
            scanf("%s", linha);
            int um = 0;
            int zero = 0;
            int length = strlen(linha);
            for (int i = 0; i < length; i++)
            {
                if (i % 2 != 0)
                {
                    um += linha[i] - '0';
                }
                else
                {
                    zero += linha[i] - '0';
                }
            }
            int resultado = 0;
            while (um > 0 || zero > 0)
            {
                if (um > 0)
                {
                    resultado += um % 10;
                    um /= 10;
                }
                if (zero > 0)
                {
                    resultado += zero % 10;
                    zero /= 10;
                }
            }
            printf("%d\n", resultado);
        }
    }
    return 0;
}
