#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100005];
    scanf("%s", s);
    int n = strlen(s);

    int prefix[100005] = {0};

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1];
        if (s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }

    int m;
    scanf("%d", &m);

    while (m--) {
        int l, r;
        scanf("%d %d", &l, &r);
        l--; r--;
        printf("%d\n", prefix[r] - prefix[l]);
    }

    return 0;
}