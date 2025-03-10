#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, k;
    scanf("%lld %lld", &n, &k);

    ll esquerda = 1, direita = n;
    while (esquerda != direita) {
        ll meio = (esquerda + direita) / 2;
        ll x = meio;
        ll soma = 0;
        while (x != 0) {
            soma += x;
            x /= k;
        }
        if (soma >= n) {
            direita = meio;
        } else {
            esquerda = meio + 1;
        }
    }
    printf("%lld\n", esquerda);

    return 0;
}