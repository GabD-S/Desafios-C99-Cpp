#include <bits/stdc++.h>
using namespace std;

int buscaBinaria(vector<int>& A, int n, int x) {
    int p = 0, r = n - 1;
    while (p <= r) {
        int q = (p + r) / 2;

        if (A[q] == x) {
            return q;
        } else if (A[q] > x) {
            r = q - 1;
        } else {
            p = q + 1;

        }
    }
    return -1;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        vector<int> vet(n);
        int soma = 0, cont = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }

        for (int i = 0; i < n; i++) {
            soma += vet[i];
            vet[i] = soma;
        }

        if (soma % 3 == 0) {
            int somaTerco = soma / 3;
            for (int i = 0; i < n; i++) {
                if (buscaBinaria(vet, n, vet[i] + somaTerco) != -1) {
                    if (buscaBinaria(vet, n, vet[i] + somaTerco * 2) != -1) {
                        cont++;
                    }
                }
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}