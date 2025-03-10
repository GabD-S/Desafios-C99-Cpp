#include <bits/stdc++.h>

using namespace std;

bool podeDistribuir(const vector<int>& chocolates, int maes, int quantidadePorMae) {
    int totalDistribuido = 0;
    for (int chocolate : chocolates)
        totalDistribuido += chocolate / quantidadePorMae;

    return totalDistribuido >= maes;
}

int maximoChocolatesPorMae(int totalChocolates, int maes, vector<int>& chocolates) {
    int esquerda = 1;
    int direita = chocolates[0];
    int melhorQuantidade = 0;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (podeDistribuir(chocolates, maes, meio)) {
            melhorQuantidade = meio;
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    
    return melhorQuantidade;
}

int main() {
    int totalChocolates, maes;
    scanf("%d %d", &totalChocolates, &maes);
    vector<int> chocolates(totalChocolates);
    for (int i = 0; i < totalChocolates; ++i)
        scanf("%d", &chocolates[i]);

    sort(chocolates.rbegin(), chocolates.rend());
    printf("%d\n", maximoChocolatesPorMae(totalChocolates, maes, chocolates));

    return 0;
}