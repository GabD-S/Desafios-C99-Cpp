#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double cal(int a)
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
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vint);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinc);
    printf("%d nota(s) de R$ 2.00\n", dois);

    return um;
}

double cal2(double a, int gasto)
{

    int ent,cem, cinq, vint, dez, cinc, dois, um,a1;
    double b, c, res, resto;
    ent = (int)a;
    res = (a - ent)*100;
    a1=(int)res;

    cinq = a1 / 50;
    resto = a1 - (cinq * 50);
    vint = resto / 25;
    resto = resto - (vint * 25);
    dez = resto / 10;
    resto = resto - (dez * 10);
    cinc = resto / 5;
    resto = resto - (cinc * 5);
    dois = resto / 1;
    resto = resto - (dois * 1);
    um = resto / 1;
    resto = resto - (um * 1);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", gasto);
    printf("%d moeda(s) de R$ 0.50\n", cinq);
    printf("%d moeda(s) de R$ 0.25\n", vint);
    printf("%d moeda(s) de R$ 0.10\n", dez);
    printf("%d moeda(s) de R$ 0.05\n", cinc);
    printf("%d moeda(s) de R$ 0.01\n", dois);

    return 0;
}

int main()
{
    double a;
    int  b, c, d, gasto;
    scanf("%lf", &a);
    gasto = cal(a);

    d = cal2(a,gasto);
    // printf("%d\n",gasto);

    return 0;
}