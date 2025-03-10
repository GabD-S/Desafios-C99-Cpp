#include <bits/stdc++.h>
using namespace std;

long long count_pairs(vector<int>& a, int n, int l, int r) {
    sort(a.begin(), a.end());
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        int j_min = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
        int j_max = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin() - 1;

        if (j_max >= j_min) {
            count += (j_max - j_min + 1);
        }
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, l, r;
        scanf("%d %d %d", &n, &l, &r);

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        printf("%lld\n", count_pairs(a, n, l, r));
    }

    return 0;
}
