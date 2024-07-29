#include <stdio.h>

int main()
{
    int A[5], B[5];
    int resultado;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &B[i]);
    }
    resultado = 1; 
    for (int i = 0; i < 5; ++i)
    {
        if (A[i] == B[i])
        {
            resultado = 0; 
            break;
        }
    }
    printf("%c\n", resultado ? 'Y' : 'N');

    return 0;
}
