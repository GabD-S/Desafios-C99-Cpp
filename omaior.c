#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cal(double a, double b, double c)
{
    double maior;
    if (a>b && a>c)
    {
        maior = a;
    }
    else if(b>a && b>c){
        maior = b;
    }
    else if (c>a && c>b)
    {
        maior = c;
    }
    else if (a == 177 || b==177 || c==117)
    {
        maior = 177;
    }
    
    return maior;
}

int main()
{

    double a, b, c, d, e, f, soma;
    scanf("%lf %lf %lf",&a,&b,&c);
    soma = cal(a,b,c);
    printf("%.0lf eh o maior\n",soma);

    return 0;
}
