#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) cin >> b[j];

        sort(b.begin(), b.end());

        long long cur = -1e18;
        bool possible = true;

        for (long long ai : a) {
            long long cand1 = (ai >= cur) ? ai : LLONG_MAX;

            long long needed = cur + ai;
            auto it = lower_bound(b.begin(), b.end(), needed);
            long long cand2 = (it != b.end()) ? (*it - ai) : LLONG_MAX;

            if (cand1 == LLONG_MAX && cand2 == LLONG_MAX) {
                possible = false;
                break;
            }

            long long best = min(cand1, cand2);
            cur = best; 
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}