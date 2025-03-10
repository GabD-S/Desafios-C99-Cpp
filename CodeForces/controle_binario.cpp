#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> q;
    q.push({n, 0}); 

    map<int, int> dist;
    dist[n] = 0;

    while (!q.empty()) {
        int atual = q.front().first;
        int cliques = q.front().second;
        q.pop();

        if (atual == m) {
            cout << cliques << endl;
            return 0;
        }

        int vermelho = atual * 2;
        if (vermelho >= 1 && vermelho <= 20000 && dist.find(vermelho) == dist.end()) {
            dist[vermelho] = cliques + 1;
            q.push({vermelho, cliques + 1});
        }

        int azul = atual - 1;
        if (azul >= 1 && azul <= 20000 && dist.find(azul) == dist.end()) {
            dist[azul] = cliques + 1;
            q.push({azul, cliques + 1});
        }
    }

    return 0;
}