#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cal(int a)
{
    int cem, cinq, vint, dez, cinc, dois, um, resto;
    cem = a / 100;
    resto = a - (cem * 100);
    cinq = resto / 50;
    resto = resto - (cinq * 50);
    vint = resto / 20;
    resto = resto - (vint * 20);
    dez = resto / 10;
    resto = resto - (dez * 10);
    cinc = resto / 5;
    resto = resto - (cinc * 5);
    dois = resto / 2;
    resto = resto - (dois * 2);
    um = resto / 1;
    resto = resto - (um * 1);
    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinc);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}

int main()
{
    int a, b, c, d, gasto;
    scanf("%d", &a);
    gasto = cal(a);
    // printf("%d\n",gasto);

    return 0;
}