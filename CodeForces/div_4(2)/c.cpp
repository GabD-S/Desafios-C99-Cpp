#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        for (int j = 0; j < m; j++) scanf("%lld", &b[j]);

        sort(b.begin(), b.end());

        const long long INF = 1LL << 60;
        long long curr = -INF;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            long long cand1 = (a[i] >= curr) ? a[i] : INF;

            long long target = curr + a[i], cand2 = INF;
            auto it = lower_bound(b.begin(), b.end(), target);
            if (it != b.end()) cand2 = (*it) - a[i];

            long long chosen = min(cand1, cand2);
            if (chosen == INF) {
                possible = false;
                break;
            }
            curr = chosen;
        }

        printf("%s\n", possible ? "YES" : "NO");
    }

    return 0;
}