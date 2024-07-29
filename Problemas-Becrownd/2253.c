#include <stdio.h>
#include <string.h>

int main()
{
    char senha[101];
    int tam, inv, maius, minus, num;

    while (fgets(senha, sizeof(senha), stdin) != NULL)
    {
        senha[strcspn(senha, "\n")] = '\0';
        tam = strlen(senha);

        if (tam < 6 || tam > 32)
        {
            printf("Senha invalida.\n");
            continue;
        }

        inv = 0, maius = 0, minus = 0, num = 0;

        for (int i = 0; i < tam; ++i)
        {
            if ((senha[i] >= 'a' && senha[i] <= 'z'))
            {
                minus = 1;
            }
            else if (senha[i] >= 'A' && senha[i] <= 'Z')
            {
                maius = 1;
            }
            else if (senha[i] >= '0' && senha[i] <= '9')
            {
                num = 1;
            }
            else
            {
                inv = 1;
                break;
            }
        }

        if (inv || !(maius && minus && num))
        {
            printf("Senha invalida.\n");
        }
        else
        {
            printf("Senha valida.\n");
        }
    }

    return 0;
}
