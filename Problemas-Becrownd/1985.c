#include <stdio.h>

int main()
{
    int numero, qnt, n;
    double pedido, soma = 0.0;
    int codigos[] = {1001, 1002, 1003, 1004, 1005};
    double precos[] = {1.50, 2.50, 3.50, 4.50, 5.50};

    scanf("%d", &n); 

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &numero, &qnt);

        for (int j = 0; j < 5; j++)
        {
            if (numero == codigos[j])
            {
                pedido = precos[j] * qnt;
                soma += pedido;
                break;
            }
        }
    }

    printf("%.2f\n", soma);
    return 0;
}
