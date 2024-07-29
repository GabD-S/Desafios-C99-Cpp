#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[1000];
    int indice, contador;

    while (fgets(entrada, sizeof(entrada), stdin) != NULL)
    {
        contador = 0;
        for (indice = 0; entrada[indice] != '\0'; indice++)
        {
            if (entrada[indice] >= 'A' && entrada[indice] <= 'Z')
            {
                contador++;
                if (contador % 2 == 0)
                    entrada[indice] += 32;
            }
            else if (entrada[indice] >= 'a' && entrada[indice] <= 'z')
            {
                contador++;
                if (contador % 2 != 0)
                    entrada[indice] -= 32;
            }
        }
        printf("%s", entrada); 
    }

    return 0;
}
