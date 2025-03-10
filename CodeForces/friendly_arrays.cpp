#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<int> a(n);
        int baseXor = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            baseXor ^= a[i];
        }

        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }

        int mn, mx;
        mn = mx = baseXor;
        if (n & 1) {
            for (int i = 0; i < m; i++) {
                mx |= b[i];
            }
        } else {
            for (int i = 0; i < m; i++) {
                mn &= ~b[i];
            }
        }
        printf("%d %d\n", mn, mx);
    }

    return 0;
}