#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<long long, long long>> arr_info;
        long long total_internal = 0;

        for (int i = 0; i < n; i++) {
            long long s = 0, internal = 0;

            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;
                s += x;
                internal += s;
            }

            arr_info.emplace_back(s, internal);
            total_internal += internal;
        }

        sort(arr_info.rbegin(), arr_info.rend());

        long long extra = 0;

        for (int i = 0; i < n; i++) {
            long long s = arr_info[i].first;
            long long coeff = n - 1 - i;
            extra += coeff * s;
        }

        extra *= m;

        long long ans = total_internal + extra;

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}