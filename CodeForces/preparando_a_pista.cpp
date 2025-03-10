#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        long long total = 0;

        for (int i = 0; i < n; ++i) {
            scanf("%lld", &a[i]);
            total += a[i];
        }

        long long q = total / n;
        long long r = total % n;

        long long discomfort = r * (n - r);
        printf("%lld\n", discomfort);
    }
}

int main() {
    solve();
    return 0;
}
    