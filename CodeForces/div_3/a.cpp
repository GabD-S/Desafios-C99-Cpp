#include <bits/stdc++.h>

int calcular(int a1, int a2, int a3, int a4, int a5) {
    int contador = 0;
    if (a3 == a1 + a2) contador++;
    if (a4 == a2 + a3) contador++;
    if (a5 == a3 + a4) contador++;
    return contador;
}

int main(void) {
    int testes;
    scanf("%d", &testes);

    while (testes--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);

        int max_fib = 0;

        int a3 = a1 + a2;
        max_fib = calcular(a1, a2, a3, a4, a5);

        a3 = a4 - a2;
        int fib = calcular(a1, a2, a3, a4, a5);
        if (fib > max_fib) max_fib = fib;

        a3 = a5 - a4;
        fib = calcular(a1, a2, a3, a4, a5);
        if (fib > max_fib) max_fib = fib;

        printf("%d\n", max_fib);
    }

    return 0;
}