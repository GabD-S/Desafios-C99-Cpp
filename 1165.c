#include <stdio.h>
#include <stdlib.h>
int ehPrimo(int num)
{
    if (num <= 1)
    {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; 
        }
    }
    return 1; 
}

int main()
{
    int x,ent,numero;
    scanf("%d",&ent);
    for (int v=0; v < ent; v++)
    {
        scanf("%d", &numero);

        if (ehPrimo(numero))
        {
            printf("%d eh primo\n", numero);
        }
        else
        {
            printf("%d nao eh primo\n", numero);
        }
    }
    
}
