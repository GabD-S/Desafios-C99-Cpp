#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        vector<int> a(n), b(n);
        int sum_a = 0, sum_b = 0;

        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            sum_a += a[i];
        }

        for (int i = 0; i < n; ++i) {
            scanf("%d", &b[i]);
            sum_b += b[i];
        }

        if (sum_a != sum_b) {
            printf("-1\n");
            continue;
        }

        vector<int> excess, deficit;
        vector<pair<int, int>> operations;

        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                excess.push_back(i);
            } else if (a[i] < b[i]) {
                deficit.push_back(i);
            }
        }

        int ei = 0, di = 0;
        while (ei < (int)excess.size() && di < (int)deficit.size()) {
            int e = excess[ei], d = deficit[di];
            int transfer = min(a[e] - b[e], b[d] - a[d]);

            for (int k = 0; k < transfer; ++k) {
                operations.emplace_back(e + 1, d + 1);
            }

            a[e] -= transfer;
            a[d] += transfer;

            if (a[e] == b[e]) ++ei;
            if (a[d] == b[d]) ++di;
        }

        printf("%d\n", (int)operations.size());
        for (const auto& op : operations) {
            printf("%d %d\n", op.first, op.second);
        }
    }
}

int main() {
    solve();
    return 0;
}
