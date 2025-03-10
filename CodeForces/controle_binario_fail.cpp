#include <bits/stdc++.h>

using namespace std;

int min_operations(int n, int m) {
    queue<pair<int, int>> q;
    unordered_set<int> visitados;
    
    q.push({n, 0});
    visitados.insert(n);

    while (!q.empty()) {
        auto [atual, passos] = q.front();
        q.pop();

        if (atual == m) return passos;

        if (atual * 2 <= 10000 && !visitados.count(atual * 2)) {
            q.push({atual * 2, passos + 1});
            visitados.insert(atual * 2);
        }
        if (atual - 1 > 0 && !visitados.count(atual - 1)) {
            q.push({atual - 1, passos + 1});
            visitados.insert(atual - 1);
        }
    }
    return -1; 
}

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 1; 
    cout << min_operations(n, m) << '\n';
    return 0;
}
