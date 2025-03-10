#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        char s[n + 1]; 
        scanf("%s", s);

        if (b >= 0) {
            printf("%d\n", a * n + b * n);
        } else {
            int groups = 1;
            for (int i = 1; i < n; ++i) {
                if (s[i] != s[i - 1]) {
                    groups++;
                }
            }
            printf("%d\n", a * n + b * (groups / 2 + 1));
        }
    }

    return 0;
}
