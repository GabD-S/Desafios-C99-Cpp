#include <bits/stdc++.h>

using namespace std;

vector<int> livros;

int buscaBinaria(int valor) {
    int preco;
    int pos = 0;
    int esquerda = 0;
    int direita = livros.size() - 1;
    int meio = (esquerda + direita) / 2;

    while (esquerda <= direita) {
        if (livros[meio] <= valor)
            pos = meio;
        
        if (livros[meio] <= valor)
            esquerda = meio + 1;
        else
            direita = meio - 1;

        meio = (esquerda + direita) / 2;
    }
    preco = livros[pos];
    livros.erase(livros.begin() + pos);
    return preco;
}

int main() {
    int n, dinheiro, aux;
    scanf("%d %d", &n, &dinheiro);

    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
        livros.push_back(aux);
    }
    sort(livros.begin(), livros.end());

    int x = 0, y = 0;
    while (x + y != dinheiro) {
        x = buscaBinaria(dinheiro / 2);
        y = buscaBinaria(dinheiro - x);
        if (x + y != dinheiro) {
            livros.push_back(y);
            sort(livros.begin(), livros.end());
        }
    }
    if (x <= y)
        printf("%d %d\n", x, y);
    else
        printf("%d %d\n", y, x);

    return 0;
}