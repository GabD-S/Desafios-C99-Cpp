#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

const int max_size = 502;
char mapa[max_size][max_size];
bool visitados[max_size][max_size];

void resetaMapa(int n, int m) {
    memset(mapa, '#', sizeof(mapa));
}

void resetaVisitados(int n, int m) {
    memset(visitados, false, sizeof(visitados));
}

void printMapa(int n, int m) {
    for (int i = 1; i <= n; i++, putchar('\n'))
        for (int j = 1; j <= m; j++)
            putchar(mapa[i][j]);
}

bool contaGrupos(int n, int m) {
    int grupos = 0;
    queue<pii> atual;
    pii direcoes[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mapa[i][j] == '.' && !visitados[i][j]) {
                if (++grupos > 1) return false;
                atual.push({i, j});
                visitados[i][j] = true;
                while (!atual.empty()) {
                    auto [x, y] = atual.front(); atual.pop();
                    for (pii d : direcoes) {
                        int nx = x + d.first, ny = y + d.second;
                        if (mapa[nx][ny] == '.' && !visitados[nx][ny]) {
                            atual.push({nx, ny});
                            visitados[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
    return true;
}

void pareda(int n, int m, int k) {
    vector<pii> pontos;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mapa[i][j] == '.') {
                pontos.push_back({i, j});
            }
        }
    }

    for (auto [i, j] : pontos) {
        if (k <= 0) break;
        mapa[i][j] = 'X';
        if (!contaGrupos(n, m)) {
            mapa[i][j] = '.';
        } else {
            k--;
        }
        resetaVisitados(n, m);
    }
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    getchar();

    resetaMapa(n, m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%c", &mapa[i][j]);
        }
        getchar();
    }

    pareda(n, m, k);
    printMapa(n, m);

    return 0;
}