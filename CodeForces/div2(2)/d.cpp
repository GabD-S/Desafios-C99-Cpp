#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, s1, s2, m1, m2;
        scanf("%d %d %d %d", &n, &s1, &s2, &m1);

        vector<vector<int>> g1(n + 1);
        for (int i = 0; i < m1; ++i) {
            int u, v;
            scanf("%d %d", &u, &v);
            g1[u].push_back(v);
            g1[v].push_back(u);
        }

        scanf("%d", &m2);
        vector<vector<int>> g2(n + 1);
        for (int i = 0; i < m2; ++i) {
            int u, v;
            scanf("%d %d", &u, &v);
            g2[u].push_back(v);
            g2[v].push_back(u);
        }

        vector<bool> good(n + 1, false);
        for (int v = 1; v <= n; ++v) {
            set<int> s(g2[v].begin(), g2[v].end());
            for (int nb : g1[v]) {
                if (s.count(nb)) {
                    good[v] = true;
                    break;
                }
            }
        }

        const ll INF = LLONG_MAX;
        vector<vector<ll>> dist(n + 1, vector<ll>(n + 1, INF));
        dist[s1][s2] = 0;

        priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> pq;
        pq.push({0, s1, s2});

        ll ans = -1;
        while (!pq.empty()) {
            auto [d, u, v] = pq.top();
            pq.pop();

            if (d != dist[u][v]) continue;

            if (u == v && good[u]) {
                ans = d;
                break;
            }

            for (int nu : g1[u]) {
                for (int nv : g2[v]) {
                    ll nd = d + abs(nu - nv);
                    if (nd < dist[nu][nv]) {
                        dist[nu][nv] = nd;
                        pq.push({nd, nu, nv});
                    }
                }
            }
        }

        printf("%lld\n", ans);
    }
}

int main() {
    solve();
    return 0;
}
