#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &s[i]);
        }

        sort(s.begin(), s.end());

        int min_diff = 10000000;
        for (int i = 1; i < n; i++) {
            min_diff = min(min_diff, s[i] - s[i - 1]);
        }

        printf("%d\n", min_diff);
    }

    return 0;
}
