#include <bits/stdc++.h>

using namespace std;

int main() {
    int testes;
    scanf("%d", &testes);

    while (testes--) {
        int n;
        scanf("%d", &n);
        vector<string> grafo(n);

        for (int i = 0; i < n; i++) {
            char buffer[1001];
            scanf("%s", buffer);
            grafo[i] = buffer;
        }

        vector<int> permutacao(n);
        iota(permutacao.begin(), permutacao.end(), 0);

        sort(permutacao.begin(), permutacao.end(), [&](int u, int v) {
            if (u < v) {
                return grafo[u][v] == '1';
            }
            return grafo[v][u] == '0';
        });

        for (int i = 0; i < n; i++) {
            printf("%d%c", permutacao[i] + 1, (i + 1 == n ? '\n' : ' '));
        }
    }

    return 0;
}