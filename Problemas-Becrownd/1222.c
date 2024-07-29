#include <stdio.h>
#include <string.h>

#define MAX_NUM 10001

int main(void)
{
    int n, l, c, x;
    int linhas, paginas, letras;
    char palavra[MAX_NUM + 1];

    while (scanf("%d %d %d", &n, &l, &c) != EOF)
    {
        paginas = linhas = 1;

        scanf("%s", palavra);
        letras = strlen(palavra);

        n--;
        for (int i = 0; i < n; ++i)
        {
            scanf("%s", palavra);
            x = strlen(palavra);

            if ((letras + x + 1) <= c)
            {
                letras += x + 1;
            }
            else
            {
                ++linhas;
                if (linhas > l)
                {
                    ++paginas;
                    linhas = 1;
                }
                letras = x; 
            }
        }

        printf("%d\n", paginas);
    }

    return 0;
}

/*

    MAXIMO DE PALAVRA POR LINHA -> N

    MAXIMO DE LINHAS POR PAGINA -> L

    MAXIMO DE CARACTER POR LINHA -> C


    PARA CARACTEER EM MAXIMO FIM

    SOMA LINHA

    E SE LINHA == MAXIMO DE LINHA

    SOMA LIMITE DE LINHA

    E SE LIMITE DE LINHA > PAGINA

    SOMA PAGINA

    MOSTRA PAGINA



*/