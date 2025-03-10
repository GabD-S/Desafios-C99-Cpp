#include <bits/stdc++.h>
using namespace std;

int main() {
    int numLivros, tempoDisponivel;
    scanf("%d %d", &numLivros, &tempoDisponivel);
    vector<int> temposLeitura(numLivros);
    for (int i = 0; i < numLivros; ++i)
        scanf("%d", &temposLeitura[i]);

    int maximoLivros = 0;
    int tempoAtual = 0;
    int inicio = 0;

    for (int fim = 0; fim < numLivros; ++fim) {
        tempoAtual += temposLeitura[fim];

        while (tempoAtual > tempoDisponivel) {
            tempoAtual -= temposLeitura[inicio];
            ++inicio;
        }

        maximoLivros = max(maximoLivros, fim - inicio + 1);
    }

    printf("%d\n", maximoLivros);
    return 0;
}



