#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

void simplificar(int numerador, int denominador, int *novoNumerador, int *novoDenominador)
{
    int divisorComum = gcd(numerador, denominador);
    *novoNumerador = numerador / divisorComum;
    *novoDenominador = denominador / divisorComum;
}

void soma(int a, int b, int c, int d, int *resultadoNumerador, int *resultadoDenominador)
{
    int numerador = (a * d) + (b * c);
    int denominador = b * d;
    simplificar(numerador, denominador, resultadoNumerador, resultadoDenominador);
}

int main()
{
    int a, b, c, d;
    int numerador1, denominador1;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    soma(a, b, c, d, &numerador1, &denominador1);

    printf("%d %d\n", numerador1, denominador1);

    return 0;
}
