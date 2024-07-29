#include <stdio.h>

int main(void)
{

    int soma = 0, limite, acaba;

    scanf("%d", &acaba);

    for (int i = 0; i < acaba; i++)
    {
        scanf("%d", &limite);

        for (int i = 1; i <= limite; i++)
        {
            if (i % 2 != 0)
            {
                soma++;
            }
            else if (i % 2 == 0)
            {
                soma--;
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }
}