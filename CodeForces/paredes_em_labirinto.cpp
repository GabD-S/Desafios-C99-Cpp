#include <bits/stdc++.h>

using namespace std;

const int max_size = 502;
char mapa[max_size][max_size];
bool visitados[max_size][max_size];
vector<pair<int, int>> caminho;
int n, m, k;

void dfs(int x, int y) {
    visitados[x][y] = true;
    caminho.push_back({x, y});
    
    vector<pair<int, int>> direcoes = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    for (auto [dx, dy] : direcoes) {
        int nx = x + dx, ny = y + dy;
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && mapa[nx][ny] == '.' && !visitados[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> mapa[i];
    }

    bool start = false;
    for (int i = 0; i < n && !start; i++) {
        for (int j = 0; j < m && !start; j++) {
            if (mapa[i][j] == '.') {
                dfs(i, j);
                start = true;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        auto [x, y] = caminho.back();
        caminho.pop_back();
        mapa[x][y] = 'X';
    }

    for (int i = 0; i < n; i++) {
        cout << mapa[i] << '\n';
    }

    return 0;
}
