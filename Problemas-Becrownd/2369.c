#include <stdio.h>

int main(void)
{

    int valor, total = 0;

    scanf("%d", &valor);

    if (valor >= 101)
    {
        total = (valor - 100) * 5 + 167;
    }
    else if (valor >= 31 && valor <= 100)
    {
        total = ((valor - 30) * 2) + 27;
    }
    if (valor >= 11 && valor <= 30)
    {
        total = (valor - 10) + 7;
    }
    if (valor <= 10)
    {
        total = 7;
    }

    printf("%d\n", total);
}