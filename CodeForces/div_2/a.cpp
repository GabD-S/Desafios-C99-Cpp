#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(void) {
    int testes;
    scanf("%lld", &testes);

    while (testes--) {
        int linhas, colunas;
        scanf("%lld %lld", &linhas, &colunas);
        int resposta = 4 * colunas * linhas;
        for (int i = 0; i < linhas; i++) {
            int x, y;
            scanf("%lld %lld", &x, &y);

            if (i == 0) {
                continue;
            }
            resposta -= 2 * (colunas - x + colunas - y);
        }
        printf("%lld\n", resposta);
    }

    return 0;
}