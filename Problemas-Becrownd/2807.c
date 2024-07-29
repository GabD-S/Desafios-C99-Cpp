#include <stdio.h>

int main()
{
    int index;
    unsigned int num;
    long long sequencia[100] = {0};

    sequencia[0] = 1;
    sequencia[1] = 1;

    scanf("%u", &num);

    for (index = 2; index < num; ++index)
        sequencia[index] = sequencia[index - 1] + sequencia[index - 2];

    for (index = num - 1; index >= 1; --index)
        printf("%lld ", sequencia[index]);

    printf("%lld\n", sequencia[index]);

    return 0;
}
