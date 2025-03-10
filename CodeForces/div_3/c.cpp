#include <bits/stdc++.h>

using namespace std;

void resolver() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        vector<int> x(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            scanf("%d", &x[i]);
            freq[x[i]]++;
        }

        int pontuacao = 0;

        for (const auto& par : freq) {
            int num = par.first;
            int count = par.second;
            int complemento = k - num;
            if (complemento == num) {
                pontuacao += freq[num] / 2;
            } else if (freq.count(complemento)) {
                int pares = min(freq[num], freq[complemento]);
                pontuacao += pares;
                freq[num] -= pares;
                freq[complemento] -= pares;
            }
        }

        printf("%d\n", pontuacao);
    }
}

int main() {
    resolver();
    return 0;
}